/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "game_menu.h"
#include "settings.h"
#include "menu_game.h"
#include "inventory.h"

void display_valid_first_part(void)
{
if (inventory_content.have_a_helmet == true) {
        sfRenderWindow_drawText(window, saving_content[2].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[3].text, NULL);
    }

    if (inventory_content.have_armor == true) {
        sfRenderWindow_drawText(window, saving_content[5].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[6].text, NULL);
    }

    if (inventory_content.have_glove == true) {
        sfRenderWindow_drawText(window, saving_content[8].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[9].text, NULL);
    }
}

void display_valid_second_part(void)
{
    if (inventory_content.have_boot == true) {
        sfRenderWindow_drawText(window, saving_content[11].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[12].text, NULL);
    }
    if (inventory_content.nb_key > 0) {
        sfText_setString(saving_content[14].text,
            INT(inventory_content.nb_key));
    } else {
        sfText_setString(saving_content[14].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[14].text, NULL);

    if (inventory_content.have_amuletter == true) {
        sfRenderWindow_drawText(window, saving_content[16].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[17].text, NULL);
    }
}

void display_valid_third_part(void)
{
    if (inventory_content.have_totem == true) {
        sfRenderWindow_drawText(window, saving_content[19].text, NULL);
    } else {
        sfRenderWindow_drawText(window, saving_content[20].text, NULL);
    }

    if (inventory_content.nb_potion > 0) {
        sfText_setString(saving_content[22].text,
            INT(inventory_content.nb_potion));
    } else {
        sfText_setString(saving_content[22].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[22].text, NULL);
}

void display_valid_info_save(void)
{
    display_valid_first_part();
    display_valid_second_part();
    display_valid_third_part();
    if (inventory_content.nb_xp > 0) {
        sfText_setString(saving_content[24].text,
            INT(inventory_content.nb_xp));
    } else {
        sfText_setString(saving_content[24].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[24].text, NULL);
    if (inventory_content.money > 0) {
        sfText_setString(saving_content[26].text,
            INT(inventory_content.money));
    } else {
        sfText_setString(saving_content[26].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[26].text, NULL);
}

void display_saving_inventory(void)
{
    for (int i = 0; i < size_validate_saving; ++i) {
        sfRenderWindow_drawSprite(window, validate_saving[i].sprite, NULL);
        sfRenderWindow_drawRectangleShape(window, validate_saving[i].rectangle,
            NULL);
    }
    display_valid_info_save();
    for (int i = 0; i < size_saving_content; ++i) {
        if (saving_content[i].choice == false) {
            sfRenderWindow_drawText(window, saving_content[i].text, NULL);
        }
    }
}
