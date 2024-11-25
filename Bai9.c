#include <stdio.h>

int main() {
    float so1 = 0, so2 = 0, so3 = 0; 
    int choice; 

    do {
        printf("\n==== MENU ====\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Nhap so thu 1: ");
                scanf("%f", &so1);
                printf("Nhap so thu 2: ");
                scanf("%f", &so2);
                printf("Nhap so thu 3: ");
                scanf("%f", &so3);
                printf("Ban da nhap: %.2f, %.2f, %.2f\n", so1, so2, so3);
                break;

            case 2: 
                printf("Tong 3 so la : %.2f\n", so1 + so2 + so3);
                break;

            case 3:
                printf("Trung binh cong 3 so la: %.2f\n", (so1 + so2 + so3) / 3);
                break;

            case 4: 
                if (so1 <= so2 && so1 <= so3) {
                    printf("So nho nhat la : %.2f\n", so1);
                } else if (so2 <= so1 && so2 <= so3) {
                    printf("So nho nhat la : %.2f\n", so2);
                } else {
                    printf("So nho nhat la : %.2f\n", so3);
                }
                break;

            case 5:
                if (so1 >= so2 && so1 >= so3) {
                    printf("So lon nhat la : %.2f\n", so1);
                } else if (so2 >= so1 && so2 >= so3) {
                    printf("So lon nhat la : %.2f\n", so2);
                } else {
                    printf("So lon nhat la : %.2f\n", so3);
                }
                break;

            case 6: 
                printf("Thoat! \n");
                break;

            default:
                printf("Lua chon ko hop le. Vui long chon lai.\n");
        }
    } while (choice != 6); 

    return 0;
}
