//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int bababi3(){
//int main() {
    int min, max, arr[10], n, countmin = 0, countmax = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i + 1);
        scanf(" %d", &arr[i]);
        if (i == 0 || arr[i] < min) min = arr[i];
        if (i == 0 || arr[i] > max) max = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) countmin++;
        if (arr[i] == max) countmax++;
    }
    printf("The minimum element is %d\n", min);
    printf("The number of occurrences of the minimum element is %d\n", countmin);
    printf("The maximum element is %d\n", max);
    printf("The number of occurrences of the maximum element is %d\n", countmax);
    return 0;
}