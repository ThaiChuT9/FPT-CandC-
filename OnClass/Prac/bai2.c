//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int bai2(){
//int main(){
    char s;
    int n;
    printf("Nhap vao mot chu cai trong bang Alphabet<A-Z, a-z>: ");
    scanf("%c",&s);
    if (s >= 'A' && s <= 'Z'){
        printf("Chu %c la chu hoa!\n",s);
    } else if (s >= 'a' && s <= 'z'){
        printf("Chu %c la chu thuong!\n",s);
    } else if (s >= '0' && s <= '9'){
        printf("Ki tu %c la chu so!\n",s);
    } else {
        printf("Ki tu %c khong phai la chu cai trong bang Alphabet va khong phai chu so!\n",s);
    }
}