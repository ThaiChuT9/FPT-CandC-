//
// Created by THAICHU on 4/10/2024.
// Write a program to accept 2 numbers and tell whether the product of the 2 numbers equal to or greater than 1000.

#include <stdio.h>
int tich(){
//int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);
    if(a*b>=1000){
        printf("Product of a and b is equal or greater than 1000");
    } else {
        printf("Product of a and b is less than 1000");
    }
    return 0;
}