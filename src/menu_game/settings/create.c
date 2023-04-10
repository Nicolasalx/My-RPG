/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "game_menu.h"
#include "inventory.h"

void create_button_settings_game_menu(void)
{
    for (int i = 0; i < size_settings_button_game_menu; ++i) {
        settings_button_game_menu[i].texture = sfTexture_createFromFile
        (settings_button_game_menu[i].path_img, NULL);
        settings_button_game_menu[i].sprite = sfSprite_create();
        sfSprite_setTexture(settings_button_game_menu[i].sprite,
            settings_button_game_menu[i].texture, sfTrue);
        sfSprite_setScale(settings_button_game_menu[i].sprite,
            settings_button_game_menu[i].size_sprite);
        sfSprite_setPosition(settings_button_game_menu[i].sprite,
            settings_button_game_menu[i].pos_sprite);
    }
}
