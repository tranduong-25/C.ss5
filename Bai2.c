#include <stdio.h>

int main() {
    int target = 42; 
    int input = 0;

    printf("Hay doan so :\n");

    while (input != target) { 
        printf("Nhap so ban doan: ");
        scanf("%d", &input);

        if (input == target) {
            printf("Chuc mung! Ban da doan trung so %d.\n", target);
        } else {
            printf("Sai roi! Doan lai di! hjhj.\n");
        }
    }

    return 0;
}
