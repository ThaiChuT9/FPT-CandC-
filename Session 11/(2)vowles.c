    //
// Created by THAICHU on 4/12/2024.
// Write a program to count the number of vowels in a line of text.
#include <stdio.h>
#include <string.h>
int vowels(){
//int main(){
    char x[100];
    int count = 0,n=0,i;
    printf("Enter a string: ");
    scanf("%[^\n]s", x);
    n = strlen(x);
    char vowels[] = "aeiouAEIOU";
    for (i = 0; i < n; i++) {
        if (strchr(vowels, x[i]))
//        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' ||
//            x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
            count++;
    }
    printf("Number of vowels: %d", count);
    return 0;
}