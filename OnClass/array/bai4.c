//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n,arr1[20],arr2[20],matchFound=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ",i+1);
        scanf("%d", &arr1[i]);
        arr2[i] = rand() %10 +1;
    }
    printf("Matching number: ");
    for (int i = 0; i < n; ++i) {
        if (arr1[i] == arr2[i]) {
            printf(" %d", arr1[i]);
            matchFound = 1;
        }
    }
    if (matchFound == 0) {
        printf("No matching number found.");
    }
    printf("\nArray 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}