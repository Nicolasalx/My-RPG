/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** heal_xp_bar
*/

#ifndef HEAL_XP_BAR_H_
    #define HEAL_XP_BAR_H_

    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef enum {
    HEAL,
    XP_YES,
    NO
} choose_text_t;

typedef struct {
    sfRectangleShape *rectangle;
    sfColor color_rectangle;
    sfVector2f pos_rectangle;
    sfVector2f size_rectangle;

    sfText *text;
    sfVector2f pos_text;
    int size_text;
    char *text_to_write;
    sfColor color_text;
    choose_text_t choose_text;
    bool can_upgrade_rectangle;
} heal_xp_bar_t;

extern sfClock *clock_heal_bar;

extern heal_xp_bar_t heal_xp_bar[];
extern const int size_heal_xp_bar;
extern int nb_regene;

void create_heal_xp_bar(void);
void render_xp_heal_bar(void);

#endif /* !HEAL_XP_BAR_H_ */
