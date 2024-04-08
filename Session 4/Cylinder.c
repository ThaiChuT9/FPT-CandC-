//
// Created by THAICHU on 4/8/2024.
// Write a program to evaluate the volume of a cylinder.

#include <stdio.h>
#include <math.h>

int cylinder(){
//int main() {
    float radius, height, volume;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Enter the height: ");
    scanf("%f", &height);
    volume = M_PI * pow(radius,2) * height;
    printf("The volume of the cylinder is: %.2f\n", volume);
    return 0;
}
