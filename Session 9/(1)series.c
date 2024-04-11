//
// Created by THAICHU on 4/11/2024.
// Write a program to print the series 100, 95, 90, ..., 5.

#include <stdio.h>
int ser(){
//int main(){
    int i;
    for(i=100;i>=5;i=i-5){
        if (i==5){
            printf("%d.", i);
        } else {
            printf("%d,",i);
        }
    }
    return 0;
}
