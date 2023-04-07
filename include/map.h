/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

    #include <SFML/Graphics.h>

    #define TILE_RESOLUTION 16

typedef struct {
    char representation;
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
} tile_t;

typedef struct {
    sfVector2f *pos;
    sfVector2f *size;
    char *map_path;
    sfSprite ***full_map;
    tile_t tile[];
} map_t;

extern map_t map;

#endif /* !MAP_H_ */
