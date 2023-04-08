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
} tile_t;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    char *map_path;
    int nb_line;
    int size_line;
    sfSprite ***full_map;
    tile_t tile[30];
} map_t;

extern map_t map;

void create_map(void);
void render_map(void);

#endif /* !MAP_H_ */
