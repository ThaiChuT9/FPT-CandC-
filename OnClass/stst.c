//
// Created by THAICHU on 4/26/2024.
//
#include <stdio.h>

int square1(int n) {
    for (int i = 0; i < n; ++i) {
        printf("*");
    }
    printf("\n");
    return 0;
}

int triangle1(int n) {
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Hinh vuong: \n");
    for (int i = 0; i < n; ++i) {
        square1(n);
    }
    printf("Hinh tam giac: \n");
    triangle1(n);
    return 0;
}
