//
// Created by THAICHU on 5/3/2024.
//
#include <stdio.h>
void boi50(int num1, int num2){
    for (int num=num1; num < num2; ++num) {
        if (num % 50 == 0){
            printf("%d\t",num);
        }
    }
}
void boi50(int num1, int num2);
int bbb3(){
//int main(){
    int num1, num2;
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    if (num1<num2){
        printf("So co boi 50 trong khoang tu %d den %d la:\n", num1, num2);
        boi50(num1, num2);
    } else {
        printf("So co boi 50 trong khoang tu %d den %d la:\n", num2, num1);
        boi50(num2, num1);
    }
    return 0;
}