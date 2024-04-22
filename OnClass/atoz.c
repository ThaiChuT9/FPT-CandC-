//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
int atoz(){
//int main(){
    char arr[26];
    printf("Bang chu cai tu a den z: ");
    for (int i = 0; i < 26; i++) {
        arr[i] = i + 97;
        printf("%c ", arr[i]);
    }
    printf("\nBang chu cai tu A den Z: ");
    for (int k = 65, j = 0; k < 91; ++k, ++j) {
        arr[j] = k;
        printf("%c ", arr[j]);
    }
    return 0;
}