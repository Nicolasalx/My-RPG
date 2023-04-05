/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_render_window
*/

#include "main.h"

void create_render_window(void)
{
    window = sfRenderWindow_create(render_window.mode,
        render_window.name, render_window.style, NULL);
    catch_error(window, WINDOW_CREATION_FAIL);
    sfRenderWindow_setFramerateLimit(window, render_window.fps);
}
