//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
#include <math.h>
int bac2(){
//int main(){
    int a,b,c;
    printf("Nhap so dau tien: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    printf("Phuong trinh ban vua nhap la %dx^2 + %dx + %d = 0\n", a,b,c);
    if(a==0){
        printf("Nghiem cua phuong trinh bac 2 la x1=x2=%d", -c/b);
    }
    else if(b*b-4*a*c==0){
        printf("Nghiem cua phuong trinh bac 2 la x1=x2=%d", -b/(2*a));
    }
    else if(b*b-4*a*c>0){
        printf("Nghiem cua phuong trinh bac 2 la x1=%lf, x2=%lf", (-b+sqrt(b*b-4*a*c))/(2*a), (-b-sqrt(b*b-4*a*c))/(2*a));
    }
    else{
        printf("Phuong trinh vo nghiem");
    }
    return 0;
}