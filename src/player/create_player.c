/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_player
*/

#include "player.h"

void create_player(void)
{
    for (int i = 0; i < NB_ANIM_PLAYER; ++i) {
        player.player_anim.sprite_sheet[i].texture = sfTexture_createFromFile(
            player.player_anim.sprite_sheet[i].sheet_path, NULL);

        player.player_anim.sprite_sheet[i].sprite = sfSprite_create();
        sfSprite_setScale(player.player_anim.sprite_sheet[i].sprite,
        player.scale);
        sfSprite_setTexture(player.player_anim.sprite_sheet[i].sprite,
            player.player_anim.sprite_sheet[i].texture, sfFalse);
        player.player_anim.sprite_sheet[i].texture_size = sfTexture_getSize(
            player.player_anim.sprite_sheet[i].texture);
        player.player_anim.clock = sfClock_create();
    }
    player.collision = sfRectangleShape_create();
    sfRectangleShape_setFillColor(player.collision, sfTransparent);
    sfRectangleShape_setOutlineColor(player.collision, sfRed);
    sfRectangleShape_setOutlineThickness(player.collision, 2);
    sfRectangleShape_setSize(player.collision, (sfVector2f) {22 * player.scale.x, 33 * player.scale.y});
    player.clock_move = sfClock_create();
    player.attack_collision = sfRectangleShape_create();
    sfRectangleShape_setFillColor(player.attack_collision, sfTransparent);
    sfRectangleShape_setOutlineColor(player.attack_collision, sfCyan);
    sfRectangleShape_setOutlineThickness(player.attack_collision, 2);
    sfRectangleShape_setSize(player.attack_collision, (sfVector2f) {22 * player.scale.x, 33 * player.scale.y});
}
