/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** interaction_shop
*/

#include "shop.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"

void detect_shop_open(bool *can_open_shop)
{
    if (check_collision(detect_shop.rectangle, player.collision) &&
        sfKeyboard_isKeyPressed(sfKeyE)) {
        * can_open_shop = true;
    } else {
        sfRenderWindow_drawRectangleShape(window, detect_shop.rectangle,
            NULL);
    }
}

void close_menu_shop(int i, bool *can_open_shop)
{
    if (is_mouse_over_sprite(shop[i].sprite) == true && mouse_button_pressed
        == true) {
        if (my_strcmp(shop[i].path_img,
            "game_src/butons/Menu/Square/Buttons/X.png") == 0) {
            * can_open_shop = false;
        }
    }
}

void validation_buy_potion(int *index_previous_shop)
{
    static bool glove = false;
    static bool boot = false;

    if (*index_previous_shop == 4 && inventory_content.money >= 150 && glove
        == false) {
        inventory_content.have_glove = true;
        inventory_content.money -= 150;
        glove = true;
    }
    if (*index_previous_shop == 5 && inventory_content.money >= 150 && boot ==
        false) {
        inventory_content.have_boot = true;
        inventory_content.money -= 150;
        boot = true;
    }
    if (*index_previous_shop == 6 && inventory_content.money >= 50) {
        inventory_content.nb_potion += 1;
        inventory_content.money -= 50;
    }
}

void validation_buy(int *index_previous_shop)
{
    static bool helmet = false;
    static bool armor = false;

    if (*index_previous_shop == 2 && inventory_content.money >= 150 && helmet
        == false) {
        inventory_content.have_a_helmet = true;
        inventory_content.money -= 150;
        helmet = true;
    }
    if (*index_previous_shop == 3 && inventory_content.money >= 150 && armor ==
        false) {
        inventory_content.have_armor = true;
        inventory_content.money -= 150;
        armor = true;
    }
    validation_buy_potion(index_previous_shop);
}