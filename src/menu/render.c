/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** render
*/

#include "menu_game.h"
#include "main.h"
#include "my_graphical.h"
#include "settings.h"

<<<<<<< HEAD
void sound_up_button(void)
{
    print("SOUND UP\n");
}

void go_home_button(void)
{
    print("GO HOME\n");
}

void setting_button(void)
{
    can_open_settings = true;
}

=======
>>>>>>> a0e19fdec32b665a11a0290c025299def0904d87
void render_menu(void)
{
    for (int i = 0; i < size_img_button_menu; ++i) {
        if (is_mouse_over_sprite(img_button_menu[i].sprite) == true
            && mouse_button_pressed == true) {
            img_button_menu[i].redirect();
        }
        sfRenderWindow_drawSprite(window, img_button_menu[i].sprite, NULL);
    }
    if (can_open_settings == true) {
        render_settings();
    }
}
