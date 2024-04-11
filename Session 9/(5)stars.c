//
// Created by THAICHU on 4/11/2024.
// Write a program to print the following pattern:
//
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
//
#include <stdio.h>
int star(){
//int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <=n-i; ++j) {
            printf("*");
        }
//        for (int k = 0; k <=2*n-2*i ; ++k) {
//            printf("*");
//        }
        printf("\n");
    }
}
