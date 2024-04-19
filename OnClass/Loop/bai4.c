//
// Created by THAICHU on 4/19/2024.
//
#include "stdio.h"
int babai4(){
//int main(){
    char a;
    printf("Nhap chu cai hoac so hoac ky tu dac biet: ");
    while ((a = getchar()) != ' ' && (a = getchar()) != '\n'){
        fflush(stdin);
        if (a>='a' && a<='z' || a>='A' && a<='Z'){
            printf("Chu cai %c la chu cai \n",a);
        } else if (a>='0' && a<='9'){
            printf("Chu so %c la chu so \n", a);
        } else {
            printf("Ky tu %c la ki tu dac biet \n", a);
        }
        printf("Nhap vao mot chuoi: ");
    }
    return 0;
}