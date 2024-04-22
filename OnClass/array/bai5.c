//
// Created by THAICHU on 4/22/2024.
//
#include "stdio.h"

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int bababi5() {
//int main(){
    int n, arr[5];
    int min = 0, max = 0, temp = 0;
    printf("Nhap 5 so nguyen to \n");
    for (int i = 0; i < 5; ++i) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &n);
        if (!isPrime(n)) {
            printf("So %d khong phai so nguyen to, xin nhap lai\n", n);
            i--;
        }
        arr[i] = n;
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (i == 0 || arr[i] > max) {
            max = arr[i];
        }
        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Cac so nguyen to la: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nSo lon nhat la: %d", max);
    printf("\nSo nho nhat la: %d", min);
    return 0;
}
