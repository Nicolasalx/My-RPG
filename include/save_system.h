/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** save_system
*/

#ifndef SAVE_SYSTEM_H_
    #define SAVE_SYSTEM_H_

    #include <stddef.h>

void save_data(char *save_file, void *data, size_t size);
void load_data(char *save_file, void *data, size_t size);

#endif /* !SAVE_SYSTEM_H_ */
