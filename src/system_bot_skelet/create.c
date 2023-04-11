/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "main.h"
#include "system_bot_skelet.h"

void create_system_bot(void)
{
    for (int i = 0; i < size_system_bot; ++i) {
        system_bot[i].bot_texture = sfTexture_createFromFile(system_bot[i].bot_path_img, NULL);
        system_bot[i].bot = sfSprite_create();
        sfSprite_setTexture(system_bot[i].bot, system_bot[i].bot_texture, sfTrue);
        sfSprite_setPosition(system_bot[i].bot, system_bot[i].bot_pos_sprite);
        sfSprite_setScale(system_bot[i].bot, system_bot[i].bot_size_sprite);

        system_bot[i].big_life_rectangle = sfRectangleShape_create();
        sfRectangleShape_setSize(system_bot[i].big_life_rectangle, system_bot[i].big_life_size_rectangle);
        system_bot[i].big_life_pos_rectangle = (sfVector2f) {system_bot[i].bot_pos_sprite.x - 20, system_bot[i].bot_pos_sprite.y - 15};
        sfRectangleShape_setPosition(system_bot[i].big_life_rectangle, system_bot[i].big_life_pos_rectangle);
        sfRectangleShape_setFillColor(system_bot[i].big_life_rectangle, system_bot[i].big_life_color_rectangle);
        sfRectangleShape_setOutlineThickness(system_bot[i].big_life_rectangle, system_bot[i].thickness_big);

        system_bot[i].little_life_rectangle = sfRectangleShape_create();
        sfRectangleShape_setSize(system_bot[i].little_life_rectangle, system_bot[i].little_life_size_rectangle);
        system_bot[i].little_life_pos_rectangle = (sfVector2f) {system_bot[i].bot_pos_sprite.x - 10, system_bot[i].bot_pos_sprite.y - 15};
        sfRectangleShape_setPosition(system_bot[i].little_life_rectangle, system_bot[i].little_life_pos_rectangle);
        sfRectangleShape_setFillColor(system_bot[i].little_life_rectangle, system_bot[i].little_life_color_rectangle);
        sfRectangleShape_setOutlineThickness(system_bot[i].little_life_rectangle, system_bot[i].thickness_little);
 
        system_bot[i].zone = sfCircleShape_create();
        sfCircleShape_setRadius(system_bot[i].zone, system_bot[i].radius);
        system_bot[i].position_zone = (sfVector2f) {system_bot[i].bot_pos_sprite.x - 300, system_bot[i].bot_pos_sprite.y - 300};
        sfCircleShape_setPosition(system_bot[i].zone, system_bot[i].position_zone);
        sfCircleShape_setFillColor(system_bot[i].zone, system_bot[i].color_zone);
        sfCircleShape_setOutlineColor(system_bot[i].zone, system_bot[i].border_zone);
        sfCircleShape_setOutlineThickness(system_bot[i].zone, system_bot[i].outlineThickness);
    }
}