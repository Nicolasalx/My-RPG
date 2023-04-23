/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-thibaud.cathala
** File description:
** declaration_boss
*/

#include "boss.h"
#include <stddef.h>
#include "my_def.h"

boss_t boss[] = {
    {
        .pos = {1500, 200},
        .scale = {4, 4},
        .speed = 50,
        .healt = 100,
        .max_healt = 100,
        .damage = 0,
        .boss_dps = 5,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1000, 700},
        .scale = {2, 2},
        .speed = 5,
        .healt = 30,
        .max_healt = 30,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1500, 800},
        .scale = {3, 3},
        .speed = 20,
        .healt = 50,
        .max_healt = 50,
        .damage = 0,
        .boss_dps = 3,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1300, 600},
        .scale = {6, 6},
        .speed = 40,
        .healt = 100,
        .max_healt = 100,
        .damage = 0,
        .boss_dps = 6,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1300, 400},
        .scale = {10, 10},
        .speed = 50,
        .healt = 300,
        .max_healt = 300,
        .damage = 0,
        .boss_dps = 6,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1600, 600},
        .scale = {1, 1},
        .speed = 1,
        .healt = 20,
        .max_healt = 20,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {1300, 900},
        .scale = {1, 1},
        .speed = 1,
        .healt = 20,
        .max_healt = 20,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {500, 200},
        .scale = {2, 2},
        .speed = 3,
        .healt = 30,
        .max_healt = 30,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {450, 900},
        .scale = {1, 1},
        .speed = 1,
        .healt = 20,
        .max_healt = 20,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }, {
        .pos = {600, 700},
        .scale = {2, 2},
        .speed = 1,
        .healt = 20,
        .max_healt = 20,
        .damage = 0,
        .boss_dps = 2,
        .die = false,
        .dead = 0,
        .anim_to_play = BOSS_ATTACK_LEFT,
        .boss_anim = {
            .current_frame = 0,
            .last_anim = BOSS_ATTACK_LEFT,
            .sprite_sheet = {
                {
                    .sheet_path = "game_src/boss/run_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_left.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_left.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/run_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/attack_right.png",
                    .nb_frame = 8,
                    .frame_rate = 8 * BOSS_ANIM_MULT
                }, {
                    .sheet_path = "game_src/boss/die_right.png",
                    .nb_frame = 5,
                    .frame_rate = 5 * BOSS_ANIM_MULT
                }
            }
        }
    }
};

const int nb_boss = NB_ELEM(boss);
