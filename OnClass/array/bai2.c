//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int babbabbi2(){
//int main(){
    int arr1[5],n;
    float arr2[10] ={0};
    printf("Nhap chuoi mang 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf(" %d",&arr1[i]);
        arr2[i] = (float) arr1[i];
    }
    printf("Mang 2: \n");
    for (int i = 0; i < 10; ++i) {
        printf(" %.2f", arr2[i]);
    }
    return 0;
}