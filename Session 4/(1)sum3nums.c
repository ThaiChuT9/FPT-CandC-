//
// Created by THAICHU on 4/8/2024.
//  Write a program to accept and add three numbers.
//
#include <stdio.h>

int sum3num_main(){
//int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Sum of three numbers: %d", a + b + c);
    return 0;
}