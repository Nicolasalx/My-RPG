/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "main.h"
#include "settings.h"

settings_img_t settings_img[] = {
    {
    .pos = {600, 250},
    .path_img = "game_src/Settings/settings_bg.png",
    .size = {0.7, 0.7},
    .can_quit = false
    }, {
    .pos = {820, 270},
    .path_img = "game_src/Settings/text_settings.png",
    .size = {0.7, 0.7},
    .can_quit = false
    }, {
    .pos = {1200, 270},
    .path_img = "game_src/Settings/quit.png",
    .size = {0.1, 0.1},
    .can_quit = true
    }
};

const int size_settings_img = NB_ELEM(settings_img);

button_settings_t button_settings [] = {
    {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {700, 380},
    .size = {200, 100},
    .pos_text = {755, 390},
    .text_to_write = "30 fps",
    .choose_opt = 1
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {950, 380},
    .size = {200, 100},
    .pos_text = {1005, 390},
    .text_to_write = "60 fps",
    .choose_opt = 1
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {700, 550},
    .size = {200, 100},
    .pos_text = {730, 560},
    .text_to_write = "1280x720",
    .choose_opt = 2
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {950, 550},
    .size = {200, 100},
    .pos_text = {980, 560},
    .text_to_write = "1920x1080",
    .choose_opt = 2
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {825, 670},
    .size = {200, 80},
    .pos_text = {870, 675},
    .text_to_write = "Valider",
    .choose_opt = 3
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {825, 650},
    .size = {0, 0}, .pos_text = {750, 310},
    .text_to_write = "Choose your frame rate",
    .choose_opt = 0
    }, {
    .color = {COLOR_BG_BUTTON_SETTINGS},
    .pos = {825, 650},
    .size = {0, 0}, .pos_text = {750, 480},
    .text_to_write = "Choose your resolution",
    .choose_opt = 0
    }
};

const int size_button_settings = NB_ELEM(button_settings);

bool can_open_settings;

buton_state_t buton_state = {NORMAL};
