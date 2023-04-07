/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** buttons.c
*/

#include "menu_game.h"
#include "my_def.h"
#include "main.h"

void quit_button(void)
{
    quit_status = true;
}

void sound_up_button(void)
{
    print("SOUND UP\n");
}

void go_home_button(void)
{
    print("GO HOME\n");
}

void play_button(void)
{
    print("LAUNCH THE GAME\n");
}
