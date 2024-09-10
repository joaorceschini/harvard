#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  string strings[] = {"teste", "cat", "cast", "dog", "pato", "aba cadabra"};

  string s = get_string("string: ");

  for (int i = 0; i < 6; i++) {
    if (strcmp(strings[i], s) == 0) {
      printf("found\nstring[i]: %s\ns: %s\n", strings[i], s);
      return 0;
    }
  }
  printf("not found\n");
  return 1;
}
