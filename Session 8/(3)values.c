//
// Created by THAICHU on 4/10/2024.
// Accept values in three variables and print the highest value.
#include <stdio.h>
int max(){
//int main(){
    int a, b, c;
    printf("Enter 1ts number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if(a>b && a>c){
        printf("The highest value is %d", a);
    } else if(b>c){
        printf("The highest value is %d", b);
    } else {
        printf("The highest value is %d", c);
    }
}