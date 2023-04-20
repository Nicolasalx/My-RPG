/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "shop.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"

void detect_shop_open(bool *can_open_shop)
{
    if (check_collision(detect_shop.rectangle, player.collision) && sfKeyboard_isKeyPressed(sfKeyE)) {
        * can_open_shop = true;
    } else {
        sfRenderWindow_drawRectangleShape(window, detect_shop.rectangle, NULL);
    }
}

void close_menu_shop(int i, bool *can_open_shop)
{
    if (is_mouse_over_sprite(shop[i].sprite) == true && mouse_button_pressed == true) {
        if (my_strcmp(shop[i].path_img, "game_src/butons/Menu/Square/Buttons/X.png") == 0) {
            * can_open_shop = false;
        }
    }
}

void validation_buy(int *index_previous_shop)
{
    static bool helmet = false;
    static bool armor = false;
    static bool glove = false;
    static bool boot = false;

    if (*index_previous_shop == 2 && inventory_content.money >= 150 && helmet == false) {
        inventory_content.have_a_helmet = true;
        inventory_content.money -= 150;
        helmet = true;
    }
    if (*index_previous_shop == 3 && inventory_content.money >= 150 && armor == false) {
        inventory_content.have_armor = true;
        inventory_content.money -= 150;
        armor = true;
    }
    if (*index_previous_shop == 4 && inventory_content.money >= 150 && glove == false) {
        inventory_content.have_glove = true;
        inventory_content.money -= 150;
        glove = true;
    }
    if (*index_previous_shop == 5 && inventory_content.money >= 150 && boot == false) {
        inventory_content.have_boot = true;
        inventory_content.money -= 150;
        boot = true;
    }
    if (*index_previous_shop == 6 && inventory_content.money >= 50) {
        inventory_content.nb_potion += 1;
        inventory_content.money -= 50;
    }
}

bool display_shop(int i, bool *can_open_shop, int *index_previous_shop)
{
    if (shop[i].can_choose == true) {
        close_menu_shop(i, can_open_shop);
        if (shop[i].already_buy == true) {
            shop[i].color_rectangle.a = 100;
            sfSprite_setColor(shop[i].sprite, shop[i].color_rectangle);
            sfRectangleShape_setFillColor(shop[i].rectangle, (sfColor) {0, 0, 0, 255});
        } else {
            if (is_mouse_over_rectangle_shape(shop[i].rectangle) == true && mouse_button_pressed == true) {
                sfRectangleShape_setFillColor(shop[*index_previous_shop].rectangle, (sfColor) {128, 128, 128, 255});
                sfRectangleShape_setFillColor(shop[i].rectangle, (sfColor) {0, 0, 255, 255});
                * index_previous_shop = i;
            }
        }
    }
    if (is_mouse_over_rectangle_shape(shop[12].rectangle) == true && mouse_button_pressed == true) {
        if (* index_previous_shop != 0) {
            validation_buy(index_previous_shop);
            return true;
        }
    }
    return false;
}

void detect_item_can_buy(void)
{
    if (inventory_content.have_a_helmet == true) {
        shop[2].already_buy = true;
    } else {
        shop[2].already_buy = false;
    }
        if (inventory_content.have_armor == true) {
        shop[3].already_buy = true;
    } else {
        shop[3].already_buy = false;
    }
    if (inventory_content.have_glove == true) {
        shop[4].already_buy = true;
    } else {
        shop[4].already_buy = false;
    }
    if (inventory_content.have_boot == true) {
        shop[5].already_buy = true;
    } else {
        shop[5].already_buy = false;
    }
}

void render_shop(void)
{
    static bool can_open_shop = false;
    static int previous_index_choose = 0;

    if (next_level != 0) {
        return;
    }
    detect_shop_open(&can_open_shop);
    if (can_open_shop == true) {
        detect_item_can_buy();
        for (int i = 0; i < size_shop; ++i) {
            if (display_shop(i, &can_open_shop, &previous_index_choose) == true) {
                break;
            }
        }
        for (int i = 0; i < size_shop; ++i) {
            sfRenderWindow_drawRectangleShape(window, shop[i].rectangle, NULL);
            sfRenderWindow_drawText(window, shop[i].text, NULL);
            sfRenderWindow_drawSprite(window, shop[i].sprite, NULL);
        }
    }
}
