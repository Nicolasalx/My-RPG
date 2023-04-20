/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** manage_view
*/

#ifndef MANAGE_VIEW_H_
    #define MANAGE_VIEW_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>

    #define LEVEL_TRANSITION_SPEED 1920

extern int current_level;
extern int next_level;

void create_view(void);
void render_view(void);

#endif /* !MANAGE_VIEW_H_ */
