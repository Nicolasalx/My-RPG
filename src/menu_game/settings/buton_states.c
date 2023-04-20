/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** buton_states.c
*/

#include "game_menu.h"
#include "settings.h"
#include "menu_game.h"
#include "inventory.h"

void verification(int i)
{
    if (is_mouse_over_sprite(settings_button_game_menu[i].sprite) == true) {
        settings_button_game_menu[i].states = HOVERED;
        return;
    }
    if (is_mouse_over_sprite(settings_button_game_menu[i].sprite) == false) {
        settings_button_game_menu[i].states = NORMALED;
        return;
    }
    if (is_mouse_over_sprite(settings_button_game_menu[i].sprite) == true &&
    mouse_button_pressed == true) {
        settings_button_game_menu[i].states = PRESS;
    }
}

void states(int i)
{
    sfVector2f hover = {
        .x = settings_button_game_menu[i].pos_sprite.x,
        .y = settings_button_game_menu[i].pos_sprite.y + 5
    };
    sfVector2f pressed = {
        .x = settings_button_game_menu[i].pos_sprite.x,
        .y = settings_button_game_menu[i].pos_sprite.y + 30
    };

    if (settings_button_game_menu[i].states == NORMALED) {
        sfSprite_setPosition(settings_button_game_menu[i].sprite,
        settings_button_game_menu[i].pos_sprite);
        return;
    }
    if (settings_button_game_menu[i].states == HOVERED) {
        sfSprite_setPosition(settings_button_game_menu[i].sprite, hover);
    }
    if (settings_button_game_menu[i].states == PRESS) {
        sfSprite_setPosition(settings_button_game_menu[i].sprite, pressed);
    }
}
