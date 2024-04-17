//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
void ss(){
//void main(){
    int i,j, max;
    printf("Please enter the maximum value \n");
    printf("for which a table can be printed: ");
    scanf("%d", &max);
    for(i = 1; i <= max; i++){
        for(j = 1; j <= 10; j++){
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
}