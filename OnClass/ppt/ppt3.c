//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
void ppt2(){
//void main(){
    int i,j,k;
    i=0;
    printf("Enter no. of row : ");
    scanf("%d",&i);
    printf("\n");
    for (j = 0;j < i; j++){
        printf("\n");
        for (k = 0; k < j; ++k) {
            printf("*");
        }
    }
}