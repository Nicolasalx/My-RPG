/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render.c
*/

#include "quest.h"
#include "main.h"
#include "inventory.h"

void check_text_move(void)
{
    if (inventory_content.have_totem == true) {
        manage_animation.move_totem = true;
    }
    if (manage_animation.move_totem == true && inventory_content.have_amuletter
        == true && inventory_content.nb_key > 0) {
        manage_animation.move_amuletter = true;
    }
    if (manage_animation.move_totem == true && manage_animation.move_amuletter
        == true && inventory_content.nb_key > 2) {
        manage_animation.move_boss = true;
    }
}

void manage_text_quest(void)
{
    for (int i = 0; i < size_quest_menu; ++i) {
        if (manage_animation.dont_move_totem < 2 && manage_animation.move_totem == true && img_quest_menu[i].text_choose == text_totem) {
            img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
            sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
            ++ manage_animation.dont_move_totem;
        }
        if (manage_animation.dont_move_amuletter < 2 && manage_animation.move_amuletter == true && img_quest_menu[i].text_choose == text_amulet) {
            img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
            sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
            ++ manage_animation.dont_move_amuletter;
        }
        if (manage_animation.dont_move_boss < 2 && manage_animation.move_boss == true && img_quest_menu[i].text_choose == text_boss) {
            img_quest_menu[i].pos_text = (sfVector2f) {img_quest_menu[i].pos_text.x + 750, img_quest_menu[i].pos_text.y};
            sfText_setPosition(img_quest_menu[i].text, img_quest_menu[i].pos_text);
            ++ manage_animation.dont_move_boss;
        }
        sfRenderWindow_drawSprite(window, img_quest_menu[i].sprite, NULL);
        sfRenderWindow_drawText(window, img_quest_menu[i].text, NULL);
    }
}

void render_menu_quest(void)
{
    if (display_quest == true) {
        check_text_move();
        manage_text_quest();
    }
}
