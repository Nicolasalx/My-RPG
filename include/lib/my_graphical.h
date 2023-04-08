/*
** EPITECH PROJECT, 2022
** my_lib
** File description:
** my_graphical
*/

#ifndef MY_GRAPHICAL
    #define MY_GRAPHICAL

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdbool.h>

typedef struct sprite_data_t {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
    char *path;
} sprite_t;

typedef struct music_data_t {
    sfMusic* music;
    char *path;
} music_t;

void create_music(music_t *music);
void play_music(music_t *music);
void destroy_music(music_t music);

sfBool is_mouse_over_sprite(sfSprite *sprite);
sfBool is_mouse_over_rectangle_shape(sfRectangleShape* rectangle_shape);

#endif /* !MY_GRAPHICAL */
