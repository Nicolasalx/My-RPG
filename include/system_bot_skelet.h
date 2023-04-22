/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** system_bot_skelet
*/

#ifndef SYSTEM_BOT_SKELET_H_
    #define SYSTEM_BOT_SKELET_H_

    #include "SFML/Graphics.h"
    #include "main.h"

typedef struct {
    sfSprite *bot;
    sfTexture *bot_texture;
    sfVector2f bot_pos_sprite;
    sfVector2f bot_size_sprite;
    char *bot_path_img;
    sfVector2f reset_pos_bot;

    sfRectangleShape *big_life_rectangle;
    sfColor big_life_color_rectangle;
    sfVector2f big_life_pos_rectangle;
    sfVector2f big_life_size_rectangle;
    float thickness_big;

    sfRectangleShape *little_life_rectangle;
    sfColor little_life_color_rectangle;
    sfVector2f little_life_pos_rectangle;
    sfVector2f little_life_size_rectangle;
    float thickness_little;

    sfCircleShape *zone;
    sfVector2f position_zone;
    float radius;
    sfColor color_zone;
    sfColor border_zone;
    float outlineThickness;

    bool bot_can_move;
    sfClock *clock;

    sfVector2f current_position_bot;
    sfVector2f direction_bot;
    sfVector2f pos_start_bot;
    sfVector2f pos_end_bot;
    float speed_bot;
    float distance;

    sfVector2f pos_bot_ini;

    unsigned int nb_life_bot;

    bool can_draw;
} system_bot_t;

extern system_bot_t system_bot[];
extern const int size_system_bot;

void create_system_bot(void);
void render_system_bot(void);
void get_direction_bot(int i);
void chase_set_pos(int i, float elapsed_seconds);
bool bot_chase_player(int i);
void bot_got_base(int i);
void setup_life_skelet(int i);
void combat_skelet(int i);
void set_direction_skelet(int i);
void create_skelets(void);
void render_system_bot(void);
bool collision_rectangle_sprite(sfRectangleShape *rect, sfSprite *sprite);
void check_if_player_enter(int i);
bool skelet_die(int i);

#endif /* !SYSTEM_BOT_SKELET_H_ */
