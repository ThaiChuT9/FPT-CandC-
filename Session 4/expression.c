//For the following values, write a program to evaluate the expression
//z = a * b +(c / d) -e * f;
//a = 10, b = 7, c = 15.75, d = 4, e = 2, f = 5.6
//----------------------------------------------------------------------

#include <stdio.h>
int su_main(){
//int main(){
    float a = 10, b = 7, c = 15.75, d = 4, e = 2, f = 5.6, z;
    z = a * b + (c / d) - e * f;
    printf("z = %f", z);
    return 0;
}
