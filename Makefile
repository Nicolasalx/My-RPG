##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

MAP_SRC			=	src/map/declaration_map.c \
					src/map/create_map.c \
					src/map/render_map.c

INVENTORY_SRC	=	src/inventory/create.c \
					src/inventory/declaration.c \
					src/inventory/render.c

GENERIC_FUNC_SRC=	src/generic_func/anim_sprite.c \
					src/generic_func/compute_rect_texture.c

PLAYER_SRC	=	src/player/declaration_player.c \
				src/player/create_player.c \
				src/player/render_player.c \
				src/player/event_player.c

SETTINGS_SRC=	src/menu/settings/create.c \
				src/menu/settings/declaration.c \
				src/menu/settings/render.c

MAIN_SRC	=	src/main/declaration_main.c \
				src/main/create_render_window.c \
				src/main/manage_event.c \
				src/main/main_loop.c \
				src/main/render_all_data.c \
				src/main/create_all_data.c \
				src/main/declaration_render_all_data.c \
				src/main/declaration_create_all_data.c \
				src/main/create_default_font.c \
				src/main/declaration_event.c

MENU_SRC 	= 	src/menu/create.c \
				src/menu/declaration.c \
				src/menu/buttons.c \
				src/menu/render.c

QUEST_SRC	=	src/quest/create.c \
				src/quest/declaration.c \
				src/quest/render.c

SRC			=	src/main.c \
				$(MAIN_SRC) \
				$(MENU_SRC) \
				$(QUEST_SRC) \
				$(PLAYER_SRC) \
				$(GENERIC_FUNC_SRC) \
				$(SETTINGS_SRC) \
				$(INVENTORY_SRC)

CFLAGS		=	-W -Wall -Wextra -I ./include -I ./include/lib -lcsfml-system \
				-lcsfml-graphics -lcsfml-window -lcsfml-audio -lm

NAME		=	my_rpg

LIBPATH		=	lib/

LIBNAME		=	lib/my_lib.a

OBJ			=	$(SRC:.c=.o)

$(NAME): $(OBJ)
	cd $(LIBPATH) && $(MAKE)
	gcc -o $(NAME) $(OBJ) $(LIBNAME) $(CFLAGS)

all: $(NAME)

clean:
	cd $(LIBPATH) && $(MAKE) clean
	rm -f $(OBJ)
	rm -f *.gcno
	rm -f *.gcda
	rm -f gmon.out

fclean: clean
	cd $(LIBPATH) && $(MAKE) fclean
	rm -f $(NAME)
	rm -f $(NAME_TESTS)

re: fclean all

## ? USAGE : make profiling arg="arg_for_my_prog"
profiling: CFLAGS += -pg
profiling: re
	@printf "\e[0m------------------------------\e[0m\n"
	./$(NAME) $(arg)
	@printf "\e[0m------------------------------\e[0m\n"
	gprof $(NAME) gmon.out

debug: CFLAGS += -g3
debug: re
	gdb -ex "run" -ex "bt full" -ex "detach" -ex "quit" --args $(NAME) $(arg)

std_func_used:
	cd $(LIBPATH) && $(MAKE) std_func_used
	$(MAKE) re
	@printf "\n----------| PROGRAM |----------\e[1;96m\n"
	@symbols=$$(nm -D $(NAME) | awk '$$NF ~ /@GLIBC/ {print $$NF}'); \
	for symbol in $$symbols; do \
		if [[ "$$symbol" =~ ^__.* ]]; then \
			continue; \
		elif [ "$$symbol" = "puts@GLIBC_2.2.5" ]; then \
			printf "%s\e[0;1m <- \e[1;91mused in printf\e[1;96m\n" \
			"$${symbol%@*}"; \
		else \
			printf "%s\n" "$${symbol%@*}"; \
		fi; \
	done
	@printf "\e[0m-------------------------------\n\n"

.PHONY: all clean fclean re profiling debug std_func_used
