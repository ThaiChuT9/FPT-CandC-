//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
void ppt6(){
//void main(){
    int num;
    for (num=1;num<=100;num++){
        if(num%9==0){
            continue;
        }
        printf("%d\t",num);
    }
}