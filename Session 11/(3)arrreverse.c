//
// Created by THAICHU on 4/12/2024.
// Write a program that accepts numbers in an array and reverses the array

#include <stdio.h>
#include <string.h>
int reverr(){
//int main(){
    int arr[10];
    int n=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The original array is: ");
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\nThe reversed array is: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}