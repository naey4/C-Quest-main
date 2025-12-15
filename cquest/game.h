#ifndef GAME_H
#define GAME_H

#include "score.h"

void acak_daftar_kata(void);
int play_game_session(char mode_char, const char *player_name, ScoreList *sl);

#endif