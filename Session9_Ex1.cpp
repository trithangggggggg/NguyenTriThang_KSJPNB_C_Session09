#include <stdio.h>

int main() {
    int array[100];
    int n, addvalue, addindex;

    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("So phan tu khong hop le\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Nhap gia tri can chen: ");
    scanf("%d", &addvalue);

    printf("Nhap vi tri muon chen (1-%d): ", n + 1);
    scanf("%d", &addindex);

    if (addindex < 1 || addindex > n + 1) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    for (int i = n; i >= addindex; i--) {
        array[i] = array[i - 1];
    }
    array[addindex - 1] = addvalue;
    n++;

    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
