#include <stdio.h>

typedef char *string;

int main(void) {
  char *s = "test";
  printf("%c", *s);
  printf("%c", *(s + 1));
  printf("%c", *(s + 2));
  printf("%c\n", *(s + 3));
}
