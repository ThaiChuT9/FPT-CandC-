//
// Created by THAICHU on 4/10/2024.
//
#include <stdio.h>
void ul(){
//void main(){
    char c;
    printf("Nhap di: ");
    scanf("%c",&c);
    if(c>='A'&&c<='Z'){
        printf("%c",c + 'a' - 'A');
    }
}