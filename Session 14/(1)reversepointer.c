//
// Created by THAICHU on 4/19/2024.
// Write a program to reverse a character using pointers.
#include <stdio.h>
#include <string.h>
void reverse(char *str) {
    int len = strlen(str);
    char *end = str + len - 1;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}
int reevers(){
//int main() {
    char str[100];
    printf("\nEnter a string: ");
    scanf(" %[^\n]s", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}