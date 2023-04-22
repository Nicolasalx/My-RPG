/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_create_all_data
*/

#include "main.h"
#include "menu_game.h"
#include "quest.h"
#include "player.h"
#include "settings.h"
#include "map.h"
#include "game_menu.h"
#include "inventory.h"
#include "level_arrow.h"
#include "tree.h"
#include "system_bot_skelet.h"
#include "collision_map.h"
#include "manage_view.h"
#include "dialog.h"
#include "heal_xp_bar.h"
#include "chest.h"
#include "animation.h"
#include "door.h"
#include "shop.h"
#include "video_start.h"

void (*create[])(void) = {
    create_default_font,
    create_menu_button,
    create_menu_quest,
    create_img_settings,
    create_button_settings,
    create_button_menu_game,
    create_button_tree,
    create_front_inventory,
    create_loading_content,
    create_tutorial,
    create_system_bot,
    create_animation,
    create_button_settings_game_menu,
    create_player,
    create_map,
    create_clothes_inventory,
    create_saving_inventory,
    create_validate_saving_option,
    create_stuff_inventory,
    create_arrow_and_touret,
    create_button_tree,
    create_heal_xp_bar,
    create_door,
    create_dialog_text,
    create_collision_map,
    create_shop,
    create_chest,
    create_video,
    NULL
};
