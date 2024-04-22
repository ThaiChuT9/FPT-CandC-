//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int tangdan(){
//int main(){
    int n, temp = 0;
    int x[100];
    printf("nhap day so: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("nhap so %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("Day so tang dan la: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", x[i]);
    }
    return 0;
}