/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** quest.h
*/

#ifndef QUEST_H_
    #define QUEST_H_
    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
} img_quest_t;

extern img_quest_t img_quest_menu[];
extern const int size_quest_menu;
extern bool display_quest;

void create_menu_quest(void);
void render_menu_quest(void);

#endif /* !QUEST_H_ */
