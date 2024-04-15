//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
int tamgiac(){
//int main(){
    int a,b,c;
    printf("Nhap canh a:");
    scanf("%d",&a);
    printf("Nhap canh b:");
    scanf("%d", &b);
    printf("Nhap canh c:");
    scanf("%d", &c);
    if(a*a + b*b == c*c){
        printf("Day la tam giac vuong co c la canh huyen");
    } else if(a*a + c*c == b*b) {
        printf("Day la tam giac vuong co b la canh huyen");
    } else if(b*b + c*c == a*a) {
        printf("Day la tam giac vuong co a la canh huyen");
    } else {
        printf("Day khong phai tam giac hoac la tam giac thuong");
    }
    return 0;
}