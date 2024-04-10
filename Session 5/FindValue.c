//
// Created by THAICHU on 4/9/2024.
//What is the assigned (left-hand side) value of each of the following expressions?
//int s, m-3, n=5, r, t;
//float x=3.0, y;
//t = n/m;
//r = n%m;
//y = n/m;
//t = x*y-m/2;
//x = x*2.0;
//s = (m+n)/r;
//y = --n;

#include <stdio.h>
int m_main(){
//int main() {
    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;
    printf("Result1 t= %d", n / m);
//    với n = 5 và m = 3. Kết quả phép chia sẽ là 1 do kiểu khai báo của t là int.
    printf("\nResult2 r= %d", n % m);
//    với n = 5 và m = 3. Kết quả của phép chia số dư sẽ là 2.
    printf("\nResult3 y= %d", n / m);
//    với n = 5 và m = 3. Kêt quả của y = n/m là 1 do n và m khai báo bằng int.
    printf("\nResult4 t= %.1f", x * y - m / 2);
//    Do y không có giá trị nên không định nghĩa được.
    printf("\nResult5 x= %.1f", x * 2.0);
//    với x = 2.0 và x được khai báo bằng float. Kết quả của x = x * 2.0 là 6.0.
    printf("\nResult6 s= %d", (m + n) / r);
//    Do r ko có giá trị nên khi (m + n) chia cho r sẽ gây ra lỗi do chia cho số 0.
    printf("\nResult7 y= %d", --n);
//    Ở đây --n <=> n = n - 1 và giá trị ban đầu của n = 5 cho nên kết quả của y là 4.
    return 0;
}