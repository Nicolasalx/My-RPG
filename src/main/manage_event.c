/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_event
*/

#include "main.h"
#include "quest.h"

void manage_event(void)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        if (display_quest == false && event.type == sfEvtKeyPressed
        && event.key.code == sfKeyH) {
            display_quest = true;
        } else if (display_quest == true && event.type == sfEvtKeyPressed
        && event.key.code == sfKeyH)
            display_quest = false;
    }
}
