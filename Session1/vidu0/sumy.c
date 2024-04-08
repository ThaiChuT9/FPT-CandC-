#include <stdio.h>

//int sumy(){
int main(){
    int a, b, c, sum;
    printf("Nhap diem Toan: ");
    scanf("%d" , &a);
    printf("Nhap diem Van: ");
    scanf("%d", &b);
    printf("Nhap diem Anh: ");
    scanf("%d", &c);
    sum = (a+b)*2 + c;
    printf("Tong diem: %d \n", sum);
    if(sum>=40){
        printf("Du diem");
    }
    else{
        printf("Khong du diem huhu");
    }
    return 0;
}