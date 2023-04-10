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

char* int_to_string(int value, char* buffer)
{
    if (value < 0) {
        *buffer++ = '-';
        value = -value;
    }
    char* p = buffer;
    do {
        *p++ = value % 10 + '0';
        value /= 10;
    } while (value > 0);
    *p = '\0';
    char* start = buffer;
    char* end = p - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return buffer;
}

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
        char str[10];
        sfText_setString(saving_content[14].text,
            int_to_string(inventory_content.nb_key, str));
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
        char str[10];
        sfText_setString(saving_content[22].text,
            int_to_string(inventory_content.nb_potion, str));
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
        char str[10];
        sfText_setString(saving_content[24].text,
            int_to_string(inventory_content.nb_xp, str));
    } else {
        sfText_setString(saving_content[24].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[24].text, NULL);
    if (inventory_content.money > 0) {
        char str[10];
        sfText_setString(saving_content[26].text,
            int_to_string(inventory_content.money, str));
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
