/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** upgrade_health.c
*/

#include "heal_xp_bar.h"
#include "main.h"
#include "inventory.h"
#include "tree.h"

void ability(void)
{
    static bool buy_boot = false;
    static bool upgrade_health = false;

    if (abilities[HEALTH_UP] == true && upgrade_health == false) {
        inventory_content.nb_life_max += 10;
        upgrade_health = true;
    }
    if (inventory_content.have_boot == true && buy_boot == false) {
        inventory_content.nb_life_max += 5;
        buy_boot = true;
    }
}

void stuff(void)
{
    static bool buy_helmet = false;
    static bool buy_armor = false;
    static bool buy_gloves = false;

    if (inventory_content.have_a_helmet == true && buy_helmet == false) {
        inventory_content.nb_life_max += 5;
        buy_helmet = true;
    }
    if (inventory_content.have_armor == true && buy_armor == false) {
        inventory_content.nb_life_max += 5;
        buy_armor = true;
    }
    if (inventory_content.have_glove == true && buy_gloves == false) {
        inventory_content.nb_life_max += 5;
        buy_gloves = true;
    }
    ability();
}
