/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** door
*/

#ifndef DOOR_H_
    #define DOOR_H_

    #include "SFML/Graphics.h"
    #include <stdbool.h>

    #define COLOR_DOOR 128, 128, 128, 255

typedef enum {
    LEVEL_SKELET,
    LEVEL_ARROW,
    LEVEL_BOSS,
    BACK_TO_START,
} choice_level_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    choice_level_t choice_level;
} door_t;

extern door_t door[];
extern const int size_door;

extern bool go_back;
extern bool go_level_1;
extern bool go_level_2;
extern bool go_level_3;


void create_door(void);
void render_door(void);

#endif /* !DOOR_H_ */
