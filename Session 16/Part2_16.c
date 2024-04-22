//
// Created by THAICHU on 4/22/2024.
// Write a C program that accepts a number and square the number.
#include <stdio.h>
#include <math.h>
int square(int a){
    return pow(a,2);
}
int part16(){
//int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square of %d is %d", a, square(a));
    return 0;
}
