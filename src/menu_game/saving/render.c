/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "game_menu.h"
#include "settings.h"
#include "menu_game.h"
#include "inventory.h"
#include "save_system.h"

void display_valid_info_save(void)
{
    display_valid_first_part();
    display_valid_second_part();
    display_valid_third_part();
    if (inventory_content.nb_xp > 0) {
        sfText_setString(saving_content[24].text,
            INT(inventory_content.nb_xp));
    } else {
        sfText_setString(saving_content[24].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[24].text, NULL);
    if (inventory_content.money > 0) {
        sfText_setString(saving_content[26].text,
            INT(inventory_content.money));
    } else {
        sfText_setString(saving_content[26].text, "0");
    }
    sfRenderWindow_drawText(window, saving_content[26].text, NULL);
}

void save_each_data(int *index_saving)
{
    switch (* index_saving) {
    case 2:
        save_all_data(SAVE_1);
        break;
    case 3:
        save_all_data(SAVE_2);
        break;
    case 4:
        save_all_data(SAVE_3);
        break;
    default:
        break;
    }
}

void button_saving(int i, int *index_saving)
{
    if (is_mouse_over_rectangle_shape(validate_saving[i].rectangle) == true &&
        mouse_button_pressed == true) {
        if (validate_saving[i].can_apply == true) {
            sfRectangleShape_setFillColor(validate_saving[* index_saving].
                rectangle, (sfColor) {128, 128, 128, 255});
            sfRectangleShape_setFillColor(validate_saving[i].rectangle,
                (sfColor) {0, 0, 255, 255});
            * index_saving = i;
        } else if (validate_saving[i].can_validate == true) {
            save_each_data(index_saving);
        }
    }
    sfRenderWindow_drawSprite(window, validate_saving[i].sprite, NULL);
    sfRenderWindow_drawRectangleShape(window, validate_saving[i].rectangle,
        NULL);
}

void display_saving_inventory(void)
{
    static int index_saving = 2;
    for (int i = 0; i < size_validate_saving; ++i) {
        button_saving(i, &index_saving);
    }
    display_valid_info_save();
    for (int i = 0; i < size_saving_content; ++i) {
        if (saving_content[i].choice == false) {
            sfRenderWindow_drawText(window, saving_content[i].text, NULL);
        }
    }
}
