//
// Created by THAICHU on 4/24/2024.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int isPrime1(int total){
    int i;
    for (i = 2; i < total; i++) {
        if (total % i == 0) {
            return 0;
        }
    }
    return 1;
}
int babbitt(){
//int main(){
    srand(time(NULL));
    int total, a[20];
    printf("Cac so nguyen to la: \n");
    for (int i = 0; i < 20; i++) {
        total = rand() % 200 + 1;
        if (isPrime1(total)) {
            a[i] = total;
            printf("%d ", a[i]);
        } else {
            i--;
        }
    }
    return 0;
}