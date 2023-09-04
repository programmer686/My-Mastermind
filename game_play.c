#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int play_analyzed(char* secret_code, char* user_guess, int rounds, int attempts);
int check_user_guess(char* user_guess);


int game_play(char* secret_code, int attempts) {
    int bytes_to_read = 0;
    char buffer[5];
    
    for (int rounds = 1; rounds < attempts + 1; rounds++) {
        printf("Round %d\n",rounds);
        bytes_to_read = read(0, buffer, 4 + 1); // User will never be able to input more then 4 characters
        if (!check_user_guess(buffer)) {
            rounds--;
            continue;
        }
        if (bytes_to_read == 0) {
            printf("Please enter a guess\n");
            return 0;
        }
        buffer[4] = '\0';
        play_analyzed(secret_code, buffer, rounds, attempts);
    }
    return 0;
}