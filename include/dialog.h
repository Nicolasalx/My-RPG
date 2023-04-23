/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** dialog
*/

#ifndef DIALOG_H_
    #define DIALOG_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>

typedef enum {
    PNJ_QUEST_ARROW,
    PNJ_QUEST_SKELET,
    PNJ_QUEST_BOSS,
    NB_DIALOG,
} when_active_dialog_t;

extern bool activated_dialog[NB_DIALOG];

typedef struct {
    sfText *text;
    sfVector2f pos_text;
    int size_text;
    char *text_to_write;
    sfColor color_text;

    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos_sprite;
    sfVector2f size_sprite;
    char *path_img;

    sfSprite *sprite_pnj;
    sfTexture *texture_pnj;
    sfVector2f pos_sprite_pnj;
    sfVector2f size_sprite_pnj;
    char *path_img_pnj;

    sfCircleShape *circle;
    sfVector2f position_circle;
    float radius;
    sfColor color_circle;
    sfColor color_border_circle;
    float outlineThickness;

    when_active_dialog_t when_active_dialog;

    sfClock *clock;
} create_dialog_t;

extern create_dialog_t create_dialog[];
extern const int size_create_dialog;

void create_dialog_text(void);
void render_dialog(void);
void pnj_boss(int i);
void dialog_arrow(int i);
void dialog_skelet(int i);
void dialog_boss(int i);
void render_dialog(void);
bool intersect_pnj(sfCircleShape *circle);
void print_text_char(int i);
void pnj_amuletter(int i);
void pnj_totem(int i);

#endif /* !DIALOG_H_ */
