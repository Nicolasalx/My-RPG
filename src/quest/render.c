/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render.c
*/

#include "quest.h"
#include "main.h"
#include "inventory.h"

void check_text_move(bool *move_totem, bool *move_helmet, bool *move_boss)
{
    if (inventory_content.have_totem == true) {
        *move_totem = true;
    }
    if (*move_totem == true && inventory_content.have_amuletter == true && inventory_content.nb_key > 0) {
        *move_helmet = true;
    }
    if (*move_totem == true && *move_helmet == true && inventory_content.nb_key > 2) {
        *move_boss = true;
    }
}

void render_menu_quest(void)
{
    static bool move_totem = false;
    static bool move_helmet = false;
    static bool move_boss = false;

    static int dont_move_totem = 0;
    static int dont_move_helmet = 0;
    static int dont_move_boss = 0;
    if (display_quest == true) {
        check_text_move(&move_totem, &move_helmet, &move_boss);
        for (int i = 0; i < size_quest_menu; ++i) {
            if (dont_move_totem < 2 && move_totem == true && img_quest_menu[i].text_choose == text_totem) {
                img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                ++ dont_move_totem;
            }

            if (dont_move_helmet < 2 && move_helmet == true && img_quest_menu[i].text_choose == text_amulet) {
                img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                ++ dont_move_helmet;
            }

            if (dont_move_boss < 2 && move_boss == true && img_quest_menu[i].text_choose == text_boss) {
                img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
                sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
                ++ dont_move_boss;
            }
            sfRenderWindow_drawSprite(window, img_quest_menu[i].sprite, NULL);
            sfRenderWindow_drawText(window, img_quest_menu[i].text, NULL);
        }
    }
}
