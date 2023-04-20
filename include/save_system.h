/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** save_system
*/

#ifndef SAVE_SYSTEM_H_
    #define SAVE_SYSTEM_H_

    #include <stddef.h>
    #include <stdbool.h>

typedef enum {
    SAVE_1 = 1,
    SAVE_2 = 2,
    SAVE_3 = 3,
    NB_SAVE = 4
} save_num_t;

typedef struct data_to_save_t {
    char *file;
    void *data;
    size_t size;
} data_to_save_t;

char *build_path_save(char *path, save_num_t save_num);
void save_data(char *save_file, void *data, size_t size);
void load_data(char *save_file, void *data, size_t size);
void save_all_data(save_num_t save_num);
void load_all_data(save_num_t save_num);

extern bool is_save_exist[];
extern data_to_save_t data_to_save[];

#endif /* !SAVE_SYSTEM_H_ */
