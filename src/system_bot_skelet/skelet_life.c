/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** skelet_life
*/

#include "system_bot_skelet.h"
#include "main.h"
#include "manage_view.h"
#include "player.h"
#include "manage_view.h"
#include "math.h"
#include "inventory.h"

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

void set_direction_skelet(int i)
{
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

void create_skelets(void)
{
    for (int i = 0; i < size_system_bot; ++i) {
        if (system_bot[i].can_draw == true) {
            set_direction_skelet(i);
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
