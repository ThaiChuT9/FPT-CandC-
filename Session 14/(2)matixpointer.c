//
// Created by THAICHU on 4/19/2024.
// Write a program to add 2 matrices using pointers.
#include <stdio.h>
void twomatrieces (int *a , int *b , int *c , int row , int col){
    int i, j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            *(c + i * col + j) = *(a + i * col + j) + *(b + i * col + j);
        }
    }
}
void result(int *c, int row, int col){
    int i,j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d\t ", *(c + i * col + j));
        }
        printf("\n");
    }
}
int matrixpointer(){
//int main(){
    int i,j,row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int a[row][col], b[row][col],c[row][col];
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter the elements at row %d and column %d of matrix A:",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter the elements at row %d and column %d of matrix B:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    twomatrieces((int *)a,(int *)b,(int *)c, row, col);
    printf("The sum of the matrices is:\n");
    result((int *)c, row, col);
    return 0;
}
