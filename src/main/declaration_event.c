/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_event
*/

#include "main.h"
#include "player.h"

void (*handle_event[])(sfEvent *) = {
    event_player,
    NULL
};
