/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "game_menu.h"
#include "tree.h"

void unlock_other(void)
{
    if (abilities[IS_GLACIAL_SLOW] == true) {
        sfSprite_setColor(fondation[5].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[IS_FINAL] == true) {
        sfSprite_setColor(fondation[6].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[HEALTH_UP] == true) {
        sfSprite_setColor(fondation[7].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[REGENE] == true) {
        sfSprite_setColor(fondation[8].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[IS_BLOODBATH] == true) {
        sfSprite_setColor(fondation[9].sprite, (sfColor) {255, 255, 255, 255});
    }
}

void unlock_abilities(void)
{
    if (abilities[STRENGHT_UP] == true) {
        sfSprite_setColor(fondation[0].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[CRITICAL_UP] == true) {
        sfSprite_setColor(fondation[1].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[IS_FUREUR] == true) {
        sfSprite_setColor(fondation[2].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[SPEED_UP] == true) {
        sfSprite_setColor(fondation[3].sprite, (sfColor) {255, 255, 255, 255});
    }
    if (abilities[ATTACKSPEED_UP] == true) {
        sfSprite_setColor(fondation[4].sprite, (sfColor) {255, 255, 255, 255});
    }
    unlock_other();

}

void display_tree(void)
{
    for (int i = 0; i < size_tree; ++i) {
        if (mouse_button_pressed == true &&
            is_mouse_over_sprite(fondation[i].sprite) == true &&
            fondation[i].abilities != NULL) {
            fondation[i].abilities(i);
        }
        unlock_abilities();
        sfRenderWindow_drawSprite(window, fondation[i].sprite, NULL);
    }
    for (int i = 0; i < size_arrows; ++i) {
        sfRenderWindow_drawSprite(window, arrows[i].sprite, NULL);
    }
}
