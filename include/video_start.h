/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** video_start
*/

#ifndef VIDEO_START_H_
    #define VIDEO_START_H_

    #include "SFML/Graphics.h"
    #include <stdbool.h>

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;

    sfClock *clock;
    sfIntRect rect;
} video_start_t;

extern video_start_t video_start;

void create_video(void);
void render_video(void);

#endif /* !VIDEO_START_H_ */
