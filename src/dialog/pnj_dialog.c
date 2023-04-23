/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** pnj_dialog
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
