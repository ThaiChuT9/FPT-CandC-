//
// Created by THAICHU on 4/17/2024.
//
#include "stdio.h"
#define COFFEE_PRICE 2.5
#define TEA_PRICE 2.0
#define SMOOTHIE_PRICE 3.0
int coff(){
//int main(){
    int numCoffees = 0, numTeas = 0, numSmoothies = 0;
    float totalCost;
    char choise;
    printf("Welcome to the coffee shop!\n");
    do{
        printf("\n-----------MENU-----------\n");
        printf("1. Coffee($%.2f)\n",COFFEE_PRICE);
        printf("2. Tea($%.2f)\n", TEA_PRICE);
        printf("3. Smoothie($%.2f)\n", SMOOTHIE_PRICE);
        printf("4. Exit\n");
        printf("---------------------------\n");
        printf("Enter your choise: ");
        scanf("%c", &choise);
        fflush(stdin);
        switch (choise) {
            case '1':
                printf("How many coffees do you want to buy? ");
                scanf("%d", &numCoffees);
                fflush(stdin);
                printf("%d coffee(s) added to cart!\n",numCoffees);
                break;
            case '2':
                printf("Tea added to cart!\n");
                numTeas++;
                break;
            case '3':
                printf("Smoothie added to cart!\n");
                numSmoothies++;
                break;
            case '4':
                break;
            default:
                printf("Invalid choise!\n");
                break;
        }
    } while (choise != '4');
    totalCost = (numCoffees * COFFEE_PRICE) + (numTeas * TEA_PRICE) + (numSmoothies * SMOOTHIE_PRICE);
    printf("Number of coffees: %d\n", numCoffees);
    printf("Number of teas: %d\n", numTeas);
    printf("Number of smoothies: %d\n", numSmoothies);
    printf("Total cost: $%.2f\n", totalCost);
    printf("Thank you for visiting!\n");
    return 0;
}