//
// Created by THAICHU on 4/24/2024.
//
#include <stdio.h>
int bababi8(){
//int main(){
    float diem[5][6];
    for (int i = 0; i < 5; ++i) {
        printf("Nhap diem cua hoc sinh %d:\n ",i+1);
        for (int j = 0; j < 6; ++j) {
            printf("nhap diem mon %d: ", j+1);
            scanf("%f",&diem[i][j]);
            while (diem[i][j] < 0 || diem[i][j] > 10){
                printf("Diem khong hop le, vui long nhap lai!\n");
                printf("nhap lai diem mon %d: ", j+1);
                scanf("%f", &diem[i][j]);
            }
        }
    }
    printf("Danh sach diem va diem trung binh cua cac hoc sinh:\n");
    printf("+----------+--------+--------+--------+--------+--------+---------+\n");
    printf("| Hoc sinh | Mon 1  | Mon 2  | Mon 3  | Mon 4  | Mon 5  | Diem TB |\n");
    printf("+----------+--------+--------+--------+--------+--------+---------+\n");
    for (int i = 0; i < 5; ++i) {
        float diemTB = 0;
        printf("|    %d     | ", i+1);
        for (int j = 0; j < 6; ++j) {
            printf("%.2f  | ", diem[i][j]);
            diemTB += diem[i][j];
            if (j == 5){
                printf("%.2f  |\n", diemTB/6);
            }
        }
    }
    printf("+----------+--------+--------+--------+--------+--------+---------+\n");
}