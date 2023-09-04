
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_exact_placed(char secret_code, int secret_code_index, char user_guess, int user_guess_index);
int is_misplaced(char secret_code, int secret_code_index, char user_guess, int user_guess_index);
int if_win_or_lose(int exact_placed_piece, int rounds, int attempts);

int play_analyzed(char* secret_code, char* user_guess, int rounds, int attempts) {
    int exact_placed_piece = 0;
    int missplaced_piece = 0;
    int secret_code_index = 0;

    while (secret_code_index < 4){ 
        int user_guess_index = 0;
        while (user_guess_index < 4) {
                    exact_placed_piece += is_exact_placed(secret_code[secret_code_index], secret_code_index, user_guess[user_guess_index], user_guess_index);
                    missplaced_piece += is_misplaced(secret_code[secret_code_index], secret_code_index, user_guess[user_guess_index], user_guess_index);
                    user_guess_index++;
        }
        secret_code_index++;
    }

    printf("Well placed pieces: %d\nMisplaced pieces: %d \n---\n", exact_placed_piece, missplaced_piece);
    if_win_or_lose(exact_placed_piece, rounds, attempts);
    return 0;
}


