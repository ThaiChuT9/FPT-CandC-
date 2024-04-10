//
// Created by THAICHU on 4/9/2024.
// Write a program which will take input as a floating (real) number. This number represent the centimeters.
// Print out the equivalent number of feet(floating, 1, demical) and inches(floating, 1, demical).
// With feet and the inches given to an accuracy of on demical place.

#include <stdio.h>
int Float_main(){
//int main(){
    float cm, inch, feet;
    printf("Enter the length in centimeters: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    feet = inch / 12;
    printf("The length in feet is %.1f \nand the length in inches is %.1f", feet, inch);
    return 0;
}