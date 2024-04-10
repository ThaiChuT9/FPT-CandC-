//
// Created by THAICHU on 4/10/2024.
// write a  program to accept 2 numbers. Calculate the different between the two numbers.
// if the differece is equal to any of the values entered, then display the following message:
// Difference is equal to value <number of value entered>
//if the difference is not equal to any of the values entered, then display the following message:
// Difference is not equal to any value entered

#include <stdio.h>
#include <stdlib.h>
int diff(){
//int main(){
    int a,b,diff;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    diff = a - b;
    if(a<b){
        diff = abs(diff);
    }
    printf("Difference is %d\n", diff);
    if(diff == a){
        printf("Difference is equal to value %d", a);
    } else if(diff == b){
        printf("Difference is equal to value %d", b);
    } else{
        printf("Difference is not equal to any value entered");
    }
    return 0;
}
