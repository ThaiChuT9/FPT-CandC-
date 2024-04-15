//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int donvi(){
//int main(){
    int tab;
    float result,n;
    printf("Nhap do dai (m): ");
    scanf("%f",&n);
    printf("\n1.mm\n2.cm\n3.dm\n4.km\n");
    printf("Chon don vi can doi: ");
    scanf("%d", &tab);
    switch (tab) {
        case 1:
            result = n * 1000;
            printf("(m) sang (mm) la: %.2f", result);
            break;
        case 2:
            result = n * 100;
            printf("(m) sang (cm) la: %.2f", result);
            break;
        case 3:
            result = n * 10;
            printf("(m) sang (dm) la: %.2f", result);
            break;
        case 4:
            result = n / 1000;
            printf("(m) sang (km) la: %.2f", result);
            break;
        default:
            printf("Khong hop le");
    }
    return 0;
}