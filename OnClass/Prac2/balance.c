//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
int balance(){
//int main(){
    int pin =1234;
    int balance = 10000;
    int maxAttempts = 3;
    int option;
    int enterPin, withdrawAmount;
    printf("Chao mung den voi ATM!\n");
    int attempts = 0;
    while (attempts < maxAttempts) {
        printf("Nhap ma pin: ");
        scanf("%d", &enterPin);
        if (enterPin == pin) {
            printf("Chuc mung ban da dang nhap thanh cong!\n");
            break;
        } else {
            printf("Ma pin khong dung. Vui long thu lai!\n");
            attempts++;
        }
    }
    if (attempts == maxAttempts) {
        printf("Qua so lan nhap ma pin. ATM da dong!\n");
        return 1;
    }
    while(1){
        printf("\n Nhap lua chon cua ban:\n");
        printf("1. Kiem tra so du\n");
        printf("2. Rut tien\n");
        printf("3. Thoat\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("So du cua ban la: %d\n", balance);
                break;
            case 2:
                printf("Nhap so tien can rut: ");
                scanf("%d", &withdrawAmount);
                if (withdrawAmount > balance) {
                    printf("So du cua ban khong du de rut tien!\n");
                } else {
                    balance -= withdrawAmount;
                    printf("Rut %d VND thanh cong!\n", withdrawAmount);
                    printf("So du cua ban sau khi rut tien la: %d\n", balance);
                }
                break;
            case 3:
                printf("Cam on ban da su dung dich vu ATM!\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    }
    return 0;
}