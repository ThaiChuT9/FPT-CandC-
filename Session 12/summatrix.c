//
// Created by THAICHU on 4/12/2024.
//
#include <stdio.h>
int summat(){
//int main(){
    int i,j,row,col;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the row(s) of matrix: ");
    scanf("%d",&row);
    printf("Enter the column(s) of matrix: ");
    scanf("%d", &col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\na[%d][%d]= %d, b[%d][%d]= %d, c[%d][%d]= %d\n",i,j,a[i][j],i,j,b[i][j],i,j,c[i][j] );
        }
        printf("\n");
    }
    return 0;
}