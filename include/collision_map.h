/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** collision_map
*/

#ifndef COLLISION_MAP_H_
    #define COLLISION_MAP_H_

    #include <SFML/Graphics.h>

typedef struct {
    char representation;
    sfVector2f pos;
    sfVector2f size;
} collision_tile_t;

typedef struct {
    sfVector2f pos;
    sfVector2f scale;
    char *map_path;
    int nb_line;
    int size_line;
    sfVector2f **fixed_pos_tile;
    sfRectangleShape ***full_map;
    collision_tile_t collision_tile[30];
} collision_map_t;

extern collision_map_t collision_map;

void create_collision_map(void);
void render_collision_map(void);

#endif /* !COLLISION_MAP_H_ */
