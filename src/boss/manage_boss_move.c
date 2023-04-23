/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_boss_move
*/

#include "boss.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"
#include <SFML/Graphics.h>

sfVector2f boss_direction(double x_1, double y_1, double x_2, double y_2)
{
    sfVector2f result = {0, 0};

    if (x_2 - x_1 != 0.0) {
        result.x = (x_2 - x_1) / my_abs(x_2 - x_1);
    }
    if (y_2 - y_1 != 0.0) {
        result.y = (y_2 - y_1) / my_abs(y_2 - y_1);
    }
    return result;
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

void move_boss_helper(int j, sfVector2f *boss_dir)
{
    if (boss_dir->x > 0.0) {
        sfRectangleShape_setPosition(boss[j].attack_collision,
        (sfVector2f) {boss[j].pos.x + (20 * boss[j].scale.x),
        boss[j].pos.y + (12 * boss[j].scale.y)});
        boss[j].anim_to_play = BOSS_RUN_RIGHT;
        boss[j].direc = RIGHT;
    } else if (boss_dir->x < 0.0) {
        boss[j].anim_to_play = BOSS_RUN_LEFT;
        boss[j].direc = LEFT;
        sfRectangleShape_setPosition(boss[j].attack_collision,
        (sfVector2f) {boss[j].pos.x - (2 * boss[j].scale.x),
        boss[j].pos.y + (12 * boss[j].scale.y)});
    }
}

sfVector2f compute_boss_dir(int j)
{
    sfVector2f boss_dir = boss_direction(
        get_rect_center(boss[j].collision).x,
        get_rect_center(boss[j].collision).y,
        get_rect_center(player.collision).x,
        get_rect_center(player.collision).y
    );
    return boss_dir;
}

void manage_move_boss(int j)
{
    static double stack_damage = 0.0;
    sfVector2f boss_dir = compute_boss_dir(j);
    move_boss_helper(j, &boss_dir);
    if (manage_attack_boss(j, boss_dir)) {
        stack_damage += 0.1;
        if (stack_damage >= 5.0) {
            inventory_content.nb_life -= boss[j].damage;
            stack_damage = 0.0;
        }
        return;
    }
    if (sfClock_getElapsedTime(boss[j].clock_move).microseconds / 1000 >=
        boss[j].speed) {
        sfClock_restart(boss[j].clock_move);
        vect_arithm(boss[j].pos, += , boss_dir);
    }
}
