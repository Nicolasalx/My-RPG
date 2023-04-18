/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "heal_xp_bar.h"
#include "main.h"
#include "inventory.h"

void render_xp_heal_bar(void)
{
    float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(clock_heal_bar));
    if (elapsed_seconds > 0.8 && inventory_content.nb_life < 100) {
        inventory_content.nb_life += 1;
        sfClock_restart(clock_heal_bar);
    }
    for (int i = 0; i < size_heal_xp_bar; ++i) {
        if (heal_xp_bar[i].choose_text == HEAL) {
            char heal[10];
            int_to_string(inventory_content.nb_life, heal);
            my_strcat(heal, "/ 100");
            sfText_setString(heal_xp_bar[i].text, heal);
        }
        if (heal_xp_bar[i].choose_text == XP_YES) {
            char xp[10];
            int_to_string(inventory_content.nb_xp, xp);
            sfText_setString(heal_xp_bar[i].text, xp);
        }
        if (heal_xp_bar[i].can_upgrade_rectangle == true) {
            sfVector2f new_rectangle = {(inventory_content.nb_life * 300) / 100, 40};
            sfRectangleShape_setSize(heal_xp_bar[i].rectangle, new_rectangle);
        }
        sfRenderWindow_drawRectangleShape(window, heal_xp_bar[i].rectangle, NULL);
        sfRenderWindow_drawText(window, heal_xp_bar[i].text, NULL);
    }
}
