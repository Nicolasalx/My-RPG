/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** save_data
*/

#include "main.h"
#include <unistd.h>
#include <fcntl.h>

void save_data(char *save_file, void *data, size_t size)
{
    int file = open(save_file, O_CREAT | O_WRONLY | O_TRUNC, 0666);

    write(file, data, size);
    write(file, "\n", 1);
    close(file);
}
