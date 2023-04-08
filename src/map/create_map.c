/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create_map
*/

#include "map.h"
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include "my_file.h"

sfTexture *find_matching_texture(char c, tile_t *tile)
{
    for (int i = 0; tile[i].path != NULL; ++i) {
        if (tile[i].representation == c) {
            return tile[i].texture;
        }
    }
    print_error(RED("Invalid config map: unknown char \'", &c, "\'\n"));
    is_create_success = false;
    return NULL;
}

void create_map_sprite_board(char **config_map)
{
    for (int i = 0; config_map[i] != NULL ; ++i) {
        for (int j = 0; config_map[i][j] != '\0'; ++j) {
            map.full_map[i][j] = sfSprite_create();
            sfSprite_setTexture(map.full_map[i][j],
                find_matching_texture(config_map[i][j], map.tile), sfTrue);
        }
    }
}

char **get_map_config_file(void)
{
    char **config_map;
    int config_file;
    char *buff;
    int nb_line;
    int *size_line;

    config_file = open_file(map.map_path);
    if (config_file == -1) {
        print_fatal_error_and_exit(OPEN_CONFIG_FILE_FAIL);
    }
    buff = my_file_to_str(config_file, my_filelen(map.map_path));
    nb_line = count_nb_line(buff);
    size_line = count_lines_size(buff, nb_line);
    config_map = my_str_to_board(buff, nb_line, size_line);
    map.full_map = (sfSprite ***) malloc_gn_adv_board(sizeof(sfSprite *), nb_line, size_line); // !
    map.nb_line = nb_line;
    map.size_line = size_line[0];
    my_free(buff, size_line);
    return config_map;
}

void create_map(void)
{
    for (int i = 0; map.tile[i].path != NULL; ++i) {
        map.tile[i].texture = sfTexture_createFromFile(map.tile[i].path, NULL);
    }
    create_map_sprite_board(get_map_config_file());
}
