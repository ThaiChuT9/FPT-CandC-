//
// Created by THAICHU on 5/6/2024.
//

#include <stdio.h>
#include <limits.h>
int isMin(int arr[], int n) {
    int min = INT_MAX;
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > 0 && arr[i] < min) {
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
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int min = isMin(arr, n);
    if (min != INT_MAX) {
        printf("Gia tri nho nhat trong mang la: %d\n", min);
    } else {
        printf("Khong co gia tri nho nhat trong mang.\n");
    }
    return 0;
}