#ifdef MY_MASTERMIND
#define MY

int check_user_guess(char* user_guess);
int is_exact_placed(char secret_code, int secret_code_index, char user_guess, int user_guess_index);
int is_misplaced(char secret_code, int secret_code_index, char user_guess, int user_guess_index);
int if_win_or_lose(int exact_placed_piece, int rounds, int attempts);
int play_analyzed(char* secret_code, char* user_guess, int rounds, int attempts);
int check_user_guess(char* user_guess);
int game_play(char* secret_code, int attempts);
int game_start(int input, char **argv, struct gameInfo* generated_game);
#endif