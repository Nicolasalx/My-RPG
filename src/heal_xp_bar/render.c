/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "heal_xp_bar.h"
#include "main.h"
#include "inventory.h"
#include "tree.h"

void render_xp_opt(int i)
{
    if (heal_xp_bar[i].choose_text == HEAL) {
        char heal[10]; char max_life[10];
        my_nb_to_str(inventory_content.nb_life, heal);
        my_strcat(heal, "/ ");
        my_nb_to_str(inventory_content.nb_life_max, max_life);
        my_strcat(heal, max_life);
        sfText_setString(heal_xp_bar[i].text, heal);
    }
}

void render_xp_mod(void)
{
    for (int i = 0; i < size_heal_xp_bar; ++i) {
        render_xp_opt(i);
        if (heal_xp_bar[i].choose_text == XP_YES) {
            sfText_setString(heal_xp_bar[i].text, INT(inventory_content.
                nb_xp));
        }
        if (heal_xp_bar[i].can_upgrade_rectangle == true) {
            sfVector2f new_rectangle = {(inventory_content.nb_life * 300) /
            inventory_content.nb_life_max, 40};
            sfRectangleShape_setSize(heal_xp_bar[i].rectangle, new_rectangle);
        }
        sfRenderWindow_drawRectangleShape(window, heal_xp_bar[i].rectangle,
            NULL);
        sfRenderWindow_drawText(window, heal_xp_bar[i].text, NULL);
    }
}

void potion_utilisation(void)
{
    static int count_potion = 0;

    if (count_potion >= 60 && inventory_content.nb_potion > 0 &&
        sfKeyboard_isKeyPressed(sfKeyF)) {
        inventory_content.nb_life += 30;
        inventory_content.nb_potion -= 1;
        count_potion = 0;
    }
    ++ count_potion;
}

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
    render_xp_mod();
    potion_utilisation();
    stuff();
}
