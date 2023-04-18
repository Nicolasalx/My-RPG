/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render.c
*/

#include "quest.h"
#include "main.h"
#include "inventory.h"

void render_menu_quest(void)
{
    if (display_quest == true) {
        for (int i = 0; i < size_quest_menu; ++i) {
            if (inventory_content.have_totem == true && already_move.totem_move < 2) {
                if (img_quest_menu[i].text_choose == text_totem) {
                    img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                    sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                    ++already_move.totem_move;
                }
            }
            if (inventory_content.have_totem == true && inventory_content.have_a_helmet == true && inventory_content.nb_key > 0 && already_move.hamlet_move < 2) {
                if (img_quest_menu[i].text_choose == text_amulet) {
                    img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                    sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                    ++already_move.hamlet_move;
                }
            }
            if (inventory_content.have_totem == true && inventory_content.have_a_helmet == true && inventory_content.have_a_helmet == true && inventory_content.nb_key > 2 && already_move.boss_move < 2) {
                if (img_quest_menu[i].text_choose == text_boss) {
                    img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                    sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                    ++already_move.boss_move;
                }
            }
            sfRenderWindow_drawSprite(window, img_quest_menu[i].sprite, NULL);
            sfRenderWindow_drawText(window, img_quest_menu[i].text, NULL);
        }
    }
}
