//
// Created by THAICHU on 4/26/2024.
//
#include <stdio.h>
char calculateGrade(int marks){
    char grade;
    if (marks>=90){
        grade='A';
    } else if (marks>=80){
        grade='B';
    } else if (marks>=70){
        grade='C';
    } else if (marks>=60){
        grade='D';
    } else {
        grade='F';
    }
    return grade;
}
int rage(){
//int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    printf("Grade: %c",calculateGrade(marks));
    return 0;
}