/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** shop
*/

#ifndef SHOP_H_
    #define SHOP_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>

typedef struct {
    sfText *text;
    sfVector2f pos_text;
    int size_text;
    char *text_to_write;
    sfColor color_text;

    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;

    bool can_choose;
    bool already_buy;
} shop_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;
} detect_shop_t;

extern detect_shop_t detect_shop;

extern shop_t shop[];
extern const int size_shop;

void create_shop(void);
void render_shop(void);

#endif /* !SHOP_H_ */
