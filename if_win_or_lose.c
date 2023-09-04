#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int if_win_or_lose(int exact_placed_piece, int rounds, int attempts) {
    if (exact_placed_piece == 4) {
        printf("Congratz! You did it!\n");
        exit(1); // Illegal
    } else if (rounds == attempts) {
        printf("Shame on you loser\n");
        exit(1); // Illegal
    }

    return 0;
}
