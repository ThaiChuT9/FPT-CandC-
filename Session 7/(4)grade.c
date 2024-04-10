//
// Created by THAICHU on 4/10/2024.
// Montek company gives allowances to employees depending on their grade as follows
// |Grade|Allowance|
// |A|300|
// |B|250|
// |Others|100|
// Calculate the salary at the end of the month.(Accept Salary and Grade from user)
#include <stdio.h>
#include <ctype.h>
int gra(){
//int main(){
    char grade;
    int salary;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Enter your salary: ");
    scanf("%d", &salary);
    grade = toupper(grade);
    switch (grade){
        case ('A'):
            salary += 300;
            break;
        case 'B':
            salary += 250;
            break;
        default:
            salary += 100;
            break;
    }
    printf("Your salary is: %d", salary);
    return 0;
}
