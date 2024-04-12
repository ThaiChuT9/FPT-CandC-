//
// Created by THAICHU on 4/12/2024.
// Write a C program to find the minimum and maximum element in an array.

#include <stdio.h>
int minmax(){
//int main(){
    int arr[10];
    int min,max,n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter elements %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nMinimum element: %d", min);
    printf("\nMaximum element: %d", max);
    return 0;
}
