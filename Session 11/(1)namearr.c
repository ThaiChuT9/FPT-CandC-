//
// Created by THAICHU on 4/12/2024.
// Write a program to arrange the following names in alphabetical order.
// George, Albert, Tina, Xavier, Roger, Tim, William.

#include <string.h>
#include <stdio.h>
int arry(){
//int main(){
    int i,j;
    int n=7;
    char x[7][20] = {"George", "Albert","Tina","Xavier","Roger","Tim","William"};
    char temp[20];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(x[i],x[j])>0){
                strcpy(temp,x[i]);
                strcpy(x[i],x[j]);
                strcpy(x[j],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n ", x[i]);
    }
}
