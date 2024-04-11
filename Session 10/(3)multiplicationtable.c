//
// Created by THAICHU on 4/11/2024.
// Write a program to print a multiplication table for a given number.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d: \n",n);
    for(int i = 0; i <= n; ++i) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
