#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  string name;
  string number;
} person;

int main(void) {

  person people[3];

  people[0].name = "joao";
  people[0].number = "044 991561612";

  people[1].name = "rafael";
  people[1].number = "044 991561613";

  people[2].name = "mateus";
  people[2].number = "044 991561613";

  string name = get_string("name: ");

  int people_size = sizeof(people) / sizeof(people[0]);

  for (int i = 0; i < people_size; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("phone number: %s\n", people[i].number);
      return 0;
    }
  }
  printf("not found\n");
  return 1;
}
