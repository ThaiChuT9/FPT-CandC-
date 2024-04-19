//
// Created by THAICHU on 4/19/2024.
//
#include <stdio.h>
int babai5(){
//int main(){
    int num,result=0;
    while (num>=0 && num <100){
        printf("Enter a number: ");
        scanf("%d",&num);
        result++;
    }
    result--;
    printf("Result = %d", result);
    return 0;
}