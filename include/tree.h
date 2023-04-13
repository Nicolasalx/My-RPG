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

extern const int size_tree;
extern bool is_speed_up;
extern bool strenght_up;
extern bool attackspeed_up;
extern bool health_up;
extern bool critical_up;
extern bool regene;
extern bool is_fureur;
extern bool is_bloodbath;
extern bool is_glacial_slow;
extern bool is_final;

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
