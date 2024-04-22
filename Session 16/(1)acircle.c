//
// Created by THAICHU on 4/22/2024.
// Write a C program to find the area and the perimeter of a circle.
#include <stdio.h>
int circlece(int r){
    int area = 3.14 * r * r;
    int perimeter = 2 * 3.14 * r;
    printf("Area of circle: %d\n", area);
    printf("Perimeter of circle: %d\n", perimeter);
}
int cici(){
//int main(){
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    circlece(r);
    return 0;
}
