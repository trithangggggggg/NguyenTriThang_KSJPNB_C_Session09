#include <stdio.h>

int main() {
    int array[100];
    int n, value, addindex, position, newvalue, delindex;

    printf("nhap so phan tu muon nhap: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("so phan tu khong hop le\n");
        return 1;
    }

    printf("nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("nhap gia tri can chen: ");
    scanf("%d", &value);
    printf("nhap vi tri muon chen (1-%d): ", n + 1);
    scanf("%d", &addindex);

    if (addindex < 1 || addindex > n + 1) {
        printf("vi tri khong hop le\n");
        return 1;
    }

    for (int i = n; i >= addindex; i--) {
        array[i] = array[i - 1];
    }
    array[addindex - 1] = value;
    n++;

    printf("mang sau khi chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int tempindex;
    printf("nhap vi tri can sua (1-%d): ", n);
    scanf("%d", &tempindex);

    if (tempindex < 1 || tempindex > n) {
        printf("vi tri khong hop le\n");
        return 1;
    }

    printf("nhap gia tri moi: ");
    scanf("%d", &newvalue);
    array[tempindex - 1] = newvalue;

    printf("mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("nhap vi tri can xoa (1-%d): ", n);
    scanf("%d", &delindex);

    if (delindex < 1 || delindex > n) {
        printf("vi tri khong hop le\n");
        return 1;
    }

    for (int i = delindex - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;

    printf("mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

