/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "door.h"
#include "main.h"
#include "manage_view.h"
#include "quest.h"
#include "animation.h"
#include "generic_func.h"
#include "player.h"

bool go_back_start(int i)
{
    if (door[i].choice_level == BACK_TO_START) {
        if (check_collision(door[i].rectangle, player.collision) &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            display_animation = true;
            go_back = true;
        }
        if (display_animation == true && go_back == true) {
            render_animation(0, &go_back);
            return true;
        }
    }
    return false;
}

void choose_level(int *choose_level_go)
{
    if (quest_boss == true) {
        * choose_level_go = 3;
    } else if (quest_amuletter == true) {
        * choose_level_go = 2;
    } else {
        if (quest_totem == true) {
        * choose_level_go = 1;
        }
    }
}

void draw_door(int i, int *choose_level_go)
{
    if (next_level == 0) {
        direction_level(choose_level_go, i);
    } else {
        if (go_back_start(i) == true) {
        }
    }
}

void render_door(void)
{
    static int choose_level_go = 0;

    choose_level(&choose_level_go);
    for (int i = 0; i < size_door; ++i) {
        draw_door(i, &choose_level_go);
    }
}
