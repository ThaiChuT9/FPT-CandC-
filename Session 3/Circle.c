#include <stdio.h>
#include <math.h>

int circle(){
//    int main(){
    float radius, area, perimeter;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = M_PI * pow(radius, 2);
    perimeter = 2 * 3.14 * radius;
    printf("Area of circle = %.2f", area);
    printf("\nPerimeter of circle = %.2f", perimeter);
    return 0;
}