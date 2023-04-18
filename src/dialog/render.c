/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "dialog.h"
#include "main.h"
#include "inventory.h"

#include <stdio.h>

void print_text_char(int i)
{
    int current_char = 0;
    int max_char = my_strlen(create_dialog[i].text_to_write);
    char message[1000];
    while (current_char < max_char) {
        float elapsed_seconds = sfTime_asSeconds(sfClock_getElapsedTime(create_dialog[i].clock));
        if (elapsed_seconds > 0.1) {
            message[current_char] = create_dialog[i].text_to_write[current_char];
            message[current_char + 1] = '\0';
            ++current_char;
            sfText_setString(create_dialog[i].text, message);
            sfRenderWindow_drawText(window, create_dialog[i].text, NULL);
            sfClock_restart(create_dialog[i].clock);
        }
        sfRenderWindow_display(window);
    }
    message[current_char] = '\0';
    sfSleep((sfTime) {2000000});
}

void render_dialog(void)
{
    for (int i = 0; i < size_create_dialog; ++i) {
        if (sfKeyboard_isKeyPressed(sfKeyA)) {
            activated_dialog[PNJ_QUEST_ARROW] = true;
        }

        if (sfKeyboard_isKeyPressed(sfKeyB)) {
            activated_dialog[PNJ_QUEST_SKELET] = true;
        }

        if (activated_dialog[PNJ_QUEST_ARROW] == true && create_dialog[i].when_active_dialog == PNJ_QUEST_ARROW) {
            sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
            print_text_char(i);
            activated_dialog[PNJ_QUEST_ARROW] = false;
        }

        if (activated_dialog[PNJ_QUEST_SKELET] == true && create_dialog[i].when_active_dialog == PNJ_QUEST_SKELET) {
            sfRenderWindow_drawSprite(window, create_dialog[i].sprite, NULL);
            print_text_char(i);
            activated_dialog[PNJ_QUEST_SKELET] = false;
        }
    }
}
