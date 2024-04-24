//
// Created by THAICHU on 4/24/2024.
//
#include <stdio.h>
int babaii7(){
//int main(){
    char c[10];
    int i;
    printf("Nhap ky toi da 10 ky tu\n");
    for (i = 0; i < 10; ++i) {
        printf("Nhap ky tu thu %d:",i+1);
        scanf("%c", &c[i]);
        fflush(stdin);
        if (c[i] == '\n'){
            break;
        }
    }
    printf("Ky tu vua nhap la: \n");
    for (int j = 0; j < i; ++j) {
        printf("%c %d\n", c[j],c[j]);
    }
}