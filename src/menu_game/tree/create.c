/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "game_menu.h"
#include "tree.h"
#include "player.h"
#include "inventory.h"

void create_arrows(void)
{
    for (int i = 0; i < size_arrows; ++i) {
        arrows[i].texture = sfTexture_createFromFile
        (arrows[i].path_img, NULL);
        arrows[i].sprite = sfSprite_create();
        sfSprite_setTexture(arrows[i].sprite,
            arrows[i].texture, sfTrue);
        sfSprite_setScale(arrows[i].sprite, arrows[i].size);
        sfSprite_setPosition(arrows[i].sprite, arrows[i].pos);
    }
}

void create_button_tree(void)
{
    for (int i = 0; i < size_tree; ++i) {
        fondation[i].texture = sfTexture_createFromFile
        (fondation[i].path_img, NULL);
        fondation[i].sprite = sfSprite_create();
        sfSprite_setTexture(fondation[i].sprite,
            fondation[i].texture, sfTrue);
        sfSprite_setScale(fondation[i].sprite, fondation[i].size);
        sfSprite_setPosition(fondation[i].sprite, fondation[i].pos);
        sfSprite_setColor(fondation[i].sprite,
        (sfColor) {255, 255, 255, 122});
    }
}
