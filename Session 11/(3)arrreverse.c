﻿//
// Created by THAICHU on 4/12/2024.
// Write a program that accepts numbers in an array and reverses the array

#include <stdio.h>
int reverr(){
//int main(){
    int arr[]={34,45,56,67,89};
    int n= sizeof(arr)/sizeof(arr[0]);

    printf("\nThe original array is: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\nThe reversed array is: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}