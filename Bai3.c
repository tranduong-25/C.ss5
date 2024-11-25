#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    do {
        printf("Nhap vao 1 so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So vua nhap ko hop le. Moi nhap lai.\n");
        }
    } while (n <= 0);

    do {
        sum += i;
        i++;
    } while (i <= n);

    printf("Tong cac so tu 1 den %d la : %d\n", n, sum);

    return 0;
}
