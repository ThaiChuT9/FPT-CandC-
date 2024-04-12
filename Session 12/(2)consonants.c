//
// Created by THAICHU on 4/12/2024.
// Write a C program to count the number of vowels and the number of consonants in a string.

#include <stdio.h>
#include <string.h>
int consonants(){
//int main(){
    int  vowels = 0, consonants=0;
    char str[100];
    printf("\nEnter a string: ");
    gets(str);
    int n = strlen(str);
    char vowels_list[] = "aeiouAEIOU";
    for(int i=0;i<n;i++){
        if(strchr(vowels_list,str[i])){
            vowels++;
        } else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') {
            consonants++;
        }
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}
