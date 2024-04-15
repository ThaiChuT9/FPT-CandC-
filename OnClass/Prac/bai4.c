//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int vowelscount(){
//int main(){
    char s;
    do{
        printf("nhap vao ki tu: ");
        scanf(" %c", &s);
        if (!isalpha(s)){
            printf("Ki tu %c vua nhap khong phai la chu cai trong bang Alphabet",s);
        }
    } while (!isalpha(s));
    char vowels[]= "aeiouAEIOU";
    if(strchr(vowels,s) != NULL){
        printf("Ki tu %c la nguyen am", s);
    } else {
        printf("Ki tu %c la phu am", s);
    }
    return 0;
}