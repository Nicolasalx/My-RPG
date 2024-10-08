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

    #define COLOR_TEXT_QUEST 0, 0, 0, 255

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
    bool move_totem;
    bool move_amuletter;
    bool move_boss;
    int dont_move_totem;
    int dont_move_amuletter;
    int dont_move_boss;
} manage_animation_t;

extern manage_animation_t manage_animation;

extern bool quest_totem;
extern bool quest_amuletter;
extern bool quest_boss;

extern img_quest_t img_quest_menu[];
extern const int size_quest_menu;
extern bool display_quest;

void create_menu_quest(void);
void render_menu_quest(void);

#endif /* !QUEST_H_ */
