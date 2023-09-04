#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_user_guess(char* user_guess) {
    int user_guess_size = 0;
    
    while (user_guess[user_guess_size] != '\0') {
        if (isalpha(user_guess[user_guess_size]) != 0) {
            printf("------\nInvalid! Please enter a valid guess\n------\n");
            return  0;
        }
        user_guess_size++;
    }

    return 1;
}