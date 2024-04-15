//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int minmax2(){
//int main(){
    int a,b,c;
    printf("Nhap chu so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap chu so thu hai: ");
    scanf("%d", &b);
    printf("Nhap chu so thu ba: ");
    scanf("%d", &c);
    if(a>b && a>c)
        printf("So lon nhat la %d", a);
    else if (b>c)
        printf("So lon nhat la %d", b);
    else
        printf("So lon nhat la %d", c);
    return 0;
}