//
// Created by THAICHU on 4/10/2024.
// Write a program that accepts two numbers a and b and tell whether a is divisible by b.

#include <stdio.h>
int div(){
//int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
        do{

            printf("Enter b: ");
            scanf("%d", &b);
            if(b == 0){
                printf("Cannot divided by 0, type again.3\n");
            }
        } while (b == 0);
        if(a % b == 0){
            printf("a is divisible by b");
        } else {
            printf("a is not divisible by b");
        }
    }
