/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "game_menu.h"
#include "tree.h"

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
        if (fondation[i].can_opac == true)
            sfSprite_setColor(fondation[i].sprite, (sfColor) {255, 255, 255, 122});
    }
}
