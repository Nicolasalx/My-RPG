/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** system_bot_skelet
*/

#ifndef SYSTEM_BOT_SKELET_H_
    #define SYSTEM_BOT_SKELET_H_

    #include "SFML/Graphics.h"

typedef struct {
    sfSprite *bot;
    sfTexture *bot_texture;
    sfVector2f bot_pos_sprite;
    sfVector2f bot_size_sprite;
    char *bot_path_img;
    sfVector2f reset_pos_bot;

    sfVector2f current_position_bot;
    sfVector2f direction_bot;
    sfVector2f pos_start_bot;
    sfVector2f pos_end_bot;
    float speed_bot;
    float distance;

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

} system_bot_t;

extern system_bot_t system_bot[];
extern const int size_system_bot;

void create_system_bot(void);
void render_system_bot(void);

#endif /* !SYSTEM_BOT_SKELET_H_ */
