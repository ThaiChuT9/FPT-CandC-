//
// Created by THAICHU on 4/19/2024.
//
#include <stdio.h>
int babai3(){
//int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n){
        int j =1;
        while (j <= i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}