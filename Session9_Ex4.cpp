#include <stdio.h>

int main() {
    int array[100];
    int n = 0;
    int luachon;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);

        if (luachon == 1) {
            // Nhap mang
            printf("Nhap so phan tu cua mang: ");
            scanf("%d", &n);

            if (n <= 0 || n > 100) {
                printf("So phan tu khong hop le! Thu lai.\n");
                continue;
            }

            printf("Nhap cac phan tu cua mang:\n");
            for (int i = 0; i < n; i++) {
                printf("Phan tu thu %d: ", i + 1);
                scanf("%d", &array[i]);
            }
        } 
        else if (luachon == 2) {
            // Hien thi mang
            if (n <= 0) {
                printf("Mang rong.\n");
            } else {
                printf("Cac phan tu cua mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
            }
        } 
        else if (luachon == 3) {
            // Them phan tu
            if (n >= 100) {
                printf("Mang da day, khong the them phan tu moi.\n");
            } else {
                int giatrichen, vitrichen;
                printf("Nhap gia tri can chen: ");
                scanf("%d", &giatrichen);
                printf("Nhap vi tri muon chen (1-%d): ", n + 1);
                scanf("%d", &vitrichen);

                if (vitrichen < 1 || vitrichen > n + 1) {
                    printf("Vi tri khong hop le.\n");
                    continue;
                }

                for (int i = n; i >= vitrichen; i--) {
                    array[i] = array[i - 1];
                }

                array[vitrichen - 1] = giatrichen;
                n++;

                printf("Phan tu da duoc chen thanh cong.\n");
            }
        } 
        else if (luachon == 4) {
            // Sua phan tu
            if (n <= 0) {
                printf("Mang rong, khong co phan tu de sua.\n");
            } else {
                int vitrisua, giatrimoi;
                printf("Nhap vi tri can sua (1-%d): ", n);
                scanf("%d", &vitrisua);

                if (vitrisua < 1 || vitrisua > n) {
                    printf("Vi tri khong hop le.\n");
                    continue;
                }

                printf("Nhap gia tri moi: ");
                scanf("%d", &giatrimoi);

                array[vitrisua - 1] = giatrimoi;
                printf("Phan tu da duoc sua thanh cong.\n");
            }
        } 
        else if (luachon == 5) {
            // Xoa phan tu
            if (n <= 0) {
                printf("Mang rong, khong co phan tu de xoa.\n");
            } else {
                int vitrixoa;
                printf("Nhap vi tri can xoa (1-%d): ", n);
                scanf("%d", &vitrixoa);

                if (vitrixoa < 1 || vitrixoa > n) {
                    printf("Vi tri khong hop le.\n");
                    continue;
                }

                for (int i = vitrixoa - 1; i < n - 1; i++) {
                    array[i] = array[i + 1];
                }
                n--;

                printf("Phan tu da duoc xoa thanh cong.\n");
            }
        } 
        else if (luachon == 6) {
            // Thoat
            printf("Thoat chuong trinh.\n");
            break;
        } 
        else {
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }

    return 0;
}

