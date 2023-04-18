/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "level_arrow.h"
#include "main.h"
#include "player.h"
#include "manage_view.h"
#include "inventory.h"
#include "game_menu.h"
#include "tree.h"

void move_inventory(void)
{
    int number_px_to_move_x = 1920 * current_level;
    for (int i = 0; i < size_inventory_front; ++i) {
        inventory_front[i].pos_rectangle.x += number_px_to_move_x;
        inventory_front[i].pos_text.x += number_px_to_move_x;
        sfRectangleShape_setPosition(inventory_front[i].rectangle, inventory_front[i].pos_rectangle);
        sfText_setPosition(inventory_front[i].text, inventory_front[i].pos_text);
    }
    for (int i = 0; i < size_clothes_inventory; ++i) {
        clothes_inventory[i].pos_rectangle.x += number_px_to_move_x;
        clothes_inventory[i].pos_text.x += number_px_to_move_x;
        clothes_inventory[i].pos_sprite.x += number_px_to_move_x;
        sfRectangleShape_setPosition(clothes_inventory[i].rectangle, clothes_inventory[i].pos_rectangle);
        sfText_setPosition(clothes_inventory[i].text, clothes_inventory[i].pos_text);
        sfSprite_setPosition(clothes_inventory[i].sprite, clothes_inventory[i].pos_sprite);
    }
    for (int i = 0; i < size_stuff_inventory; ++i) {
        stuff_inventory[i].pos_rectangle.x += number_px_to_move_x;
        stuff_inventory[i].pos_text.x += number_px_to_move_x;
        stuff_inventory[i].pos_sprite.x += number_px_to_move_x;
        sfRectangleShape_setPosition(stuff_inventory[i].rectangle, stuff_inventory[i].pos_rectangle);
        sfText_setPosition(stuff_inventory[i].text, stuff_inventory[i].pos_text);
        sfSprite_setPosition(stuff_inventory[i].sprite, stuff_inventory[i].pos_sprite);
    }
    for (int i = 0; i < size_loading_content; ++i) {
        loading_content[i].pos_rectangle.x += number_px_to_move_x;
        loading_content[i].pos_text.x += number_px_to_move_x;
        sfRectangleShape_setPosition(loading_content[i].rectangle, loading_content[i].pos_rectangle);
        sfText_setPosition(loading_content[i].text, loading_content[i].pos_text);
    }
    for (int i = 0; i < size_saving_content; ++i) {
        saving_content[i].pos_text.x += number_px_to_move_x;
        sfText_setPosition(saving_content[i].text, saving_content[i].pos_text);
    }
    for (int i = 0; i < size_validate_saving; ++i) {
        validate_saving[i].pos_rectangle.x += number_px_to_move_x;
        sfRectangleShape_setPosition(validate_saving[i].rectangle, validate_saving[i].pos_rectangle);
    }
    for (int i = 0; i < size_settings_button_game_menu; ++i) {
        settings_button_game_menu[i].pos_sprite.x += number_px_to_move_x;
        sfSprite_setPosition(settings_button_game_menu[i].sprite, settings_button_game_menu[i].pos_sprite);
    }
    for (int i = 0; i < size_tree; ++i) {
        fondation[i].pos.x += number_px_to_move_x;
        sfSprite_setPosition(fondation[i].sprite, fondation[i].pos);
    }
    for (int i = 0; i < size_game_menu_selection; ++i) {
        game_menu_selection[i].pos_rectangle.x += number_px_to_move_x;
        game_menu_selection[i].pos_text.x += number_px_to_move_x;
        sfRectangleShape_setPosition(game_menu_selection[i].rectangle, game_menu_selection[i].pos_rectangle);
        sfText_setPosition(game_menu_selection[i].text, game_menu_selection[i].pos_text);
    }
}

void render_level_arrow(void)
{
    static bool first_time_enter_level = false;
    if (current_level == 1) {
        if (first_time_enter_level == false) {
            player.pos.x = 300 + (1920 * current_level);
            player.pos.y = 300;
            first_time_enter_level = true;
            move_inventory();
        }
        sfFloatRect rectangleBounds = sfRectangleShape_getGlobalBounds(player.collision);
        for (int i = 0; i < size_touret_arrow; ++i) {
            sfVector2f circleCenter = sfCircleShape_getPosition(touret_arrow[i].arrow);
            float circleRadius = sfCircleShape_getRadius(touret_arrow[i].arrow);
            sfFloatRect circleBounds = {circleCenter.x - circleRadius, circleCenter.y - circleRadius, circleRadius * 2.f, circleRadius * 2.f};
            if (sfFloatRect_intersects(&rectangleBounds, &circleBounds, NULL)) {
                player.pos.x = 300 + (1920 * current_level);
                player.pos.y = 450;
            }
            float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(clock_level_arrow.reset_pos));
            if (elapsed_seconds < touret_arrow[i].distance / touret_arrow[i].speed_arrow) {
                touret_arrow[i].current_position_arrow.x = touret_arrow[i].pos_start_arrow.x + touret_arrow[i].direction_arrow.x * elapsed_seconds * touret_arrow[i].speed_arrow;
                touret_arrow[i].current_position_arrow.y = touret_arrow[i].pos_start_arrow.y + touret_arrow[i].direction_arrow.y * elapsed_seconds * touret_arrow[i].speed_arrow;
                sfCircleShape_setPosition(touret_arrow[i].arrow, touret_arrow[i].current_position_arrow);
            } else {
                sfClock_restart(clock_level_arrow.reset_pos);
            }
            sfRenderWindow_drawSprite(window, touret_arrow[i].sprite, NULL);
            sfRenderWindow_drawCircleShape(window, touret_arrow[i].arrow, NULL);
        }
    }
}
