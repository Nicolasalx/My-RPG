/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** get_center_rect
*/

#include <SFML/Graphics.h>

sfVector2f get_rect_center(sfRectangleShape *rect)
{
    sfFloatRect bound = sfRectangleShape_getGlobalBounds(rect);
    float center_x = bound.left + bound.width / 2.0;
    float center_y = bound.top + bound.height / 2.0;
    return (sfVector2f) {center_x, center_y};
}
