/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "menu_game.h"
#include "my_def.h"

img_button_menu_t img_button_menu[] = {
    {.pos = {800, 250}, .path_img = "game_src/Menu_button/play.png",
    .size = {1.0, 1.0}, .redirect = play_button},

    {.pos = {800, 450}, .path_img = "game_src/Menu_button/setting.png",
    .size = {1.7, 1.7}, .redirect = setting_button},

    {.pos = {790, 550}, .path_img = "game_src/Menu_button/quit.png",
    .size = {1.0, 1.0}, .redirect = tutorial_button},

    {.pos = {790, 650}, .path_img = "game_src/Menu_button/quit.png",
    .size = {1.0, 1.0}, .redirect = quit_button},
};

const int size_img_button_menu = NB_ELEM(img_button_menu);

bool quit_status;

tutorial_info_t tutorial_info[] = {
    {
        .pos_sprite = {400, 100},
        .size_sprite = {1.3, 1.3} ,
        .path_img = "game_src/tutorial/background.png",
        .pos_text = {0, 0}, .text_to_write = "",
        .can_quit = false
    },
    {
        .pos_sprite = {1320, 100},
        .size_sprite = {0.2, 0.2},
        .path_img = "game_src/Settings/quit.png",
        .pos_text = {0, 0},
        .text_to_write = "",
        .can_quit = true},
    {
        .pos_sprite = {750, 180},
        .size_sprite = {0.3, 0.3},
        .path_img = "game_src/tutorial/tutorial_logo.png",
        .pos_text = {870, 200},
        .text_to_write = "Tutorial",
        .can_quit = false
    },
    {
        .pos_sprite = {740, 280},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/key_A.png", .pos_text = {850, 280}, .text_to_write = "Attack", .can_quit = false},
    {
        .pos_sprite = {740, 350},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_Z.png",
        .pos_text = {850, 350},
        .text_to_write = "Move Forward",
        .can_quit = false
    },
    {
        .pos_sprite = {740, 420},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_S.png",
        .pos_text = {850, 420},
        .text_to_write = "Move Backward",
        .can_quit = false
    },
    {
        .pos_sprite = {740, 490},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_Q.png",
        .pos_text = {850, 490},
        .text_to_write = "Move Leftward",
        .can_quit = false},
    {
        .pos_sprite = {740, 560},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_D.png",
        .pos_text = {850, 560},
        .text_to_write = "Move Rightward",
        .can_quit = false
    },
    {
        .pos_sprite = {740, 630},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_H.png",
        .pos_text = {850, 630},
        .text_to_write = "Display Quests",
        .can_quit = false
    },
    {
        .pos_sprite = {740, 700},
        .size_sprite = {0.5, 0.5},
        .path_img = "game_src/tutorial/Key_esc.png",
        .pos_text = {850, 700},
        .text_to_write = "Display Inventory",
        .can_quit = false
    }
};

const int size_tutorial_info = NB_ELEM(tutorial_info);
