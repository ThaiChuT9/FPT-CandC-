//
// Created by THAICHU on 4/11/2024.
// Generate the Fibonacci series.
#include <stdio.h>
int Fibonacci(){
//int main() {
    int a=0, b=1, nextNum, n;
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
//    f(n) = f(n-1) + f(n-2)
//    f(0) = 0, f(1) = 1
//    a = f(n-1), b = f(n-2)
//    a = b, b = f(n-1) + f(n-2)
//    a = b, b = a + b
    for (int i = 0; i < n; i++){
        printf("%d ", a);
        nextNum = a + b;
        a = b;
        b = nextNum;
    }
}