//
// Created by THAICHU on 4/19/2024.
//
#include <stdio.h>
#include <ctype.h>
int babai6(){
//int main(){
    int a;
    char c;
    do {
        printf("Nhap bang cuu chuong: ");
        scanf(" %d",&a);
        for (int i = 1; i <= 10; ++i) {
            printf("%d x %d = %d\n", a, i, a * i);
        }
        printf("ban co muon tiep tuc khong?(y/n):");
        scanf(" %c", &c);
        c = tolower(c);
    }while (c == 'y');
}