//
// Created by THAICHU on 5/6/2024.
//
#include <stdio.h>
float crystalTienDien(int sokWh){
    float tienDien;
    if (sokWh <= 50) {
        tienDien = sokWh * 500;
    }
    else if(sokWh > 50 && sokWh <= 100){
        tienDien = 50 * 500 + (sokWh - 50) * 700;
    }
    else if(sokWh > 100){
        tienDien = 50 * 500 + 50 * 700 + (sokWh - 100) * 900;
    }
    return tienDien;
}
void cases(int sokWh){
    printf("\nGia tien cho 30kWh la: %.2f VND", crystalTienDien(30));
    printf("\nGia tien cho 80kWh la: %.2f VND", crystalTienDien(80));
    printf("\nGia tien cho 120kWh la: %.2f VND", crystalTienDien(120));
}
//int exam2(){
int main() {
    int sokWh;
    printf("Nhap so kWh: ");
    scanf("%d", &sokWh);
    printf("\nTien dien cho %dkWh la: %.2f VND", sokWh ,crystalTienDien(sokWh));
    printf("\n-------------------------------");
    cases(sokWh);
    return 0;
}