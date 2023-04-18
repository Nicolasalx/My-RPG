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

typedef enum {
    text_totem,
    text_amulet,
    text_boss,
    text_nothing
} text_choose_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;

    sfText *text;
    sfVector2f pos_text;
    int size_text;
    char *text_to_write;
    sfColor color_text;

    text_choose_t text_choose;
} img_quest_t;

typedef struct {
    int totem_move;
    int hamlet_move;
    int boss_move;
} already_move_t;

extern already_move_t already_move;

extern img_quest_t img_quest_menu[];
extern const int size_quest_menu;
extern bool display_quest;

void create_menu_quest(void);
void render_menu_quest(void);

#endif /* !QUEST_H_ */
