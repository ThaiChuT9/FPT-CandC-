//
// Created by THAICHU on 4/17/2024.
//
#include "stdio.h"
void ppt5(){
//void main(){
    int num1, num2;
    num2 = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num1);
        printf("No. is %d \n", num1);
        num2++;
    } while (num1 != 0);
    printf("The total numbers entered were %d", --num2);

}