#include <stdio.h>

int main() {
    int n, i ;

    do {
        printf("Nhap so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("So ko hop le. Vui long nhap lai.\n");
        }
    } while (n < 1 || n > 10);
    
    printf("Bang cuu chuong cua %d:\n", n);
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
