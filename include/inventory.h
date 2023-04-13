/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    #include "SFML/Graphics.h"
    #include "main.h"

    #define CLOTHES_RECTANGLE_COLOR 255, 255, 255, 255
    #define COLOR_TEXT 0, 0, 0, 255
    #define COLOR_BG_SAVING 128, 128, 128, 255
    #define COLOR_TEXT_SAVING 255, 255, 255, 255

typedef struct {
    bool have_a_helmet;
    bool have_armor;
    bool have_boot;
    bool have_glove;
    int nb_potion;
    int nb_xp;
    int nb_key;
    int money;
    bool have_totem;
    bool have_amuletter;
} inventory_content_t;

typedef enum {
    IS_HELMET,
    IS_ARMOR,
    IS_GLOVES,
    IS_BOOTS,
    NOTHING,
} content_clothes_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int size_text;
} inventory_front_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int size_text;
    sfColor color_text;

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;

    content_clothes_t content_clothes;
} clothes_inventory_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int size_text;
    sfColor color_text;

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;

    content_clothes_t content_clothes;
} stuff_inventory_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;
    int choose_opt;
} settings_button_game_menu_t;

typedef struct {
    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int size_text;
    sfColor color_text;
    bool choice;
} saving_content_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    char *text_to_write;
    int size_text;
    sfColor color_text;

    bool can_choose;
    bool validate;
} loading_content_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;
} validate_saving_t;

extern validate_saving_t validate_saving[];
extern const int size_validate_saving;

extern loading_content_t loading_content[];
extern const int size_loading_content;

extern stuff_inventory_t stuff_inventory[];
extern const int size_stuff_inventory;

extern content_clothes_t content_clothes;

extern settings_button_game_menu_t settings_button_game_menu[];
extern const int size_settings_button_game_menu;

extern saving_content_t saving_content[];
extern const int size_saving_content;

extern inventory_front_t inventory_front[];
extern const int size_inventory_front;

extern clothes_inventory_t clothes_inventory[];
extern const int size_clothes_inventory;

extern inventory_content_t inventory_content;

void create_front_inventory(void);
void create_clothes_inventory(void);
void create_button_settings_game_menu(void);
void create_saving_inventory(void);
void create_validate_saving_option(void);
void create_stuff_inventory(void);
char* int_to_string(int value, char* buffer);
void create_loading_content(void);

#endif /* !INVENTORY_H_ */
