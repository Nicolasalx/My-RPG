/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** check_collision
*/

#include "main.h"

bool check_collision(sfRectangleShape *rect_1, sfRectangleShape *rect_2)
{
    sfFloatRect rect_1_bound = sfRectangleShape_getGlobalBounds(rect_1);
    sfFloatRect rect_2_bound = sfRectangleShape_getGlobalBounds(rect_2);

    return sfFloatRect_intersects(&rect_1_bound, &rect_2_bound, NULL);
}
