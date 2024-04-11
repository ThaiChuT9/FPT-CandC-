//
// Created by THAICHU on 4/11/2024.
// Find the factorial of a number

#include <stdio.h>
int factorial(){
//int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d!= ",n);
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        if (i != n) {
            printf("%d*", i);
        } else{
            printf("%d", i);
        }
    }
    printf(" =%d",factorial);
}
