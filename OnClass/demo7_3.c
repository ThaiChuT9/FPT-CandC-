//
// Created by THAICHU on 4/12/2024.
//
#include <stdio.h>
int bmi(){
//int main() {
    float weight, height;
    printf("Nhap can nang(kg): ");
    scanf("%f", &weight);
    printf("Nhap chieu cao(cm): ");
    scanf("%f", &height);
    height = height/100;
    float bmi = weight / (height * height);
    printf("BMI cua ban la: %.2f", bmi);
    if (bmi < 18.5) {
        printf("\nBan gay");
    } else if (bmi < 24.9) {
        printf("\nBan binh thuong");
    } else if (bmi < 39.9) {
        printf("\nBan thua can");
    } else {
        printf("\nBan beo phi");
    }
    return 0;
}