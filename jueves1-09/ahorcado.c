// el juego del ahorcado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *random_word(){
  srand(time(NULL));
  char *wordlist[] = {
    "asd",
    "lombardi",
    "cavalcanti",
    "perro",
    "gato"
  };
  return wordlist[rand() % 5];
}

int count_chars(char *s){
  int length = 0;
  while (s[length] != 0) length++;
  return length;
}

void print_game(int length, int misses){
  char *middle[] = {

  }
  printf(" _______\n");
  printf(" |      |\n");
  printf("%s", misses > 0 ? " |      0\n" : " |        \n");
  printf("%s", middle[misses]);
  printf("%s", bottom[misses]);
  printf("  |n");
  printf("  |\n");
  printf("  |\n");
  printf("  |\n");
  printf("__|__\n");

  printf("\n");
  for (int i = 0; i < length; i++);
  printf(" _ ");
  printf("\n\n");
}

void play(){
  int misses = 0;
  while (misses < 6)
  print_game(length,misses);
}

int main (void) {
  char *correct_word = random_word();
  int length = count_chars(correct_word);
  printf("palabra: %s long %d\n", correct_word, length);
  print_game(length, atoi(argv[1]));
  return 0;
}
