/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_player
*/

#include "main.h"
#include "generic_func.h"
#include "player.h"
#include "inventory.h"
#include "manage_view.h"

void render_player(void)
{
    if (inventory_content.nb_life <= 1) {
        next_level = 0;
        player.pos = (sfVector2f) {300, 500};
        inventory_content.nb_life = inventory_content.nb_life_max;
    }
    player_move();
    anim_sprite(&player.player_anim, player.anim_to_play);
    for (int i = 0; i < NB_ANIM_PLAYER; ++i) {
        sfSprite_setPosition(
            player.player_anim.sprite_sheet[i].sprite, player.pos);
    }
    sfRectangleShape_setPosition(player.collision,
    (sfVector2f) {player.pos.x + (17 * player.scale.x), player.pos.y + 18});
    sfRenderWindow_drawSprite(window,
    player.player_anim.sprite_sheet[player.anim_to_play].sprite, NULL);
}
