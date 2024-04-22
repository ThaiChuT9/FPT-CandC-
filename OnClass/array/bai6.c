//
// Created by THAICHU on 4/22/2024.
//
#include <stdio.h>
#include <string.h>
int validName(char name[]){
    int i = 0;
    while (name[i] != '\0') {
        if (!(name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')) {
            return 0;
        }
        i++;
    }
    return 1;
}
int bababi6(){
//int main() {
    char name[5][30];
    int i;
    printf("Nhap ten 5 sinh vien\n ");
    for (i = 0; i < 5; ++i) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';  // Xóa ký tự newline ('\n') khỏi chuỗi nhập vào
        if (!validName(name[i])) {
            printf("Ten khong hop le\n");
            i--;
        }
    }
    printf("Danh sach sinh vien\n");
    for (i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, name[i]);
    }
    return 0;
}