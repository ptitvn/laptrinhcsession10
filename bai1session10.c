#include <stdio.h>

int main() {
    int arr[100];
    int n, x, found = 0;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Phan tu %d co o vi tri %d trong mang.\n", x, i);
            break; 
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}