/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_
    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef enum {
    NORMAL,
    HOVER,
    PRESSED
} buton_state_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
    void (*redirect)(void);
    buton_state_t buton_state;
} img_button_menu_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;
    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    bool can_quit;
} tutorial_info_t;

extern tutorial_info_t tutorial_info[];
extern const int size_tutorial_info;

extern img_button_menu_t img_button_menu[];
extern const int size_img_button_menu;

extern bool quit_status;

extern bool is_fullscreen;

void create_menu_button(void);
void render_menu(void);
void sound_up_button(void);
void go_home_button(void);
void quit_button(void);
void play_button(void);
void setting_button(void);
void create_tutorial(void);
void tutorial_button(void);
void resize_button(void);
void state(int i);
void verif_state(int i);
void display_valid_first_part(void);
void display_valid_second_part(void);
void display_valid_third_part(void);

#endif /* !MENU_H_ */
