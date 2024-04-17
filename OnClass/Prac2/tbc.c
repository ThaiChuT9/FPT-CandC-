//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
#include <ctype.h>
int tbc(){
//int main(){
    int count = 0, total;
    char choice;
    char subject[100];
    float score;
    do{
        printf("Nhap ten mon hoc: ");
        scanf(" %[^\n]s", subject);
        printf("Nhap diem: ");
        scanf("%f", &score);
        total += score;
        count++;
        printf("Ban co muon nhap tiep khong (y/n)? ");
        scanf(" %c", &choice);
        choice = toupper(choice);
    } while (choice == 'Y');
    if (count > 0){
        double average = total / count;
        printf("Diem trung binh cua %d mon hoc la: %.2f", count, average);
    } else {
        printf("Ban chua nhap mon hoc nao");
    }
    return 0;
}
