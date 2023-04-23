/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** pnj_render
*/

#include "dialog.h"
#include "main.h"
#include "quest.h"
#include "inventory.h"
#include "player.h"
#include "manage_view.h"

void choose_pnj(int i)
{
    if (quest_boss == true) {
        pnj_boss(i);
    } else if (quest_amuletter == true) {
        pnj_amuletter(i);
    } else {
        if (quest_totem == true) {
            pnj_totem(i);
        }
    }
}

void render_dialog(void)
{
    if (current_level != 0) {
        return;
    }
    static bool player_pos_start = false;
    if (player_pos_start == false) {
        player.pos.x = 300;
        player.pos.y = 450;
        player_pos_start = true;
    }
    for (int i = 0; i < size_create_dialog; ++i) {
        choose_pnj(i);
        dialog_arrow(i);
        dialog_skelet(i);
        dialog_boss(i);
    }
}
