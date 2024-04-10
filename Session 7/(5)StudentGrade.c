//
// Created by THAICHU on 4/10/2024.
//Write a program to evaluate the Grade of a student for the following constraints:
// if marks > 75 - grade A
// if marks > 60 - grade B
// if marks > 45 - grade C
// if marks > 30 - grade D
// if marks < 30 - grade F

#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 75){
        printf("Grade A");
    }
    else if (marks > 60){
        printf("Grade B");
    }
    else if (marks > 45){
        printf("Grade C");
    }
    else if (marks > 30){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;
}