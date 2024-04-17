//
// Created by THAICHU on 4/17/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int guess(){
//int main(){
    int guess, randomNumber;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    do{
        printf("Enter your guess(between 1 and 100): ");
        scanf("%d", &guess);
        if(guess > randomNumber){
            printf("Too high!\n");
        }
        else if(guess < randomNumber){
            printf("Too low!\n");
        }
        else{
            printf("You guessed it!\n");
        }
    }while(guess != randomNumber);
    return 0;
}