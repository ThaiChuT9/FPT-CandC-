//
// Created by THAICHU on 4/26/2024.
//
#include <stdio.h>
void displayMenu();
void placeOder(char option);
float calculateTotal(char option, int quantity);

int mmemmu(){
//int main() {
    char option;
    int quantity;
    do {
        displayMenu();
        printf("Enter your option: ");
        scanf(" %c", &option);
        if (option != 'd') {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            placeOder(option);
            float price = calculateTotal(option, quantity);
            printf("Total: %2.f\n", price);
        } else {
            printf("Thank you for using our service.\n");
        }
    } while (option != 'd');
    return 0;
}

void displayMenu() {
    printf("Menu:\n");
    printf("a. Coffee - $2.50\n");
    printf("b. Tea - $1.50\n");
    printf("c. Cake - $3.00\n");
    printf("d. Out\n");
}

void placeOder(char option) {
    switch (option) {
        case 'a':
            printf("You ordered coffee.\n");
            break;
        case 'b':
            printf("You ordered tea.\n");
            break;
        case 'c':
            printf("You ordered cake.\n");
            break;
        default:
            printf("Invalid option.\n");
    }
}

float calculateTotal(char option, int quantity) {
    float price;
    switch (option) {
        case 'a':
            price = 2.50;
            break;
        case 'b':
            price = 1.50;
            break;
        case 'c':
            price = 3.00;
            break;
        default:
            price = 0;
    }
    return price * quantity;
}
