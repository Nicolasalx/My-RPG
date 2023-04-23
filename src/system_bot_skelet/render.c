/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "system_bot_skelet.h"
#include "main.h"
#include "manage_view.h"
#include "player.h"
#include "manage_view.h"
#include "math.h"
#include "inventory.h"

bool collision_rectangle_sprite(sfRectangleShape *rect, sfSprite *sprite)
{
    sfFloatRect rect_bound = sfRectangleShape_getGlobalBounds(rect);
    sfFloatRect sprite_bound = sfSprite_getGlobalBounds(sprite);

    return sfFloatRect_intersects(&rect_bound, &sprite_bound, NULL);
}

void check_if_player_enter(int i)
{
    sfVector2f rectPos = sfRectangleShape_getPosition(player.collision);
    sfVector2f circlePos = sfCircleShape_getPosition(system_bot[i].zone);
    sfVector2f rectSize = sfRectangleShape_getSize(player.collision);
    float circleRadius = system_bot[i].radius;
    circlePos.x += circleRadius;
    circlePos.y += circleRadius;
    float distance = sqrt((circlePos.x - rectPos.x) * (circlePos.x -
        rectPos.x) +
        (circlePos.y - rectPos.y) * (circlePos.y - rectPos.y));
    float rectHalfWidth = rectSize.x / 2.f;
    float rectHalfHeight = rectSize.y / 2.f;
    if (distance > circleRadius + rectHalfWidth && distance >
        circleRadius + rectHalfHeight) {
        system_bot[i].bot_can_move = false;
    } else if (distance < circleRadius - rectHalfWidth && distance <
        circleRadius - rectHalfHeight) {
        system_bot[i].bot_can_move = true;
    } else {
        system_bot[i].bot_can_move = true;
    }
}

bool skelet_die(int i)
{
    if (system_bot[i].nb_life_bot <= 0) {
        system_bot[i].can_draw = false;
        return true;
    }
    return false;
}

void setup_life_skelet(int i)
{
    int rule_of_3 = 0;
    rule_of_3 = (100 * system_bot[i].nb_life_bot) / 100.0;
    system_bot[i].little_life_size_rectangle = (sfVector2f) {rule_of_3, 10};
    sfRectangleShape_setSize(system_bot[i].little_life_rectangle,
        system_bot[i].little_life_size_rectangle);
}

void combat_skelet(int i)
{
    static double stack_damage = 0.0;

    if (collision_rectangle_sprite(player.attack_collision,
        system_bot[i].bot) == true) {
        system_bot[i].nb_life_bot -= player.damage;
        if (skelet_die(i) == true) {
            return;
        }
        setup_life_skelet(i);
    }
    if (collision_rectangle_sprite(player.collision,
        system_bot[i].bot) == true) {
        stack_damage += 0.1;
        if (stack_damage >= 1.0) {
            inventory_content.nb_life -= 1;
            stack_damage = 0.0;
        }
    }
}



void create_skelets(void)
{
    for (int i = 0; i < size_system_bot; ++i) {
        if (system_bot[i].can_draw == true) {
            combat_skelet(i);
            check_if_player_enter(i);
            get_direction_bot(i);
            if (system_bot[i].bot_can_move == true) {
                system_bot[i].pos_end_bot = player.pos;
                bot_chase_player(i);
            }
            if (system_bot[i].bot_can_move == false) {
                bot_got_base(i);
            }
            sfRenderWindow_drawCircleShape(window, system_bot[i].zone, NULL);
            sfRenderWindow_drawSprite(window, system_bot[i].bot, NULL);
            sfRenderWindow_drawRectangleShape(window,
                system_bot[i].big_life_rectangle, NULL);
            sfRenderWindow_drawRectangleShape(window,
                system_bot[i].little_life_rectangle, NULL);
        }
    }
}

void render_system_bot(void)
{   
    static bool ini_pos_player = false;
    if (current_level == 2) {
        if (ini_pos_player == false) {
            player.pos.x = 300;
            player.pos.y = 300;
            ini_pos_player = true;
        }
        create_skelets();
    }
}
