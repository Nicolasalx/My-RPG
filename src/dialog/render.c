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

#define radius 90

bool intersect_pnj(sfCircleShape *circle)
{
    sfFloatRect rectangleBounds = sfRectangleShape_getGlobalBounds(player.collision);
    sfVector2f circleCenter = sfCircleShape_getPosition(circle);
    circleCenter.x += radius;
    circleCenter.y += radius;
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
    while (current_char < max_char) {
        float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(create_dialog[i].clock));
        if (elapsed_seconds > 0.1) {
            message[current_char] = create_dialog[i].text_to_write[current_char];
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
        if (intersect_pnj(create_dialog[i].circle) == true && sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_SKELET] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}

void pnj_totem(int i)
{
    if (create_dialog[i].when_active_dialog == PNJ_QUEST_ARROW) {
        if (intersect_pnj(create_dialog[i].circle) == true && sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_ARROW] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}

void pnj_boss(int i)
{
    if (create_dialog[i].when_active_dialog == PNJ_QUEST_BOSS) {
        if (intersect_pnj(create_dialog[i].circle) == true && sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_BOSS] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}

void render_dialog(void)
{
    if (current_level != 0) {
        return;
    }
    static bool player_pos_start = false;
    if (player_pos_start == false) {
        player.pos.x = 300;
        player.pos.y = 450;
        player_pos_start = true;
    }
    for (int i = 0; i < size_create_dialog; ++i) {
        if (quest_boss == true) {
            pnj_boss(i);
        } else if (quest_amuletter == true) {
            pnj_amuletter(i);
        } else if (quest_totem == true) {
            pnj_totem(i);
        }

        if (activated_dialog[PNJ_QUEST_ARROW] == true && create_dialog[i].when_active_dialog == PNJ_QUEST_ARROW) {
            sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
            print_text_char(i);
            activated_dialog[PNJ_QUEST_ARROW] = false;
        }

        if (activated_dialog[PNJ_QUEST_SKELET] == true && create_dialog[i].when_active_dialog == PNJ_QUEST_SKELET) {
            sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
            print_text_char(i);
            activated_dialog[PNJ_QUEST_SKELET] = false;
        }

        if (activated_dialog[PNJ_QUEST_BOSS] == true && create_dialog[i].when_active_dialog == PNJ_QUEST_BOSS) {
            sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
            print_text_char(i);
            activated_dialog[PNJ_QUEST_BOSS] = false;
        }
        render_player();
    }
}
