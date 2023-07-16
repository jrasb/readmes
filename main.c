#include <stdio.h>
#include <stdbool.h>

typedef struct Person{
    char name[25];
    int age;
} Person;

int main() {
    Person Jrasb = {"Jrasb", 20};

    printf("NAME: %s\nAGE: %d\n", Jrasb.name, Jrasb.age);

    return 0;
}
