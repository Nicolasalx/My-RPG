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

bool go_back = false;
bool go_level_1 = false;
bool go_level_2 = false;
bool go_level_3 = false;

bool go_back_start(int i)
{
    if (door[i].choice_level == BACK_TO_START) {
        if (check_collision(door[i].rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
            display_animation = true;
            go_back = true;
        }
        if (display_animation == true && go_back == true) {
            render_animation(0, &go_back);
            return true;
        } else {
            sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
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
    } else if (quest_totem == true) {
        * choose_level_go = 1;
    }
}

void direction_level(int *choose_level_go, int i)
{
    if (* choose_level_go == 3) {
        if (door[i].choice_level == LEVEL_BOSS) {
            if (check_collision(door[i].rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
                display_animation = true;
                go_level_3 = true;
                go_back = false;
            }
            if (display_animation == true && go_level_3 == true) {
                render_animation(3, &go_level_3);
            }
            else {
                sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
            }
        }
    } else if (* choose_level_go == 2) {
        if (door[i].choice_level == LEVEL_SKELET) {
            if (check_collision(door[i].rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
                display_animation = true;
                go_level_2 = true;
                go_back = false;
            }
            if (display_animation == true && go_level_2 == true) {
                render_animation(2, &go_level_2);
            } else {
                sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
            }
        }
    } else if (* choose_level_go == 1) {
        if (door[i].choice_level == LEVEL_ARROW) {
            if (check_collision(door[i].rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
                display_animation = true;
                go_level_1 = true;
                go_back = false;
            }
            if (display_animation == true && go_level_1 == true) {
                render_animation(1, &go_level_1);
            } else {
                sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
            }
        }
    }
}

void render_door(void)
{
    static int choose_level_go = 0;
    choose_level(&choose_level_go);

    for (int i = 0; i < size_door; ++i) {
        if (next_level == 0) {
            direction_level(&choose_level_go, i);
        } else {
            if (go_back_start(i) == true) {
                sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
            }
        }
    }
}
