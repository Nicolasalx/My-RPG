/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** malloc_gn_adv_board
*/

#include <stdlib.h>
#include "my_malloc.h"

void **malloc_gn_adv_board(size_t size_data, int size_board, int *size_line)
{
    void **board = my_malloc(sizeof(void *) * (size_board + 1));
    int i;

    for (i = 0; i < size_board; ++i) {
        board[i] = my_malloc(size_data * size_line[i]);
    }
    board[i] = NULL;
    return board;
}
