/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "dialog.h"
#include "main.h"

void create_pnj(int i)
{
    create_dialog[i].texture_pnj = sfTexture_createFromFile(create_dialog[i].path_img_pnj, NULL);
    create_dialog[i].sprite_pnj = sfSprite_create();
    sfSprite_setScale(create_dialog[i].sprite_pnj, create_dialog[i].size_sprite_pnj);
    sfSprite_setTexture(create_dialog[i].sprite_pnj, create_dialog[i].texture_pnj, sfTrue);
    sfSprite_setPosition(create_dialog[i].sprite_pnj, create_dialog[i].pos_sprite_pnj);
    create_dialog[i].circle = sfCircleShape_create();
    sfCircleShape_setRadius(create_dialog[i].circle, create_dialog[i].radius);
    sfCircleShape_setFillColor(create_dialog[i].circle, create_dialog[i].color_circle);
    sfCircleShape_setOutlineColor(create_dialog[i].circle, create_dialog[i].color_border_circle);
    sfCircleShape_setOutlineThickness(create_dialog[i].circle, create_dialog[i].outlineThickness);
    create_dialog[i].position_circle = (sfVector2f) {create_dialog[i].pos_sprite_pnj.x -= 55, create_dialog[i].pos_sprite_pnj.y -= 30};
    sfCircleShape_setPosition(create_dialog[i].circle, create_dialog[i].position_circle);
}

void create_dialog_text(void)
{
    for (int i = 0; i < size_create_dialog; ++i) {
        create_dialog[i].clock = sfClock_create();
        create_dialog[i].text = sfText_create();
        sfText_setFont(create_dialog[i].text, font);
        sfText_setCharacterSize(create_dialog[i].text, create_dialog[i].size_text);
        sfText_setPosition(create_dialog[i].text, create_dialog[i].pos_text);
        sfText_setFillColor(create_dialog[i].text, create_dialog[i].color_text);

        create_dialog[i].texture = sfTexture_createFromFile(create_dialog[i].path_img, NULL);
        create_dialog[i].sprite = sfSprite_create();
        sfSprite_setScale(create_dialog[i].sprite, create_dialog[i].size_sprite);
        sfSprite_setTexture(create_dialog[i].sprite, create_dialog[i].texture, sfTrue);
        create_dialog[i].position_circle = (sfVector2f) {create_dialog[i].pos_sprite_pnj.x, create_dialog[i].pos_sprite_pnj.y};
        sfSprite_setPosition(create_dialog[i].sprite, create_dialog[i].pos_sprite);

        create_pnj(i);
    }
}
