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

void create_map(void)
{
    char **config_map;
    char *buff;
    int config_file;
    int nb_line;
    int *size_line;

    for (int i = 0; &map.tile[i] != NULL; ++i) {
        map.tile[i].texture = sfTexture_createFromFile(map.tile[i].path, NULL);
        map.tile[i].sprite = sfSprite_create();
        sfSprite_setTexture(map.tile[i].sprite, map.tile[i].texture, sfTrue);
    }
    config_file = open_file(map.map_path);
    if (config_file == -1) {
        print_fatal_error_and_exit(OPEN_CONFIG_FILE_FAIL);
    }
    buff = my_file_to_str(config_file, my_filelen(map.map_path));
    nb_line = count_nb_line(buff);
    size_line = count_lines_size(buff, nb_line);
    config_map = my_str_to_board(buff, nb_line, size_line);
}
