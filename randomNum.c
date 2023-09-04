#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char* randomNum() {
  char getting_secret_code[4];
  int i = 0;
  srand(time(0));

  while (i < 4) {
      int found = 0;
      int rand_num = rand() % (9);
      for (int j = 0; j < 4; j++) {
          if (getting_secret_code[j] == rand_num) {
              found = 1;
              break;
          }
      }
      if (!found) {
          getting_secret_code[i] = (char)rand_num;
          i++;
      }
    }
    char* secret_code = malloc(5 *sizeof(char));
    sprintf(secret_code, "%d%d%d%d", getting_secret_code[0], getting_secret_code[1], getting_secret_code[2], getting_secret_code[3]);
    return secret_code;
}