/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** load_data
*/

#include "main.h"
#include "my_bitshift.h"
#include "my_file.h"
#include <unistd.h>
#include <fcntl.h>

void load_data(char *save_file, void *data, size_t size)
{
    int file = open(save_file, O_RDONLY);
    long int file_size;
    void *buff;

    if (file == -1) {
        print_error(RED("Can't load data from: ", save_file, "\n"));
        my_memset(data, 0, size);
        return;
    }
    file_size = my_filelen(save_file);
    buff = my_malloc(file_size);
    read(file, buff, file_size);
    my_memcpy(data, buff, size);
}
