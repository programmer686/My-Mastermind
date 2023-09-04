#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "generated_game.h"

int game_start(int input, char **argv, struct gameInfo* generated_game);

int main(int argc, char **argv) {
    generated_game c;
    generated_game *generated_game_pointer = &c;
    game_start(argc, argv, generated_game_pointer);
    return 0;
}