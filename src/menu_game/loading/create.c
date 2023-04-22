/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** create
*/

#include "inventory.h"

void create_text_loading(int i)
{
    loading_content[i].text = sfText_create();
    sfText_setFont(loading_content[i].text, font);
    sfText_setString(loading_content[i].text, loading_content[i].
        text_to_write);
    sfText_setCharacterSize(loading_content[i].text, loading_content[i].
        size_text);
    sfText_setPosition(loading_content[i].text, loading_content[i].
        pos_text);
}

void create_loading_content(void)
{
    for (int i = 0; i < size_loading_content; ++i) {
        loading_content[i].rectangle = sfRectangleShape_create();
        sfRectangleShape_setSize(loading_content[i].rectangle,
            loading_content[i].size_rectangle);
        sfRectangleShape_setPosition(loading_content[i].rectangle,
            loading_content[i].pos_rectangle);
        sfRectangleShape_setFillColor(loading_content[i].rectangle,
            loading_content[i].color_rectangle);
        sfRectangleShape_setOutlineColor(loading_content[i].rectangle,
            sfBlack);
        sfRectangleShape_setOutlineThickness(loading_content[i].rectangle,
            3.f);
        create_text_loading(i);
    }
}