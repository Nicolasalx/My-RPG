/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** buttons.c
*/

#include "menu_game.h"
#include "my_def.h"
#include "main.h"
#include "settings.h"
#include "animation.h"

void quit_button(void)
{
    if (can_open_settings == false && can_open_tutorial == false) {
        quit_status = true;
    }
}

void sound_up_button(void)
{
    print("SOUND UP\n");
}

void tutorial_button(void)
{
    if (can_open_settings == false) {
        can_open_tutorial = true;
    }
}

void go_home_button(void)
{
    print("GO HOME\n");
}

void play_button(void)
{
    game_state = GAME;
    play_anim = true;
    sfClock_restart(animation_level.play);
}
