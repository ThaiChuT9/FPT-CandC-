//
// Created by THAICHU on 4/10/2024.
// Write a program which takes name, basic, daper(ie, percentage of D.A). bonper(ie, percentage bonus) and loandet(loan amount to be debited) for an employee. Caculate the salary using the following relation:
// salary = basic + basic * daper/100 + bonper * basic/100 - loandet
//
#include <stdio.h>
void mm(){
//void main(){
    int basic,daper,bonper,loandet;
    float salary;
    char name[30];
    printf("Enter name: ");
    scanf("%[^\n]s",name);
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    printf("Enter daper: ");
    scanf("%d", &daper);
    printf("Enter bonus: ");
    scanf("%d", &bonper);
    printf("Enter loan: ");
    scanf("%d", &loandet);
    salary = basic + basic * daper/100 + bonper * basic/100 - loandet;
    printf("Name       |       Basic        |      Salary\n  ");
    printf("--------------------------------------------------\n");
    printf("%-010s  |    %8d        |     %7.2f\n", name, basic, salary);
}
