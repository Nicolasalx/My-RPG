/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** direction_door
*/

#include "door.h"
#include "main.h"
#include "manage_view.h"
#include "quest.h"
#include "animation.h"
#include "generic_func.h"
#include "player.h"

void direction_level_3(int i)
{
    if (door[i].choice_level == LEVEL_BOSS) {
        if (check_collision(door[i].rectangle, player.collision) &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            display_animation = true;
            go_level_3 = true;
            go_back = false;
        }
        if (display_animation == true && go_level_3 == true) {
            render_animation(3, &go_level_3);
        }
    }
}

void direction_level_2(int i)
{
    if (door[i].choice_level == LEVEL_SKELET) {
        if (check_collision(door[i].rectangle, player.collision) &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            display_animation = true;
            go_level_2 = true;
            go_back = false;
        }
        if (display_animation == true && go_level_2 == true) {
            render_animation(2, &go_level_2);
        }
    }
}

void direction_level_1(int i)
{
    if (door[i].choice_level == LEVEL_ARROW) {
        if (check_collision(door[i].rectangle, player.collision) &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            display_animation = true;
            go_level_1 = true;
            go_back = false;
        }
        if (display_animation == true && go_level_1 == true) {
            render_animation(1, &go_level_1);
        }
    }
}

void direction_level(int *choose_level_go, int i)
{
    if (* choose_level_go == 3) {
        direction_level_3(i);
    }
    if (* choose_level_go == 2) {
        direction_level_2(i);
    }
    if (* choose_level_go == 1) {
        direction_level_1(i);
    }
}
