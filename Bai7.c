#include <stdio.h>

int main() {
    int i , soThuNhat, soThuHai, uocChungLonNhat = 1;

    do {
        printf("Nhap so nguyen thu 1: ");
        scanf("%d", &soThuNhat);
        if (soThuNhat <= 0) {
            printf("So nhap vao ko phai so nguyen duong. Vui long nhap lai.\n");
        }
    } while (soThuNhat <= 0);

    do {
        printf("Nhap so nguyen thu 2: ");
        scanf("%d", &soThuHai);
        if (soThuHai <= 0) {
            printf("So nhap vao ko phai so nguyen duong. Vui long nhap lai.\n");
        }
    } while (soThuHai <= 0);

    for ( i = 1; i <= soThuNhat && i <= soThuHai; i++) {
        if (soThuNhat % i == 0 && soThuHai % i == 0) {
            uocChungLonNhat = i;
        }
    }

    printf("Uoc chung lon nhat cua %d va  %d la : %d\n", soThuNhat, soThuHai, uocChungLonNhat);

    return 0;
}
