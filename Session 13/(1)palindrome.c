//
// Created by THAICHU on 4/16/2024.
// Write a program to accept a string and find out if it is a palindrome or not.

#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    const char *start = str;
    const char *end = str + strlen(str) - 1;
    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int palindrome(){
//int main() {
    char str[100];
    int c;
    do {
        printf("Enter a string: ");
        scanf(" %s", str);
        if (isPalindrome(str)) {
            printf("%s is a palindrome.\n", str);
        } else {
            printf("%s is not a palindrome.\n", str);
        }
        printf("Do you want to continue (y/n)? ");
        while (c = getchar() != '\n' && c != EOF);    //xóa bộ nhớ đệm
        c = getchar();
    } while (c == 'y' || c == 'Y');
    return 0;
}
