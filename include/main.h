/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include "my_error.h"
    #include "my_def.h"
    #include "SFML/Graphics.h"
    #include <sys/types.h>

typedef struct {
    sfVideoMode mode;
    sfUint32 style;
    unsigned int fps;
    const char *name;
} render_window_t;

extern sfRenderWindow *window;
extern render_window_t render_window;

void main_loop(void);
void create_render_window(void);

#endif /* !MY_H_ */
