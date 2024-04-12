//
// Created by THAICHU on 4/12/2024.
//
#include <stdio.h>
int chary(){
//int main(){
    char a[100];
    int i, j;
    for(i=65,j=0;i<91; i++,j++){
        a[j]=i;
        printf("The character now assigned is %c \n", a[j]);
    }
    return 0;
}