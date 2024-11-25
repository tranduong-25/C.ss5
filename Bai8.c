#include <stdio.h>

int main() {
    int soThuNhat, soThuHai, boiChungNhoNhat;

    do {
        printf("Nhập số nguyên dương thứ nhất: ");
        scanf("%d", &soThuNhat);
        if (soThuNhat <= 0) {
            printf("Số nhập vào không phải số nguyên dương. Vui lòng nhập lại.\n");
        }
    } while (soThuNhat <= 0);

    do {
        printf("Nhập số nguyên dương thứ hai: ");
        scanf("%d", &soThuHai);
        if (soThuHai <= 0) {
            printf("Số nhập vào không phải số nguyên dương. Vui lòng nhập lại.\n");
        }
    } while (soThuHai <= 0);

    for (boiChungNhoNhat = (soThuNhat > soThuHai ? soThuNhat : soThuHai); ; boiChungNhoNhat++) {
        if (boiChungNhoNhat % soThuNhat == 0 && boiChungNhoNhat % soThuHai == 0) {
            break; 
        }
    }

    printf("Bội chung nhỏ nhất của %d và %d là: %d\n", soThuNhat, soThuHai, boiChungNhoNhat);

    return 0;
}
