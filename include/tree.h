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
    IS_FINAL,
    NB_ABILITIES
} abilities_e;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
    void (*abilities)(void);
} create_tree_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    char *path_img;
} create_arrow_t;

extern const int size_tree;

extern const int size_arrows;

extern sfClock *time_usable;

extern bool abilities[];

extern create_tree_t fondation[];

extern create_arrow_t arrows[];

void display_tree(void);
void speed_up(void);
void add_strenght(void);
void create_button_tree(void);
void create_arrows(void);
void attack_speed_upgrade(void);
void upgrade_health(void);
void critical(void);
void regeneration(void);
void blood_bath(void);
void glacial_slow(void);
void final(void);
void fureur(void);
void execute_abilities(void);
void upgrade_ad(void);

#endif /* !TREE_H_ */
