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

void level_1_back(int i)
{
    if (door[i].choice_level == BACK_TO_START) {
        sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
    }
}

void level_2_back(int i)
{
    if (door[i].choice_level == BACK_TO_START) {
        sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
    }
}

void level_3_back(int i)
{
    if (door[i].choice_level == BACK_TO_START) {
        sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
    }
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
            if ( && sfKeyboard_isKeyPressed(sfKeyE))
            //display_animation = true;
            //render_animation(1);
            //display_animation = false;
            sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
        }
    } else if (* choose_level_go == 2) {
        if (door[i].choice_level == LEVEL_SKELET) {
            sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
        }
    } else if (* choose_level_go == 1) {
        if (door[i].choice_level == LEVEL_ARROW) {
            sfRenderWindow_drawRectangleShape(window, door[i].rectangle, NULL);
        }
    }
}

void render_door(void)
{
    static int choose_level_go = 0;
    choose_level(&choose_level_go);
    for (int i = 0; i < size_door; ++i) {
        if (current_level == 0) {
            direction_level(&choose_level_go, i);
        } else if (current_level == 1) {
            level_1_back(i);
        } else if (current_level == 2) {
            level_2_back(i);
        } else if (current_level == 3) {
            level_3_back(i);
        }
    }
}
