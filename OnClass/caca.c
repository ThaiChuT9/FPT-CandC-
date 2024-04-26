//
// Created by THAICHU on 4/26/2024.
//
#include <stdio.h>

int operation(int a, int b, int op) {
    int result = 0;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case 'x':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid operation");
            break;
    }
    return result;
}
int opop()
//int main()
{
    int a, b;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operation (+, -, x, /): ");
    scanf(" %c", &op);
    int result = operation(a, b, op);
    printf("%d %c %d = %d", a, op, b, result);
    return 0;
}