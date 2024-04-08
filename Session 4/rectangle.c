//
// Created by THAICHU on 4/8/2024.
//  Write a program to evaluate the area and perimeter of a rectangle.

#include <stdio.h>
int rectangle_main(){
//int main() {
    float width, height, area, perimeter;
    printf("Enter the width: ");
    scanf("%f", &width);
    printf("Enter the height: ");
    scanf("%f", &height);
    area = width * height;
    perimeter = 2 * (width + height);
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    return 0;
}