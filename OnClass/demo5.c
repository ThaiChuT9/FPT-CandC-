
#include <stdio.h>
int toantu() {
//int main() {
    int a = 5;
    int b = 10;
    int c = 7;
// Toán tử toán học
    int tong = a + b; // Cộng
    int hieu = a - b; // Trừ
    int tich = a * b; // Nhân
    int thuong = b / a; // Chia
// Toán tử quan hệ 
    int ketqua1 = (a > b); // So sánh lớn hơn.
    int ketqua2 = (a <= b); // So sánh nhỏ hơn hoặc bằng
    int ketqua3 = (a == c); // So sánh bằng
    int ketqua4 = (a != c); // So sánh khác
// Toán tử logic.
    int ketqua5 = (a < b && b > c); // Toán tử logic AND
    int ketqua6 = (a < b || b < c); // Toán tử logic OR
    int ketqua7 = !(a < b); // Toán tử logic NOT

    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %d\n", thuong);

    printf("Ket qua 1: %d\n", ketqua1);
    printf("Ket qua 2: %d\n", ketqua2);
    printf("Ket qua 3: %d\n", ketqua3);
    printf("Ket qua 4: %d\n", ketqua4);

    printf("Ket qua 5: %d\n", ketqua5);
    printf("Ket qua 6: %d\n", ketqua6);
    printf("Ket qua 7: %d\n", ketqua7);

    return 0;
}