//
// Created by THAICHU on 4/10/2024.
// Correct the errors
//#include <stdio.h>
//void main()
//{
//    int breadth;
//    float length, height;
//    scanf("%d%f%6.2f",breadth, &length, height);
//    printf("%d %f %e", &breadth, length, height);
//}
#include <stdio.h>
void cor(){
//void main() {
    int breadth;
    float length, height;
    scanf("%d %f %f", &breadth, &length, &height);
    printf("%d %f %e", breadth, length, height);
}