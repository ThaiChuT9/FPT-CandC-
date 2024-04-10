//
// Created by THAICHU on 4/10/2024.
//

#include <stdio.h>
int tinhtuoi(){
//int main() {
// Nhập tên từ người dùng
    char name[50];
    printf("Nhap ten cua ban: ");
    scanf("%[^\n]s",name); // các em thử 1 trong 2 lệnh scanf này (dòng 9 hoặc 18) để xem sự khác biệt nhé scanf("%[^\n]s", name); // nhập tên bao gồm cả khoảng trắng (space), không nhận ký tự xuống dòng (enter)
// Nhập năm sinh từ người dùng
    int birthYear;
    do{

        printf("Nhap nam sinh cua ban: ");
        scanf("%d", &birthYear);
        if(birthYear<0 || birthYear>2824){
            printf("Vui long nhap lai nam sinh.\n");
        }
    } while(birthYear<0 || birthYear>2824);
//    printf("Nhap nam sinh cua ban: ");
//    scanf("%d", &birthYear);
// Tính toán tuổi
    int currentYear = 2824; // Giả sử năm hiện tại là 2024
    int age = currentYear - birthYear;
// In thông tin và lời chào dựa trên tuổi
    printf("Xin chào, %s!\n", name);
    printf("Ban da %d tuoi.\n", age);
    if (age < 18) {
        printf("Ban la 1 nguoi tre tuoi!\n");
    } else if (age < 60) {
        printf("Ban la 1 nguoi truong thanh!:\n");
    } else {
    }
    printf("Ban la 1 nguoi cao tuoi!\n");
    return 0;
}