﻿//
// Created by THAICHU on 4/11/2024.
//
#include <stdio.h>
int mil(){
//int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <i ; ++j) {
            printf("%2d",j);
        }
        printf("\n");
    }
    return 0;
}