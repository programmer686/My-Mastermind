# CFLAGS = -Wall -Wextra -Werror
# TARGET = my_mastermind

# all: my_mastermind

# my_mastermind: my_mastermind.c game_start.o randomNum.o game_play.o play_analyzed.o check_user_guess.o if_win_or_lose.o is_exact_placed.o is_misplaced.o 
# 	gcc $(CFLAGS) -o $(TARGET) my_mastermind.c game_start.o randomNum.o game_play.o play_analyzed.o check_user_guess.o if_win_or_lose.o is_exact_placed.o is_misplaced.o

# randomNum.o: randomNum.c 
# 	gcc $(CFLAGS) -c randomNum.c

# game_start.o: game_start.c game_play.o
# 	gcc $(CFLAGS) -c game_start.c 

# game_play.o: game_play.c play_analyzed.o check_user_guess.o
# 	gcc $(CFLAGS) -c game_play.c


# play_analyzed.o: play_analyzed.c 
# 	gcc $(CFLAGS) -c play_analyzed.c

# if_win_or_lose.o: if_win_or_lose.c 
# 	gcc $(CFLAGS) -c if_win_or_lose.c

# check_user_guess.o: check_user_guess.c 
# 	gcc $(CFLAGS) -c check_user_guess.c 

# is_exact_placed.o: is_exact_placed.c 
# 	gcc $(CFLAGS) -c is_exact_placed.c

# is_misplaced.o: is_misplaced.c 
# 	gcc $(CFLAGS) -c is_misplaced.c

# clean:
# 	rm -f *.o $(TARGET)

# fclean: clean

# re: fclean all