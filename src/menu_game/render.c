/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "main.h"
#include "game_menu.h"
#include "tree.h"

void render_all_game_menu(int *index_button_pressed, int i)
{
    if (*index_button_pressed == 0) {
        sfRectangleShape_setFillColor(game_menu_selection[1].rectangle,
            (sfColor) {COLOR_BUTTON_PRESSED});
        *index_button_pressed = 1;
    }
    if (is_mouse_over_rectangle_shape(game_menu_selection[i].rectangle) &&
        mouse_button_pressed == true && game_menu_selection[i].can_pressed ==
            true) {
        game_menu_state = game_menu_selection[i].game_menu_state;
        sfRectangleShape_setFillColor(
            game_menu_selection[*index_button_pressed].
                rectangle, (sfColor) {COLOR_BUTTON_GAME_MENU});
        sfRectangleShape_setFillColor(game_menu_selection[i].rectangle,
            (sfColor) {COLOR_BUTTON_PRESSED});
        *index_button_pressed = i;
    }
    sfRenderWindow_drawRectangleShape(window, game_menu_selection[i].
        rectangle, NULL);
    sfRenderWindow_drawText(window, game_menu_selection[i].text, NULL);
}

void render_game_menu_button(void)
{
    static int index_button_pressed = 0;
    if (can_open_game_menu == false) {
        return;
    }
    for (int i = 0; i < size_game_menu_selection; ++i) {
        render_all_game_menu(&index_button_pressed, i);
    }
    for (int i = 0; render_fct_game_menu[i].render != NULL; ++i) {
        if (render_fct_game_menu[i].game_menu_state == game_menu_state) {
            render_fct_game_menu[i].render();
        }
    }
}

render_fct_game_menu_t render_fct_game_menu[] = {
    {display_inventory, INVENTORY},
    {display_tree, TREE},
    {display_settings_inventory, SETTINGS},
    {display_loading_inventory, LOADING},
    {display_saving_inventory, SAVING},
    {NULL, 0}
};
