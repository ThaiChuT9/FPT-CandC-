//
// Created by THAICHU on 4/9/2024.
// Find the iResult for the following assignment statment:
// int iResult, a = 10, b = 8, c = 6, d = 5, e = -2;
// iResult = a - b - c - d;
// iResult = a - b + c - d;
// iResult = a + b /c / d;
// iResult = a + b / c * d;
// iResult = a / b * c * d;
// iResult = a % b / c * d;
// iResult = a % b % c % d;
// iResult = a - (b - c) - d;
// iResult = (a - (b - c)) - d;
// iResult = a - ( (b - c) - d);
// iResult = a % (b % c) * d * e;
// iResult = a + (b - c) - e;
// iResult = (a + b) * c + d * e;
// iResult = (a + b) * (c / d) % e;

#include <stdio.h>
int jj(){
//int main() {
    int iResult, a = 10, b = 8, c = 6, d = 5, e = -2;
    iResult = a - b - c - d;
    printf("iResult1 = %d\n", iResult);
    iResult = a - b + c - d;
    printf("iResult2 = %d\n", iResult);
    iResult -= a + b / c / d;
    printf("iResult3 = %d\n", iResult);
    iResult = a + b / c * d;
    printf("iResult4 = %d\n", iResult);
    iResult = a / b * c * d;
    printf("iResult5 = %d\n", iResult);
    iResult = a % b / c * d;
    printf("iResult6 = %d\n", iResult);
    iResult = a % b % c % d;
    printf("iResult7 = %d\n", iResult);
    iResult = a - (b - c) - d;
    printf("iResult8 = %d\n", iResult);
    iResult = (a - (b - c)) - d;
    printf("iResult9 = %d\n", iResult);
    iResult = a - ( (b - c) - d);
    printf("iResult10 = %d\n", iResult);
    iResult = a % (b % c) * d * e;
    printf("iResult11 = %d\n", iResult);
    iResult = a + (b - c) - e;
    printf("iResult12 = %d\n", iResult);
    iResult = (a + b) * c + d * e;
    printf("iResult13 = %d\n", iResult);
    iResult = (a + b) * (c / d) % e;
    printf("iResult14 = %d\n", iResult);
    return 0;
}