/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "inventory.h"
#include <unistd.h>
#include "save_system.h"

void select_opt_validate(int *last_choice, bool *can_validate, int i)
{
    if (loading_content[i].validate == true && *can_validate == true) {
        switch (* last_choice) {
        case 1:
            load_all_data(SAVE_1);
            break;
        case 2:
            load_all_data(SAVE_2);
            break;
        case 3:
            load_all_data(SAVE_3);
            break;
        default:
            break;
        }
    }
}

void select_opt(int *last_choice, bool *can_validate, int i)
{
    if (is_mouse_over_rectangle_shape(loading_content[i].rectangle) &&
        mouse_button_pressed == true) {
        if (loading_content[i].can_choose == true) {
            sfRectangleShape_setFillColor(loading_content[*last_choice].
                rectangle, loading_content[i].color_rectangle);
            sfRectangleShape_setFillColor(loading_content[i].rectangle,
                (sfColor) {100, 100, 100, 255});
            *last_choice = i;
            *can_validate = true;
        }
        select_opt_validate(last_choice, can_validate, i);
    }
}

void display_loading_inventory(void)
{
    static bool can_validate = false;
    static int last_choice = 0;
    for (int i = 0; i < size_loading_content; ++i) {
        select_opt(&last_choice, &can_validate, i);
        sfRenderWindow_drawRectangleShape(window, loading_content[i].
            rectangle, NULL);
        sfRenderWindow_drawText(window, loading_content[i].text, NULL);
    }
}
