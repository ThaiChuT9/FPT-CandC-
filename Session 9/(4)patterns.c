//
// Created by THAICHU on 4/11/2024.
// Write a program to display the following pattern:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//and
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

#include <stdio.h>
//void Pro(int start, int end, int step){
//    for (int i = start; i !=end ; i+=step) {
//        for (int j = 1; j <= i; j++) {
//            printf("%d",j);
//        }
//        printf("\n");
//    }
//}
int mama(){
//int main(){
    int n;
    printf("Enter length: ");
    scanf("%d", &n);
//    Pro(1, n + 1, 1);
//    Pro(n - 1, 0, -1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("And\n");
    for (int i = 1; i <=n ; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
