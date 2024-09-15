#include <cs50.h>
#include <stdio.h>

int main(void) {
  FILE *file = fopen("filetest.txt", "a");

  char *name = get_string("name: ");
  char *number = get_string("number: ");

  fprintf(file, "%s,%s\n", name, number);

  fclose(file);
}
