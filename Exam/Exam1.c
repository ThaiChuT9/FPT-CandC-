//
// Created by THAICHU on 5/6/2024.
//

#include <stdio.h>

int isMin(int arr[], int n) {
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int exam1(){
//int main() {
    int arr[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nGia tri nho nhat trong mang la: %d", isMin(arr, n));
    return 0;
}