/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "main.h"
#include "save_system.h"

int main(void)
{
//    load_all_data(SAVE_1);
    create_all_data();
    if (is_create_success == false) {
        return 84;
    }
    main_loop();
    return 0;
}
