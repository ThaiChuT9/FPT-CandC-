//
// Created by THAICHU on 5/3/2024.
//
#include "stdio.h"
float chuVi(float chieudai, float chieurong){
    return (chieudai + chieurong) * 2;
}
float dienTich(float chieudai, float chieurong){
    return chieurong * chieudai;
}
int bbb1(){
//int main(){
    float chieudai,chieurong;
    printf("Nhap chieu dai: ");
    scanf("%f",&chieudai);
    fflush(stdin);
    printf("Nhap chieu rong: ");
    scanf("%f",&chieurong);
    printf("\n----------------------\n");
    float tinhchuVi = chuVi(chieudai, chieurong);
    float tinhdienTich = dienTich(chieudai, chieurong);
    printf("Chu vi: %.2f", tinhchuVi);
    printf("\nDien tich: %.2f",tinhdienTich);
    return 0;

}