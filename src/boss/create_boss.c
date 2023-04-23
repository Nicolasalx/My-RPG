/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_boss
*/

#include <SFML/Graphics.h>
#include "boss.h"

void ini_collision_boss(int j)
{
    boss[j].collision = sfRectangleShape_create();
    sfRectangleShape_setSize(boss[j].collision,
    (sfVector2f) {20 * boss[j].scale.x, 10 * boss[j].scale.y});
    boss[j].clock_move = sfClock_create();
    boss[j].attack_collision = sfRectangleShape_create();
    sfRectangleShape_setSize(boss[j].attack_collision,
    (sfVector2f) {15 * boss[j].scale.x, 12 * boss[j].scale.y});
    boss[j].health_bar = sfRectangleShape_create();
    boss[j].health_bar_outline = sfRectangleShape_create();
    sfRectangleShape_setFillColor(boss[j].health_bar_outline, sfTransparent);
    sfRectangleShape_setOutlineColor(boss[j].health_bar_outline, sfBlack);
    sfRectangleShape_setOutlineThickness(boss[j].health_bar_outline, 2);
    sfRectangleShape_setSize(boss[j].health_bar_outline,
    (sfVector2f) {15 * boss[j].scale.x, 2 * boss[j].scale.y});
    sfRectangleShape_setFillColor(boss[j].health_bar, sfBlue);
    sfRectangleShape_setSize(boss[j].health_bar,
    (sfVector2f) {15 * boss[j].scale.x, 2 * boss[j].scale.y});
    boss[j].max_healt_bar_size =
    (sfVector2f) {15 * boss[j].scale.x, 2 * boss[j].scale.y};
}

void create_boss(void)
{
    for (int j = 0; j < nb_boss; ++j) {
        for (int i = 0; i < NB_ANIM_BOSS; ++i) {
            boss[j].boss_anim.sprite_sheet[i].texture =
                sfTexture_createFromFile(
                boss[j].boss_anim.sprite_sheet[i].sheet_path, NULL);

            boss[j].boss_anim.sprite_sheet[i].sprite = sfSprite_create();
            sfSprite_setScale(boss[j].boss_anim.sprite_sheet[i].sprite,
            boss[j].scale);
            sfSprite_setTexture(boss[j].boss_anim.sprite_sheet[i].sprite,
                boss[j].boss_anim.sprite_sheet[i].texture, sfFalse);
            boss[j].boss_anim.sprite_sheet[i].texture_size = sfTexture_getSize(
                boss[j].boss_anim.sprite_sheet[i].texture);
            boss[j].boss_anim.clock = sfClock_create();
        }
        ini_collision_boss(j);
    }
}
