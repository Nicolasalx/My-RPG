/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** settings
*/

#ifndef SETTINGS_H_
    #define SETTINGS_H_

    #include "SFML/Graphics.h"

    #define COLOR_BG_BUTTON_SETTINGS 0, 0, 0, 0

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
    void (*redirect)(void);
    bool can_quit;
} settings_img_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color;
    sfVector2f pos;
    sfVector2f size;
    char *path;
    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int choose_opt;
} button_settings_t;

extern button_settings_t button_settings[];
extern const int size_button_settings;

extern settings_img_t settings_img[];
extern const int size_settings_img;

extern bool can_open_settings;

void create_img_settings(void);
void render_settings(void);
void create_button_settings(void);

#endif /* !SETTINGS_H_ */
