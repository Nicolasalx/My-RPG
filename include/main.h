/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include "my_error.h"
    #include "my_def.h"
    #include "SFML/Graphics.h"
    #include <sys/types.h>

    #include "my_string.h"
    #include "my_number.h"
    #include "my_linkedlist.h"
    #include "my_char.h"
    #include "my_bitshift.h"
    #include "my_graphical.h"
    #include "my_malloc.h"

typedef struct {
    sfVideoMode mode;
    sfUint32 style;
    unsigned int fps;
    const char *name;
} render_window_t;

typedef enum {
    MENU,
    GAME,
    WIN
} game_state_t;

typedef struct {
    void (*render)(void);
    game_state_t render_categ;
} render_func_t;

extern sfRenderWindow *window;
extern render_window_t render_window;

extern bool mouse_button_pressed;
extern bool mouse_button_maintain;
extern bool mouse_button_released;

extern void (*create[])(void);
extern render_func_t render_func[];
extern void (*handle_event[])(sfEvent *);

extern bool is_create_success;
extern game_state_t game_state;

void main_loop(void);
void create_render_window(void);
void manage_event(void);

void render_all_data(void);
void create_all_data(void);

void create_default_font(void);

extern sfVector2i mouse_pos;
extern sfFont* font;

extern bool can_open_game_menu;

void free_all_data(void);

#endif /* !MY_H_ */
