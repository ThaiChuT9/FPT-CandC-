//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int nai7(){
//int main(){
    int num1,num2;
    printf("Nhap so thu nhat: ");
    scanf("%d",&num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if(num1%num2==0 || num2%num1==0){
        printf("Hai so %d va %d la uoc cua nhau", num1, num2);
    } else
        printf("Hai so %d va %d khong phai la uoc cua nhau", num1,num2);
    return 0;
}