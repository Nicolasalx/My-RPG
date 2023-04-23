/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render_boss
*/

#include "boss.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"
#include <SFML/Graphics.h>

sfVector2f boss_direction(double x_1, double y_1, double x_2, double y_2)
{
    double direction_x = 0;
    double direction_y = 0;

    if (x_2 - x_1 != 0.0) {
        direction_x = (x_2 - x_1) / my_abs(x_2 - x_1);
    }
    if (y_2 - y_1 != 0.0) {
        direction_y = (y_2 - y_1) / my_abs(y_2 - y_1);
    }
    return (sfVector2f) {direction_x, direction_y};
}

bool manage_attack_boss(int j, sfVector2f boss_dir)
{
    if (check_collision(boss[j].attack_collision, player.collision)
    && boss_dir.x > 0.0) {
        boss[j].anim_to_play = BOSS_ATTACK_RIGHT;
        boss[j].damage = boss[j].boss_dps;
        boss[j].direc = RIGHT;
        return true;
    }
    if (check_collision(boss[j].attack_collision, player.collision)
    && boss_dir.x < 0.0) {
        boss[j].anim_to_play = BOSS_ATTACK_LEFT;
        boss[j].damage = boss[j].boss_dps;
        boss[j].direc = LEFT;
        return true;
    }
    return false;
}

void manage_move_boss(int j)
{
    static double stack_damage = 0.0;
    sfVector2f boss_dir = boss_direction(
        get_rect_center(boss[j].collision).x, get_rect_center(boss[j].collision).y,
        get_rect_center(player.collision).x, get_rect_center(player.collision).y
    );
    if (boss_dir.x > 0.0) {
        sfRectangleShape_setPosition(boss[j].attack_collision,
        (sfVector2f) {boss[j].pos.x + (20 * boss[j].scale.x), boss[j].pos.y + (12 * boss[j].scale.y)});
        boss[j].anim_to_play = BOSS_RUN_RIGHT;
        boss[j].direc = RIGHT;
    } else if (boss_dir.x < 0.0) {
        boss[j].anim_to_play = BOSS_RUN_LEFT;
        boss[j].direc = LEFT;
        sfRectangleShape_setPosition(boss[j].attack_collision,
        (sfVector2f) {boss[j].pos.x - (2 * boss[j].scale.x), boss[j].pos.y + (12 * boss[j].scale.y)});
    }
    if (manage_attack_boss(j, boss_dir)) {
        stack_damage += 0.1;
        if (stack_damage >= 5.0) {
            inventory_content.nb_life -= boss[j].damage;
            stack_damage = 0.0;
        }
        return;
    }
    if (sfClock_getElapsedTime(boss[j].clock_move).microseconds / 1000 >= boss[j].speed) {
        sfClock_restart(boss[j].clock_move);
        vect_arithm(boss[j].pos, +=, boss_dir);
    }
}

void manage_health_boss(int j)
{
    if (check_collision(boss[j].collision, player.attack_collision)) {
        boss[j].healt -= player.damage;
    }
    sfRectangleShape_setSize(boss[j].health_bar, (sfVector2f) {
        (boss[j].max_healt_bar_size.x / 100.0) *
        ((100.0 / boss[j].max_healt) * boss[j].healt),
        sfRectangleShape_getSize(boss[j].health_bar).y,
        });
    sfRectangleShape_setPosition(boss[j].health_bar,
        (sfVector2f) {boss[j].pos.x + (8 * boss[j].scale.x),
        boss[j].pos.y + (5 * boss[j].scale.y)});
    sfRectangleShape_setPosition(boss[j].health_bar_outline,
        (sfVector2f) {boss[j].pos.x + (8 * boss[j].scale.x),
        boss[j].pos.y + (5 * boss[j].scale.y)});
    if (boss[j].healt <= 0.0) {
        boss[j].die = true;
    }
}

void manage_boss_die(int j)
{
    if (boss[j].direc == LEFT)
        boss[j].anim_to_play = BOSS_DIE_LEFT;
    if (boss[j].direc == RIGHT)
        boss[j].anim_to_play = BOSS_DIE_RIGHT;
    if (sfClock_getElapsedTime(boss[j].boss_anim.clock).microseconds
        / 1000 >= 1000 /
        boss[j].boss_anim.sprite_sheet[boss[j].anim_to_play].frame_rate) {
        ++ boss[j].dead;
    }
    anim_sprite(&boss[j].boss_anim, boss[j].anim_to_play);
}

void render_boss(void)
{
    if (next_level != 3) {
        return;
    }
    for (int j = 0; j < nb_boss; ++j) {
        if (boss[j].dead >= 5)
            continue;
        if (boss[j].die == true) {
            manage_boss_die(j);
            sfRenderWindow_drawSprite(window,
            boss[j].boss_anim.sprite_sheet[boss[j].anim_to_play].sprite, NULL);
            continue;
        }
        boss[j].damage = 0;
        manage_health_boss(j);
        manage_move_boss(j);
        anim_sprite(&boss[j].boss_anim, boss[j].anim_to_play);
        for (int i = 0; i < NB_ANIM_BOSS; ++i) {
            sfSprite_setPosition(
                boss[j].boss_anim.sprite_sheet[i].sprite, boss[j].pos);
        }
        sfRectangleShape_setPosition(boss[j].collision,
        (sfVector2f) {boss[j].pos.x + (5 * boss[j].scale.x), boss[j].pos.y + (12.5 * boss[j].scale.y)});
        sfRenderWindow_drawRectangleShape(window, boss[j].collision, NULL);
        sfRenderWindow_drawRectangleShape(window, boss[j].attack_collision, NULL);
        sfRenderWindow_drawRectangleShape(window, boss[j].health_bar, NULL);
        sfRenderWindow_drawRectangleShape(window, boss[j].health_bar_outline, NULL);
        sfRenderWindow_drawSprite(window,
        boss[j].boss_anim.sprite_sheet[boss[j].anim_to_play].sprite, NULL);
    }
}
