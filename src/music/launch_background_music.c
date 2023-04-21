/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** launch_background_music
*/

#include <SFML/Audio.h>

void lauch_background_music(void)
{
    sfMusic *bg_music =
        sfMusic_createFromFile("game_src/music/background_music.ogg");
    sfMusic_play(bg_music);
}
