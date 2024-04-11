//
// Created by THAICHU on 4/11/2024.
// Accept two numbers num 1 and num2. Find the sum of all odd numbers between numbers entered.
#include <stdio.h>
int oddy(){
//int main(){
    int num1, num2, i;
    int sum = 0;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Odd numbers between %d and %d are: ", num1, num2);
    for (i = num1; i<=num2;i++){
        if (i%2 != 0){
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\nTotalOdd = %d", sum);
    return 0;
}
