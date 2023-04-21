/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** lauch_open_chest_music
*/

#include <SFML/Audio.h>

void launch_open_chest_music(void)
{
    static int count = 0;

    if (count == 0) {
        sfMusic *chest_music =
            sfMusic_createFromFile("game_src/music/item_get_sound_effect.wav");
        sfMusic_play(chest_music);
    }
    ++ count;
    if (count > 32) {
        count = 0;
    }
}
