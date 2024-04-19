//
// Created by THAICHU on 4/19/2024.
//
#include <stdio.h>
int babai1(){
//int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Cac so chan tu 1 den %d la: ", n);
    for (int i=2;i<=n;i++){
        if(i%2==0)
            printf(" %d ",i);
    }

}