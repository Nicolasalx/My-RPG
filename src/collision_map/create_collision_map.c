/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_collision_map
*/

#include "map.h"
#include "collision_map.h"
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include "my_file.h"

sfVector2f find_matching_size(char c, collision_tile_t *collision_tile)
{
    for (int i = 0; collision_tile[i].representation != '\0'; ++i) {
        if (collision_tile[i].representation == c) {
            return (sfVector2f) {
                collision_tile[i].size.x * map.scale.x,
                collision_tile[i].size.y * map.scale.y
            };
        }
    }
    print_error(RED("Invalid config map: unknown char \'", &c, "\'\n"));
    is_create_success = false;
    return (sfVector2f) {0, 0};
}

sfVector2f find_matching_pos(char c, collision_tile_t *collision_tile)
{
    for (int i = 0; collision_tile[i].representation != '\0'; ++i) {
        if (collision_tile[i].representation == c) {
            return (sfVector2f) {
                collision_tile[i].pos.x * map.scale.x,
                collision_tile[i].pos.y * map.scale.y
            };
        }
    }
    print_error(RED("Invalid config map: unknown char \'", &c, "\'\n"));
    is_create_success = false;
    return (sfVector2f) {0, 0};
}

void create_map_rectangle_board(char **config_map)
{
    for (int i = 0; config_map[i] != NULL ; ++i) {
        for (int j = 0; config_map[i][j] != '\0'; ++j) {
            if (find_matching_size(config_map[i][j], collision_map.collision_tile).x != 0) {
                collision_map.full_map[i][j] = sfRectangleShape_create();
                sfRectangleShape_setFillColor(collision_map.full_map[i][j], sfTransparent);
                sfRectangleShape_setOutlineColor(collision_map.full_map[i][j], sfGreen);
                sfRectangleShape_setOutlineThickness(collision_map.full_map[i][j], 1);
                sfRectangleShape_setSize(collision_map.full_map[i][j],
                find_matching_size(config_map[i][j], collision_map.collision_tile));
                sfRectangleShape_setPosition(collision_map.full_map[i][j],
                find_matching_pos(config_map[i][j], collision_map.collision_tile));
            } else {
                collision_map.full_map[i][j] = NULL;
            }
        }
    }
}

char **get_collision_map_config_file(void)
{
    char **config_map;
    int config_file;
    char *buff;
    int nb_line;
    int *size_line;

    config_file = open_file(collision_map.map_path);
    if (config_file == -1) {
        print_fatal_error_and_exit(OPEN_CONFIG_FILE_FAIL);
    }
    buff = my_file_to_str(config_file, my_filelen(collision_map.map_path));
    nb_line = count_nb_line(buff);
    size_line = count_lines_size(buff, nb_line);
    config_map = my_str_to_board(buff, nb_line, size_line);
    collision_map.full_map = (sfRectangleShape ***)
        malloc_gn_adv_board(sizeof(sfRectangleShape *), nb_line, size_line);
    collision_map.nb_line = nb_line;
    collision_map.size_line = size_line[0];
    my_free(buff, size_line);
    return config_map;
}

void create_collision_map(void)
{
    create_map_rectangle_board(get_collision_map_config_file());
}
