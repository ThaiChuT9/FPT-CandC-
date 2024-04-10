//
// Created by THAICHU on 4/10/2024.
//

#include <stdio.h>
int pr12(){
//int main() {
    int m1, m2, m3;
    int grade;
    int per = 30;

    printf("Enter your M1 grade: ");
    scanf("%d", &m1);

    printf("Enter your M2 grade: ");
    scanf("%d", &m2);

    printf("Enter your M3 grade: ");
    scanf("%d", &m3);

    grade = (m1 + m2 + m3);

    if (grade >= per * 90 / 100){
        printf("E+\n");
    }
    else if (grade >= per * 80 / 100){
        printf("E\n");
    }
    else if (grade >= per * 70 / 100){
        printf("A+\n");
    }
    else if (grade >= per * 60 / 100){
        printf("A\n");
    }
    else if (grade >= per * 50 / 100){
        printf("B+\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}