//
// Created by THAICHU on 4/8/2024.
// Write a program to evaluate the net salary of an employee given the following constraints:
//      Basic salary: $12000
//      DA: 12% of Basic salary
//      HRA: $150
//      TA: $120
//      Others: $450
//      Tax cuts a) PF: 14% of Basic salary
//               b) IT: 15% of Basic salary
//      Net salary: Basic salary + DA + HRA + TA + Others – PF – IT

#include <stdio.h>
//int Net_main(){
    int main(){
        int basic_salary, da, hra, ta, others, pf, it, net_salary;
//        printf("Enter basic salary: ");
//        scanf("%d", &basic_salary);
        basic_salary = 12000;
        da = basic_salary * 12 / 100;
        hra = 150;
        ta = 120;
        others = 450;
        pf = basic_salary * 14 / 100;
        it = basic_salary * 15 / 100;
        net_salary = basic_salary + da + hra + ta + others - pf - it;
        printf("Net salary of this employee: $%d", net_salary);
}
