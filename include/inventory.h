/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    #include "SFML/Graphics.h"

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;
    sfRectangleShape *rectangle;
    sfColor color;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;
    char *path;
} inventory_menu_front_t;

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

extern int number_of_item;

extern inventory_menu_front_t inventory_menu_front[];
extern const int size_inventory_menu_front;

extern inventory_t inventory[];
extern const int size_inventory;

#endif /* !INVENTORY_H_ */
