//
// Created by THAICHU on 4/17/2024.
// Write a program using pointers to string that accepts the name of an animal and a bird and returns the name in Pluralize.
#include <stdio.h>
#include <string.h>

void Pluralize(char *name) {
    if (name[strlen(name) - 1] == 'y' || name[strlen(name) - 1] == 'x' || name[strlen(name) - 2] == 'c' && name[strlen(name) - 1] == 'h' || name[strlen(name) - 1] == 's') {
        if (name[strlen(name) - 1] == 'y') {
            name[strlen(name) - 1] = 'i';
        }
        strcat(name, "es");
    } else {
        strcat(name, "s");
    }
}

int Plural() {
//int main() {
    char animal[100];
    char bird[100];
    printf("Enter an animal: ");
    gets(animal);
    printf("Enter a bird: ");
    gets(bird);
    Pluralize(animal);
    Pluralize(bird);
    printf("The Plural of %s is %s\n", animal, animal);
    printf("The Plural of %s is %s\n", bird, bird);
    return 0;
}