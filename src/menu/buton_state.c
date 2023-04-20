/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** buton_state.c
*/

#include "menu_game.h"
#include "my_def.h"
#include "main.h"
#include "my_graphical.h"

void verif_state(int i)
{
    if (is_mouse_over_sprite(img_button_menu[i].sprite) == true) {
        img_button_menu[i].buton_state = HOVER;
        return;
    }
    if (is_mouse_over_sprite(img_button_menu[i].sprite) == false) {
        img_button_menu[i].buton_state = NORMAL;
        return;
    }
    if (is_mouse_over_sprite(img_button_menu[i].sprite) == true &&
    mouse_button_pressed == true) {
        img_button_menu[i].buton_state = PRESSED;
    }
}

void state(int i)
{
    sfVector2f hover = {
        .x = img_button_menu[i].pos.x,
        .y = img_button_menu[i].pos.y + 5
    };
    sfVector2f pressed = {
        .x = img_button_menu[i].pos.x,
        .y = img_button_menu[i].pos.y + 30
    };

    if (img_button_menu[i].buton_state == NORMAL) {
        sfSprite_setPosition(img_button_menu[i].sprite,img_button_menu[i].pos);
        return;
    }
    if (img_button_menu[i].buton_state == HOVER) {
        sfSprite_setPosition(img_button_menu[i].sprite, hover);
        return;
    }
    if (img_button_menu[i].buton_state == PRESSED) {
        sfSprite_setPosition(img_button_menu[i].sprite, pressed);
    }
}
