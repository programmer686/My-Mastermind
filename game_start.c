#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "generated_game.h"

char* randomNum();
int game_play(char* secret_code, int attempts);

int game_start(int input, char **argv, struct gameInfo* generated_game) {
    generated_game->code = randomNum();
    generated_game->attempts = 10;

    for (int i = 0; i <= input - 1; i++) {
        if (argv[i][0] == '-') {
            if (argv[i][1] == 't') {
                i++;
                generated_game->attempts = atoi(argv[i]);
            } else if (argv[i][1] == 'c') {
                i++;
                generated_game->code  = argv[i];
            }
        }
    }
    printf("Will you find the secret code?\nYou have %d attempts to guess the code\n---\n", generated_game->attempts);
    game_play(generated_game->code, generated_game->attempts);
    return 0;
}

