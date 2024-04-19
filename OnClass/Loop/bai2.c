//
// Created by THAICHU on 4/19/2024.
//
#include "stdio.h"
int babai2(){
//int main(){
    int number, sum, re;
    printf("Enter a number: ");
    scanf("%d", &number);
    sum = 0;
    for(;number >0; number/=10){
        re = number % 10;
        sum += re;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}