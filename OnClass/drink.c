//
// Created by THAICHU on 4/15/2024.
//
#include <stdio.h>
//int drink(){
int main(){
    char drinkname[100];
    int amount;
    float drinkprice;
    int member;
    printf("Enter the drink name: ");
    scanf("%[^\n]s", &drinkname);
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Enter the drink price: ");
    scanf("%f", &drinkprice);
    printf("Enter the membership: ");
    scanf("%d", &member);
    printf("The drink name is: %s\n", drinkname);
    switch (member) {
        case 1:
            printf("The total price is %.2f", drinkprice * amount + ((drinkprice  * amount) * 8/100));
            break;
        case 2:
            printf("The total price is %.2f", drinkprice * amount + ((drinkprice + amount)* 8/100)) * 5 /100;
            break;
        case 3:
            printf("The total price is %.2f", drinkprice * amount  + ((drinkprice + amount)* 8/100)) * 10/100;
            break;
    }
    return 0;
}