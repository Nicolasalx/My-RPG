/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_chest
*/

#include "main.h"
#include "chest.h"
#include "player.h"
#include "generic_func.h"
#include "manage_view.h"
#include "inventory.h"

void play_single_anim(sfSprite *sprite, single_anim_t *anim)
{
    if (anim->play == false || anim->stop_playing == true) {
        return;
    }
    launch_open_chest_music();
    sfIntRect result_rect = {
        .left = anim->current_frame *
            (anim->texture_size.x / anim->nb_frame),
        .top = 0,
        .height = anim->texture_size.y,
        .width = anim->texture_size.x / anim->nb_frame
    };
    if (anim->current_frame >= anim->nb_frame) {
        anim->stop_playing = true;
        return;
    }
    sfSprite_setTextureRect(sprite, result_rect);
    if (sfClock_getElapsedTime(anim->clock).microseconds / 1000
        >= 1000 / anim->frame_rate) {
        sfClock_restart(anim->clock);
        ++ anim->current_frame;
    }
}

void render_first_chest(int i, bool *chest_1)
{
    if (check_collision(chest[i].rectangle, player.collision) &&
        sfKeyboard_isKeyPressed(sfKeyE)) {
        if (*chest_1 == false) {
            chest[i].anim.play = true;
            inventory_content.have_totem = true;
            inventory_content.nb_key += 1;
            inventory_content.nb_xp += 50;
            inventory_content.money += 400;
            *chest_1 = true;
        }
    }
    play_single_anim(chest[i].sprite, &chest[i].anim);
    sfRenderWindow_drawSprite(window, chest[i].sprite, NULL);
    sfRenderWindow_drawRectangleShape(window, chest[i].rectangle, NULL);
}

void render_second_chest(int i, bool *chest_2)
{
    if (check_collision(chest[i].rectangle, player.collision) &&
        sfKeyboard_isKeyPressed(sfKeyE)) {
        if (*chest_2 == false) {
            chest[i].anim.play = true;
            inventory_content.have_amuletter = true;
            inventory_content.nb_key += 2;
            inventory_content.nb_xp += 50;
            inventory_content.money += 600;
            *chest_2 = true;
        }
    }
    play_single_anim(chest[i].sprite, &chest[i].anim);
    sfRenderWindow_drawSprite(window, chest[i].sprite, NULL);
    sfRenderWindow_drawRectangleShape(window, chest[i].rectangle, NULL);
}

void render_third_chest(int i, bool *chest_3)
{
    if (check_collision(chest[i].rectangle, player.collision) &&
        sfKeyboard_isKeyPressed(sfKeyE)) {
        if (*chest_3 == false) {
            chest[i].anim.play = true;
            inventory_content.nb_key += 2;
            *chest_3 = true;
        }
    }
    play_single_anim(chest[i].sprite, &chest[i].anim);
    sfRenderWindow_drawSprite(window, chest[i].sprite, NULL);
    sfRenderWindow_drawRectangleShape(window, chest[i].rectangle, NULL);
}

void render_chest(void)
{
    static bool chest_1 = false;
    static bool chest_2 = false;
    static bool chest_3 = false;
    for (int i = 0; i < nb_chest; ++i) {
        if (next_level == 1 && chest[i].choice_chest == CHEST_ARROW) {
            render_first_chest(i, &chest_1);
        } else if (next_level == 2 && chest[i].choice_chest == CHEST_SKELET) {
            render_second_chest(i, &chest_2);
        } else if (next_level == 3 && chest[i].choice_chest == CHEST_BOSS) {
            render_third_chest(i, &chest_3);
        }
        
    }
}
