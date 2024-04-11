//
// Created by THAICHU on 4/10/2024.
//
#include <stdio.h>
#include <math.h>
int mamami(){
//int main(){
    float r,c,s;
    printf("nhap ban kinh hinh tron r= ");
    scanf("%f",&r);
    c = M_PI*r*2;
    s = M_PI*r*r;
    printf("\n");
    printf("Ket qua chu vi va dien tich hinh tron: \n");
    printf("=========================================== \n");
    printf("Ban kinh hinh tron:     r=%8.1f met \n",r);
    printf("Chu vi hinh tron:       c=%8.2f met \n", c);
    printf("Dien tich hinh tron:    s=%8.2f met vuong \n", s);
    printf("=========================================== \n");
//    Vi du 2
    printf("Data Type       \t | Size of byte \n");
    printf("int             \t | %d byte \n",sizeof(int));
    printf("float           \t | %f byte \n",sizeof(float));
    printf("unsigned int    \t | %d byte \n", sizeof(unsigned));
    printf("short int       \t | %d byte \n", sizeof(short int));
    printf("long int        \t | %d byte \n", sizeof(long int));
    printf("double          \t | %d byte \n", sizeof(double));
    return 0;

}