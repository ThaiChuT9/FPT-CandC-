//
// Created by THAICHU on 4/10/2024.
// Declare two variables x and y. Assign values these variables. Number x should be printed only if it less than 2000 or greater than 3000, and number y should be printed only if it between 100 and 500.

#include <stdio.h>
int vvv(){
//int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d", &y);
    if (x < 2000 || x > 3000)
        printf("x = %d\n", x);
    if (y >= 100 && y <= 500)
        printf("y = %d\n", y);
    return 0;

}
