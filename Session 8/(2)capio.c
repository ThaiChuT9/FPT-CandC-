//
// Created by THAICHU on 4/10/2024.
// Write a program to show your computer's capabilities. The user types in a letter of the alphabet and your program should display the corresponding language or package available. Some sample input and output is given below:
// |Input|Output|
// |-----|------|
// |A or a|Ada  |
// |B or c|Basic|
// |C or c|COBOL|
// |D or d|dBASE III|
// |f or F|Fortran|
// |p or P|Pascal |
// |v or V|Visual C++ |
// Using the switch statement to choose and display the appropriate language. Use the default label to display a message if the input dose not match any of the above letters.

#include <stdio.h>
#include <ctype.h>
int main(){
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    letter = toupper(letter);
    switch (letter){
        case 'A':
            printf("Ada");
            break;
        case 'B':
            printf("Basic");
            break;
        case 'C':
            printf("COBOL");
            break;
        case 'D':
            printf("dBASE III");
            break;
        case 'F':
            printf("Fortran");
            break;
        case 'P':
            printf("Pascal");
            break;
        case 'V':
            printf("Visual C++");
            break;
        default:
            printf("No match");
    }
    return 0;
}
