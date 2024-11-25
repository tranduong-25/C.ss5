#include <stdio.h>
#include <stdlib.h>

int main() {
    long long so; 
    int chuSo[20];
    int dem = 0; 
    int i;

    printf("Nhap 1 so nguyen bat ki: ");
    scanf("%lld", &so);

    long long soGoc = so;
    if (so < 0) {
        so = -so;
    }

    do {
        chuSo[dem] = so % 10;
        so = so / 10;
        dem++;
    } while (so > 0);

    printf("Cac chu so trong so %lld la : ", soGoc);
    for ( i = dem - 1; i >= 0; i--) {
        printf("%d ", chuSo[i]);
    }
    printf("\n");

    return 0;
}
