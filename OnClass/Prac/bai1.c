//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int bai1(){
//int main(){
    char s,a;
    printf("Nhap mot ki tu: ");
    scanf("%c", &s);
    fflush(stdin);
    printf("Nhap mot ki tu: ");
    a = getchar();
    printf("Ma ASCII cua ki tu cua %c va %c la: %d va %d", s, a, s, a);
    return 0;

}