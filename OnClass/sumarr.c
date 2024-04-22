//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int sumca(){
//int main(){
    int arr[10], n, sum;
    printf("\nNhap gia tri mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Nhap gia tri %d: ",i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang la: %d", sum);
    return 0;
}