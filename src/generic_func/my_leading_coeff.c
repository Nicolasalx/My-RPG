/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** my_leading_coeff
*/

#include <SFML/Graphics.h>

double my_leading_coeff(sfVector2f pos_1, sfVector2f pos_2)
{
    return (pos_2.y - pos_1.y) / (pos_2.x - pos_1.x);
}
