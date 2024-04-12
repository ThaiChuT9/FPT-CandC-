//
// Created by THAICHU on 4/12/2024.
//
#include <stdio.h>
int ex411(){
//int main(){
    char a[100];
    int i;
    printf("Nhap chuoi: ");
    gets(a);
    printf("Chuoi vua nhap la: %s\n",a);
    for (i = 0; i < 5; ++i) {
        printf("%d\t", a[i]);
    }
}