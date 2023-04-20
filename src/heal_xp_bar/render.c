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
    float elapsed_seconds = sfTime_asSeconds
    (sfClock_getElapsedTime(clock_heal_bar));
    if (elapsed_seconds > 0.8 && inventory_content.nb_life <
    inventory_content.nb_life_max) {
        inventory_content.nb_life += nb_regene;
        sfClock_restart(clock_heal_bar);
    }
    if (inventory_content.nb_life > inventory_content.nb_life_max) {
        inventory_content.nb_life = inventory_content.nb_life_max;
    }
    for (int i = 0; i < size_heal_xp_bar; ++i) {
        if (heal_xp_bar[i].choose_text == HEAL) {
            char heal[10];
            char max_life[10];
            my_nb_to_str(inventory_content.nb_life, heal);
            my_strcat(heal, "/ ");
            my_nb_to_str(inventory_content.nb_life_max, max_life);
            my_strcat(heal, max_life);
            sfText_setString(heal_xp_bar[i].text, heal);
        }
        if (heal_xp_bar[i].choose_text == XP_YES) {
            sfText_setString(heal_xp_bar[i].text, INT(inventory_content.nb_xp));
        }
        if (heal_xp_bar[i].can_upgrade_rectangle == true) {
            sfVector2f new_rectangle = {(inventory_content.nb_life * 300) /
            inventory_content.nb_life_max, 40};
            sfRectangleShape_setSize(heal_xp_bar[i].rectangle, new_rectangle);
        }
        sfRenderWindow_drawRectangleShape(window, heal_xp_bar[i].rectangle, NULL);
        sfRenderWindow_drawText(window, heal_xp_bar[i].text, NULL);
    }
}
