//
// Created by THAICHU on 4/10/2024.
// Write a progame that asks for your first name and last name, and then prints the names in the format last name, first name.

#include <stdio.h>
void ln(){
//void main(){
    char fname[20],lname[20];
    printf("Enter your first name: ");
    gets(fname);
    printf("Enter your last name: ");
    gets(lname);
    printf("Your name is %s %s",lname,fname);
}
