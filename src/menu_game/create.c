/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "main.h"
#include "game_menu.h"

void create_rectangle_menu_game(int i)
{
    game_menu_selection[i].rectangle = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(game_menu_selection[i].rectangle,
        3);
    sfRectangleShape_setOutlineColor(game_menu_selection[i].rectangle,
    sfWhite);
    sfRectangleShape_setSize(game_menu_selection[i].rectangle,
        game_menu_selection[i].size_rectangle);
    sfRectangleShape_setFillColor(game_menu_selection[i].rectangle,
        game_menu_selection[i].color_rectangle);
    sfRectangleShape_setPosition(game_menu_selection[i].rectangle,
        game_menu_selection[i].pos_rectangle);
}

void create_button_menu_game(void)
{
    for (int i = 0; i < size_game_menu_selection; ++i) {
        game_menu_selection[i].text = sfText_create();
        sfText_setString(game_menu_selection[i].text,
        game_menu_selection[i].text_to_write);
        sfText_setFont(game_menu_selection[i].text, font);
        sfText_setCharacterSize(game_menu_selection[i].text, 50);
        sfText_setPosition(game_menu_selection[i].text,
        game_menu_selection[i].pos_text);
        sfText_setFillColor(game_menu_selection[i].text, sfWhite);

        create_rectangle_menu_game(i);
    }
}
