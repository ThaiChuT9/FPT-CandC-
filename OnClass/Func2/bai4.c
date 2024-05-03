//
// Created by THAICHU on 5/3/2024.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int findMin(int arr[], int n)
{
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
int findMax(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int main(){
    int arr[100];
    int n;
    printf("Ban muon bao nhieu so: ");
    scanf("%d",&n);
    srand(time(NULL));
    printf("Mang vua tao la: \n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("a[%d] = %d  ", i+1, arr[i]);
    }
    int min = findMin(arr, n);
    int max = findMax(arr, n);
    printf("\nGia tri nho nhat trong mang la: %d", min);
    printf("\nGia tri lon nhat trong mang la: %d", max);
    return 0;
}