//
// Created by THAICHU on 4/9/2024.
// 1. Use the printf() statement and do the following:
// a. Print out the value of the integer variable sum.
// b. Print out the text string "Welcome", followed by the new line.
// c. Print out the character variable letter.
// d. Print out the float variable discount.
// e. Print out the float variable dump using two demical places.
// 2. Use the scanf() statement and do the following:
// a. To read the demical value from keyboard, into integer variable sum.
// b. To read a float variable discount_rate.

#include <stdio.h>

void main(){
    int sum = 1000;
    float a=1.33, b= 2.12;
    char letter = 'A';
    float discount = 0.09;
    printf("Welcome\n");
    printf("letter: %c\n",letter);
    printf("discount= %.2f\n", discount);
    printf("sum= %d\n", sum);
    printf("a= %.2f, b= %.2f", a, b);
    printf("\n");
    float x;
    float y;
    int sumy;
    printf("Enter a 1st number: ");
    scanf("%f", &x);
    printf("Enter a 2nd number: ");
    scanf("%f", &y);
    sumy = x + y;
    printf("Sum of two numbers is %d", sumy);
    printf("\n");
    float rate, discount_rate;
    printf("Enter a discount rate: ");
    scanf("%f", &rate);
    discount_rate = 1 - rate;
    printf("Discount rate is %.2f", discount_rate);
}