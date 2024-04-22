//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int factoriala(int n){
    if(n==0) return 1;
    return n*factoriala(n-1);
}
int facfac(){
//int main() {
    int n;
    printf("Nhap n: ");
    scanf(" %d", &n);
    printf("Giai thua cua %d la %d", n, factoriala(n));
    return 0;
}
