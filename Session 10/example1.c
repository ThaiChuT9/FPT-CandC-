//
// Created by THAICHU on 4/11/2024.
//
#include <stdio.h>
int exi(){
//int main() {
    int cnt,cnt1;
    cnt = cnt1 = 0;
    do{
        printf("\nEnter a Number: ");
        scanf("%d",&cnt);
        printf("No. is %d", cnt);
        cnt1++;
    } while (cnt != 0);
    printf("\n The total numbers entered were %d",--cnt1);

    return 0;
}
