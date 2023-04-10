/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "game_menu.h"
#include "inventory.h"

void create_saving_inventory(void)
{
    for (int i = 0; i < size_saving_content; ++i) {
        saving_content[i].text = sfText_create();
        sfText_setString(saving_content[i].text,
        saving_content[i].text_to_write);
        sfText_setFont(saving_content[i].text, font);
        sfText_setCharacterSize(saving_content[i].text, saving_content[i].
            size_text);
        sfText_setPosition(saving_content[i].text,
        saving_content[i].pos_text);
        sfText_setFillColor(saving_content[i].text, saving_content[i].
            color_text);
    }
}

void create_validate_sprite(int i)
{
    validate_saving[i].texture = sfTexture_createFromFile
    (validate_saving[i].path_img, NULL);
    validate_saving[i].sprite = sfSprite_create();
    sfSprite_setTexture(validate_saving[i].sprite,
        validate_saving[i].texture, sfTrue);
    sfSprite_setScale(validate_saving[i].sprite, validate_saving[i].
        size_sprite);
    sfSprite_setPosition(validate_saving[i].sprite,
        validate_saving[i].pos_sprite);
}

void create_validate_saving_option(void)
{
    for (int i = 0; i < size_validate_saving; ++i) {
        validate_saving[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setOutlineThickness(validate_saving[i].rectangle,
            3);
        sfRectangleShape_setOutlineColor(validate_saving[i].rectangle,
        sfBlack);
        sfRectangleShape_setSize(validate_saving[i].rectangle,
            validate_saving[i].size_rectangle);
        sfRectangleShape_setFillColor(validate_saving[i].rectangle,
            (sfColor) {COLOR_BG_SAVING});
        sfRectangleShape_setPosition(validate_saving[i].rectangle,
            validate_saving[i].pos_rectangle);
        create_validate_sprite(i);
    }
}
