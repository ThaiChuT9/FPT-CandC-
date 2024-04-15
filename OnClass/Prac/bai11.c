//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int menuctnc(){
//int main(){
    int tab;
    float a, b;
    printf("Nhap so dau tien: ");
    scanf("%f",&a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    printf("\tMENU");
    printf("\n=====================");
    printf("\n1. Cong");
    printf("\n2. Tru");
    printf("\n3. Nhan");
    printf("\n4. Chia");
    printf("\n=====================");
    printf("\nNhap lua chon: ");
    scanf("%d", &tab);
    switch (tab) {
        case 1:
            printf("Ket qua cong: %.f", a + b);
            break;
        case 2:
            printf("Ket qua tru: %.f", a - b);
            break;
        case 3:
            printf("Ket qua nhan: %.f", a * b);
            break;
        case 4:
            printf("Ket qua chia la: %.2f", a/b);
            break;
        default:
            printf("Lua chon khong hop le");
    }
    return 0;
}