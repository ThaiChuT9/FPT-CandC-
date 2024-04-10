//
// Created by THAICHU on 4/10/2024.
//
#include <stdio.h>
void pr(){
//void main(){
    int product_id;
    float order, rate;
    printf("Enter product id: ");
    scanf("%d", &product_id);
    switch (product_id) {
        case 1:
            if(product_id==1){
                printf("You are picking Computer Stationorey\n");
                printf("Enter order: ");
                scanf("%f", &order);
                if(order>=300){
                    if(order>=500){
                        rate= 0.12;
                    } else {rate= 0.08;}
                } else {rate= 0.02;}
            }
            break;
        case 2:
            if(product_id==2){
                printf("You are picking Fixed Dirks\n");
                printf("Enter order: ");
                scanf("%f", &order);
                if(order>=1500){
                    if(order>=2000){
                        rate= 0.1;
                    } else {rate= 0.05;}
                }
            }
            break;
        case 3:
            if(product_id==3){
                printf("You are picking Computers\n");
                printf("Enter order: ");
                scanf("%f", &order);
                if(order>=2500){
                    if(order>=5000){
                        rate= 0.1;
                    } else {rate= 0.05;}
                }
            }
            break;
    }
    order -= order * rate;
    printf("Total price: %.2f",order);
}