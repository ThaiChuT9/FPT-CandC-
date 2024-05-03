//
// Created by THAICHU on 5/3/2024.
//
#include <stdio.h>
float accountant(int quantity, float price){
    float total, tax;
    total = price * quantity;
    tax = total * 0.1;
    if(total >= 100){
        if(total >= 200){
            total += (total * 5 /100);
        } else
            total += (total * 2 / 100);
    } else
        total += 0 ;
    return total + tax;
}
int bbb2(){
//int main(){
    float price;
    int quantity;
    char hh[100];
    printf("Nhap ten hang hoa: ");
    scanf(" %[^\n]s",hh);
    printf("Nhap gia tien: ");
    scanf(" %f",&price);
    printf("Nhap so luong: ");
    scanf(" %d",&quantity);
    float tong = accountant(quantity, price);
    printf("\nTong tien: %.2f", tong);
    return 0;
}