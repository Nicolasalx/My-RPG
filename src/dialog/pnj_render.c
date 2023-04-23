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

void pnj_boss(int i)
{
    if (create_dialog[i].when_active_dialog == PNJ_QUEST_BOSS) {
        if (intersect_pnj(create_dialog[i].circle) == true &&
            sfKeyboard_isKeyPressed(sfKeyE)) {
            activated_dialog[PNJ_QUEST_BOSS] = true;
        }
        sfRenderWindow_drawCircleShape(window, create_dialog[i].circle, NULL);
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite_pnj, NULL);
    }
}

void dialog_arrow(int i)
{
    if (activated_dialog[PNJ_QUEST_ARROW] == true &&
        create_dialog[i].when_active_dialog == PNJ_QUEST_ARROW) {
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
        print_text_char(i);
        activated_dialog[PNJ_QUEST_ARROW] = false;
    }
}

void dialog_skelet(int i)
{
    if (activated_dialog[PNJ_QUEST_SKELET] == true &&
        create_dialog[i].when_active_dialog == PNJ_QUEST_SKELET) {
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
        print_text_char(i);
        activated_dialog[PNJ_QUEST_SKELET] = false;
    }
}

void dialog_boss(int i)
{
    if (activated_dialog[PNJ_QUEST_BOSS] == true &&
        create_dialog[i].when_active_dialog == PNJ_QUEST_BOSS) {
        sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
        print_text_char(i);
        activated_dialog[PNJ_QUEST_BOSS] = false;
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
        if (quest_boss == true) {
            pnj_boss(i);
        } else if (quest_amuletter == true) {
            pnj_amuletter(i);
        } else if (quest_totem == true) {
            pnj_totem(i);
        }
        dialog_arrow(i);
        dialog_skelet(i);
        dialog_boss(i);
    }
}
