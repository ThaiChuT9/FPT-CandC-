//
// Created by THAICHU on 4/19/2024.
//
#include <stdio.h>
void concatenate(const char *s1, const char *s2, char *result){
    while (*s1)
        *result++ = *s1++;
    while (*s2)
        *result++ = *s2++;
    *result = '\0';
}
int concatenate1(){
//int main(){
    char s1[100], s2[100], result[200];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    concatenate(s1, s2, result);
    printf("Concatenated string: %s", result);
    return 0;
}