/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "dialog.h"
#include "main.h"
#include "quest.h"
#include "inventory.h"
#include "player.h"
#include "manage_view.h"

bool intersect_pnj(sfCircleShape *circle)
{
    sfFloatRect rectangleBounds = sfRectangleShape_getGlobalBounds
        (player.collision);
    sfVector2f circleCenter = sfCircleShape_getPosition(circle);
    circleCenter.x += radius_90;
    circleCenter.y += radius_90;
    float circleRadius = sfCircleShape_getRadius(circle);
    sfFloatRect circleBounds = {circleCenter.x - circleRadius,
    circleCenter.y - circleRadius, circleRadius * 2.f, circleRadius * 2.f};
    if (sfFloatRect_intersects(&rectangleBounds, &circleBounds, NULL)) {
        return true;
    }
    return false;
}

void print_text_char(int i)
{
    int current_char = 0;
    int max_char = my_strlen(create_dialog[i].text_to_write);
    char message[1000];
    render_player();
    while (current_char < max_char) {
        float elapsed_seconds =
            sfTime_asSeconds(sfClock_getElapsedTime(create_dialog[i].clock));
        if (elapsed_seconds > 0.1) {
            message[current_char] = create_dialog[i].
                text_to_write[current_char];
            message[current_char + 1] = '\0';
            ++current_char;
            sfText_setString(create_dialog[i].text, message);
            sfRenderWindow_drawText(window, create_dialog[i].text, NULL);
            sfClock_restart(create_dialog[i].clock);
        }
        sfRenderWindow_display(window);
    }
    message[current_char] = '\0';
    sfSleep((sfTime) {2000000});
}

void pnj_amuletter(int i)
{
    if (create_dialog[i].when_active_dialog == PNJ_QUEST_SKELET) {
        if (intersect_pnj(create_dialog[i].circle) == true &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_SKELET] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}

void pnj_totem(int i)
{
    if (create_dialog[i].when_active_dialog == PNJ_QUEST_ARROW) {
        if (intersect_pnj(create_dialog[i].circle) == true &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_ARROW] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}
