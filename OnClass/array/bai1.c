//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int bababi1(){
//int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i+=2) {
        printf(" %d ", i);
    }
    return 0;
}