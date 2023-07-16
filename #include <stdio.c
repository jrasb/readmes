#include <stdio.h>

struct {
    char name[25];
    int age;
} Person;

int main() {
    struct Person Jrasb = {"Jrasb", 20};

    printf("NAME: %s\nAGE: %d", Jrasb.name, Jrasb.age);

    return 0;
}