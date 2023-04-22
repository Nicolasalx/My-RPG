/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** inventory
*/

#ifndef GAME_MENU_H_
    #define GAME_MENU_H_

    #include "SFML/Graphics.h"
    #include "main.h"

    #define COLOR_BUTTON_GAME_MENU 128, 128, 128, 255
    #define COLOR_BUTTON_PRESSED 50, 50, 50, 255

typedef enum {
    INVENTORY,
    TREE,
    SETTINGS,
    LOADING,
    SAVING,
    QUIT
} game_menu_state_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;

    game_menu_state_t game_menu_state;

    bool can_pressed;
} game_menu_selection_t;

typedef struct {
    int id;
    char *name;
} inventory_t;

enum Item {
    HELMET = 1,
    CHESTPLATE = 2,
    PANTS = 3,
    BOOTS = 4,
    POTION = 5,
    KEY = 6,
    MONEY = 7,
    XP = 8
};

typedef struct {
    void (*render)(void);
    game_menu_state_t game_menu_state;
} render_fct_game_menu_t;

extern render_fct_game_menu_t render_fct_game_menu[];

extern game_menu_state_t game_menu_state;

extern int number_of_item;

extern int number_of_item;
extern bool can_open_game_menu;

extern game_menu_selection_t game_menu_selection[];
extern const int size_game_menu_selection;

extern inventory_t inventory[];
extern const int size_inventory;

void create_button_menu_game(void);
void render_game_menu_button(void);
void display_inventory(void);
void display_tree_characteristic(void);
void display_settings_inventory(void);
void display_loading_inventory(void);
void display_saving_inventory(void);
void create_front_inventory(void);
void quit_in_game(void);

#endif /* !GAME_MENU_H_ */
