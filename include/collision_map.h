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
void exec_collisions(int i, char **config_map);
sfVector2f find_matching_pos(char c, collision_tile_t *collision_tile);
sfVector2f find_matching_size(char c, collision_tile_t *collision_tile);
void create_map_rectangle_board(char **config_map);
char **get_collision_map_config_file(void);
void create_collision_map(void);

#endif /* !COLLISION_MAP_H_ */
