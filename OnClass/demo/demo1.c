
#include <stdio.h>
int demo_datatype(){
//    int main() {
// Kiểu số nguyên int integerVar = 10;
int integerVar = 10;
    printf("Kieu so nguyen: %d\n", integerVar);
// Kiểu số thực
    float floatVar = 3.14;
    printf("Kieu so thuc: %.2f\n", floatVar);
// Kiểu ký tự
    char charVar = 'A';
    printf("Kieu ky tu: %c\n", charVar);
// Kiểu Boolean (sử dụng kiểu int)
 int boolVar = 1; // 1 là true, 8 là false
  printf("Kieu bootlean: %d\n", boolVar);
// Kiểu chuỗi ký tự (mảng các ký tự)
 char stringVar[] = "Hello, world!";
 printf("Kieu chuoi ky tu: %s\n", stringVar);
    return 0;
}