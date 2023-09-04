int is_exact_placed(char secret_code, int secret_code_index, char user_guess, int user_guess_index) {
    if (secret_code == user_guess
        &&
        secret_code_index == user_guess_index) {
                    return 1;
        }
    
    return 0;
}