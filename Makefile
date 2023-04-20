##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SAVE_SYSTEM_SRC	=	src/saving_system/save_data.c \
					src/saving_system/load_data.c

CHEST_SRC		=	src/chest/create_chest.c \
					src/chest/declaration_chest.c \
					src/chest/render_chest.c

DOOR_SRC		=	src/door/create.c \
					src/door/declaration.c \
					src/door/render.c

DIALOG_SRC		=	src/dialog/create.c \
					src/dialog/declaration.c \
					src/dialog/render.c

ANIMATION_SRC	=	src/animation/create.c \
					src/animation/declaration.c \
					src/animation/render.c

HEAL_XP_BAR_SRC	=	src/heal_xp_bar/create.c \
					src/heal_xp_bar/declaration.c \
					src/heal_xp_bar/render.c

MANAGEVIEW_SRC	=	src/manage_view/create_view.c \
					src/manage_view/render_view.c

COLLISIONMAP_SRC=	src/collision_map/declaration_collision_map.c \
					src/collision_map/create_collision_map.c \
					src/collision_map/render_collision_map.c

MAP_SRC			=	src/map/declaration_map.c \
					src/map/create_map.c \
					src/map/render_map.c

SYSTEM_BOT_SRC	=	src/system_bot_skelet/declaration.c \
					src/system_bot_skelet/create.c \
					src/system_bot_skelet/render.c \
					src/system_bot_skelet/skelet_ia.c

INVENTORY_SRC	=	src/menu_game/inventory/declaration.c \
					src/menu_game/inventory/create.c \
					src/menu_game/inventory/render.c \
					src/menu_game/inventory/stuff.c \
					src/menu_game/inventory/create_rectangle.c

LEVEL_ARROW_SRC	=	src/level_arrow/declaration.c \
					src/level_arrow/create.c \
					src/level_arrow/render.c

TREE_SRC		=	src/menu_game/tree/declaration.c \
					src/menu_game/tree/create.c \
					src/menu_game/tree/render.c \
					src/menu_game/tree/abilities/speed_up.c \
					src/menu_game/tree/abilities/add_strenght.c \
					src/menu_game/tree/abilities/attack_speed.c \
					src/menu_game/tree/abilities/upgrade_health.c \
					src/menu_game/tree/abilities/regeneration.c \
					src/menu_game/tree/abilities/critical.c \
					src/menu_game/tree/abilities/fureur.c \
					src/menu_game/tree/abilities/glacial_slow.c \
					src/menu_game/tree/abilities/final.c \
					src/menu_game/tree/abilities/blood_bath.c

LEVEL_COLLISION = 	src/level_collision/create.c \
					src/level_collision/declaration.c \
					src/level_collision/render.c

LOADING_SRC		=	src/menu_game/loading/declaration.c \
					src/menu_game/loading/create.c \
					src/menu_game/loading/render.c

SAVING_SRC		=	src/menu_game/saving/declaration.c \
					src/menu_game/saving/create.c \
					src/menu_game/saving/render.c

SETTINGS_MENU_SRC=	src/menu_game/settings/declaration.c \
					src/menu_game/settings/create.c \
					src/menu_game/settings/render.c \
					src/menu_game/settings/buton_states.c

MENU_GAME_SRC	=	src/menu_game/create.c \
					src/menu_game/declaration.c \
					src/menu_game/render.c

GENERIC_FUNC_SRC=	src/generic_func/anim_sprite.c \
					src/generic_func/compute_rect_texture.c \
					src/generic_func/check_collision.c \
					src/generic_func/is_rect_collide.c

PLAYER_SRC	=	src/player/declaration_player.c \
				src/player/create_player.c \
				src/player/render_player.c \
				src/player/player_move.c \
				src/player/check_collision_player.c \
				src/player/set_pos_attack_collision.c

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
				src/main/create_default_font.c

MENU_SRC 	=	src/menu/create.c \
				src/menu/declaration.c \
				src/menu/buttons.c \
				src/menu/render.c \
				src/menu/buton_state.c

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
				$(MENU_GAME_SRC) \
				$(INVENTORY_SRC) \
				$(TREE_SRC) \
				$(LOADING_SRC) \
				$(SAVING_SRC) \
				$(SETTINGS_MENU_SRC) \
				$(MAP_SRC) \
				$(LEVEL_ARROW_SRC) \
				$(SYSTEM_BOT_SRC) \
				$(COLLISIONMAP_SRC) \
				$(MANAGEVIEW_SRC) \
				$(CHEST_SRC) \
				$(HEAL_XP_BAR_SRC) \
				$(DIALOG_SRC) \
				$(ANIMATION_SRC) \
				$(DOOR_SRC) \
				$(SAVE_SYSTEM_SRC)

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
