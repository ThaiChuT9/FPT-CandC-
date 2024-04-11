//
// Created by THAICHU on 4/11/2024.
// Declare a variable which has the age of the person. Print the user's name as many times as his age.

#include <stdio.h>
int decl(){
//int main(){
    char name[20];
    int age;
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Happy birthday mate, take your gift: \n");
    for (int i = 1; i <= age; ++i) {
        printf("%s\t", name);
    }
}
