/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "win.h"

void create_win_screen(void)
{
    info_win.texture = sfTexture_createFromFile
        (info_win.path_img, NULL);
    info_win.sprite = sfSprite_create();
    sfSprite_setTexture(info_win.sprite, info_win.texture, sfTrue);
    sfSprite_setScale(info_win.sprite, info_win.size_sprite);
    sfSprite_setPosition(info_win.sprite, info_win.pos_sprite);
}
