/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration
*/

#include "inventory.h"
#include "main.h"
#include "game_menu.h"

inventory_front_t inventory_front[] = {
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {350, 200},
    .size_rectangle = {1000, 700},
    .pos_text = {700, 180},
    .text_to_write = "Inventory",
    .size_text = 100,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {400, 350},
    .size_rectangle = {400, 500},
    .pos_text = {400, 280},
    .text_to_write = "Clothes",
    .size_text = 60,
    },
    {
    .color_rectangle = (sfColor) {COLOR_BUTTON_GAME_MENU},
    .pos_rectangle = {880, 350},
    .size_rectangle = {400, 500},
    .pos_text = {880, 280},
    .text_to_write = "Consumable",
    .size_text = 60,
    }
};

const int size_inventory_front = NB_ELEM(inventory_front);

clothes_inventory_t clothes_inventory[] = {
    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {100, 100},
    .pos_text = {460, 500},
    .text_to_write = "",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.4, 0.2},
    .pos_sprite = {470, 370},
    .path_img = "game_src/Menu_game/clothes/50%_life.png",
    .content_clothes = NOTHING,
    },

    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {0, 0},
    .pos_text = {460, 500},
    .text_to_write = "",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.4, 0.2},
    .pos_sprite = {470, 410},
    .path_img = "game_src/Menu_game/clothes/100%_life.png",
    .content_clothes = NOTHING,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {100, 100},
    .pos_text = {460, 500},
    .text_to_write = "",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.4, 0.2},
    .pos_sprite = {470, 450},
    .path_img = "game_src/Menu_game/clothes/25%_life.png",
    .content_clothes = NOTHING,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {100, 100},
    .pos_text = {460, 500},
    .text_to_write = "",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.4, 0.2},
    .pos_sprite = {470, 490},
    .path_img = "game_src/Menu_game/clothes/10%_life.png",
    .content_clothes = NOTHING,
    },

    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {100, 100},
    .pos_text = {460, 500},
    .text_to_write = "Helmet",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.2, 0.2},
    .pos_sprite = {430, 360},
    .path_img = "game_src/Menu_game/clothes/helmet.png",
    .content_clothes = NOTHING,
    },

    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 700},
    .size_rectangle = {100, 100},
    .pos_text = {460, 650},
    .text_to_write = "Armor",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.2, 0.2},
    .pos_sprite = {430, 400},
    .path_img = "game_src/Menu_game/clothes/armor.png",
    .content_clothes = NOTHING,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {630, 550},
    .size_rectangle = {100, 100},
    .pos_text = {640, 500},
    .text_to_write = "Gloves",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.2, 0.2},
    .pos_sprite = {430, 440},
    .path_img = "game_src/Menu_game/clothes/glove.png",
    .content_clothes = NOTHING,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {630, 700},
    .size_rectangle = {100, 100},
    .pos_text = {640, 650},
    .text_to_write = "Boots",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.2, 0.2},
    .pos_sprite = {430, 480},
    .path_img = "game_src/Menu_game/clothes/boot.png",
    .content_clothes = NOTHING,
    },

    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 550},
    .size_rectangle = {100, 100},
    .pos_text = {460, 500},
    .text_to_write = "Helmet",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.5, 0.5},
    .pos_sprite = {450, 555},
    .path_img = "game_src/Menu_game/clothes/helmet.png",
    .content_clothes = IS_HELMET,
    },

    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {450, 700},
    .size_rectangle = {100, 100},
    .pos_text = {460, 650},
    .text_to_write = "Armor",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.5, 0.5},
    .pos_sprite = {450, 700},
    .path_img = "game_src/Menu_game/clothes/armor.png",
    .content_clothes = IS_ARMOR,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {630, 550},
    .size_rectangle = {100, 100},
    .pos_text = {640, 500},
    .text_to_write = "Gloves",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.5, 0.5},
    .pos_sprite = {625, 550},
    .path_img = "game_src/Menu_game/clothes/glove.png",
    .content_clothes = IS_GLOVES,
    },
    {
    .color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {630, 700},
    .size_rectangle = {100, 100},
    .pos_text = {640, 650},
    .text_to_write = "Boots",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},
    .size_sprite = {0.5, 0.5},
    .pos_sprite = {630, 705},
    .path_img = "game_src/Menu_game/clothes/boot.png",
    .content_clothes = IS_BOOTS,
    }
};


const int size_clothes_inventory = NB_ELEM(clothes_inventory);

stuff_inventory_t stuff_inventory[] = {
    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {940, 400},
    .size_rectangle = {100, 100},
    .pos_text = {1025, 455},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.2, 0.2},
    .pos_sprite = {940, 400},
    .path_img = "game_src/Menu_game/item/money.png",
    .content_clothes = NOTHING,
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1110, 400},
    .size_rectangle = {100, 100},
    .pos_text = {1195, 455},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.2, 0.2},
    .pos_sprite = {1115, 410},
    .path_img = "game_src/Menu_game/item/xp.png",
    .content_clothes = NOTHING,
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {940, 550},
    .size_rectangle = {100, 100},
    .pos_text = {1025, 600},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.2, 0.2},
    .pos_sprite = {945, 545},
    .path_img = "game_src/Menu_game/item/potion.png",
    .content_clothes = NOTHING,
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1110, 550},
    .size_rectangle = {100, 100},
    .pos_text = {1195, 600},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.3, 0.3},
    .pos_sprite = {1120, 555},
    .path_img = "game_src/Menu_game/item/totem.png",
    .content_clothes = NOTHING,
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {940, 700},
    .size_rectangle = {100, 100},
    .pos_text = {1025, 750},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.2, 0.2},
    .pos_sprite = {940, 705},
    .path_img = "game_src/Menu_game/item/amulet.png",
    .content_clothes = NOTHING,
    },

    {.color_rectangle = (sfColor) {CLOTHES_RECTANGLE_COLOR},
    .pos_rectangle = {1110, 700},
    .size_rectangle = {100, 100},
    .pos_text = {1195, 750},
    .text_to_write = "0",
    .size_text = 40,
    .color_text = (sfColor) {COLOR_TEXT},

    .size_sprite = {0.4, 0.4},
    .pos_sprite = {1105, 715},
    .path_img = "game_src/Menu_game/item/key.png",
    .content_clothes = NOTHING,
    },
};

const int size_stuff_inventory = NB_ELEM(stuff_inventory);

inventory_content_t inventory_content = {
    .have_a_helmet = false,
    .have_armor = false,
    .have_boot = false,
    .have_glove = false,
    .nb_key = 0,
    .nb_potion = 0,
    .nb_xp = 0,
    .have_amuletter = false,
    .have_totem = false,
    .money = 0,
    .nb_life = 100,
    .nb_life_max = 100
};
