//
// Created by THAICHU on 4/10/2024.
//
#include <stdio.h>
//int cc(){
int main(){
//    Nhập tên người dùng
    char name[100];
    printf("Nhập tên của bạn: ");
    scanf("%s[^/n]",name);
//    Nhập số giờ làm việc
    float hoursWorked;
    printf("Nhap so gio lam viec: ");
    scanf("%f", &hoursWorked);
//    Nhập giá mỗi giờ
    float hourlyRate;
    printf("Nhap gia moi gio: ");
    scanf("%f", &hourlyRate);
//    Tính tổng tiền lương
    float totalPayment = hoursWorked * hourlyRate;
//    Áp dụng thuế
    float tax = 0.1 * totalPayment;
    float netPayment = totalPayment - tax;

    printf("\nCam on ban da sd dich vu cnua chung toi.\nSau day se la so tien luong ban nhan duoc: \n", name);
    printf("-----------------------------------\n");
    printf("Tong tien luong truoc thue: $%.2f\n", totalPayment);
    printf("So tien thue (10%%): $%.2f", tax);
    printf("Tong tien luong sau thue: $%.2f",netPayment);
    return 0;
}