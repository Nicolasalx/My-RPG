/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** inventory
*/

#ifndef TREE_H_
    #define TREE_H_

    #include "SFML/Graphics.h"
    #include "main.h"

typedef struct {
    bool can_opac;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
    void (*abilities)(int);
} create_tree_t;

typedef enum {
    SPEED_UP,
    STRENGHT_UP,
    ATTACKSPEED_UP,
    HEALTH_UP,
    CRITICAL_UP,
    REGENE,
    IS_FUREUR,
    IS_BLOODBATH,
    IS_GLACIAL_SLOW,
    IS_FINAL
} abilities_e;

extern const int size_tree;

extern bool abilities[];

extern create_tree_t fondation[];

void display_tree(void);
void speed_up(int i);
void add_strenght(int i);
void create_button_tree(void);
void def(int i);
void attack_speed_upgrade(int i);
void upgrade_health(int i);
void critical(int i);
void regeneration(int i);
void blood_bath(int i);
void glacial_slow(int i);
void final(int i);
void fureur(int i);

#endif /* !TREE_H_ */
