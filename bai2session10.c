#include <stdio.h>

int main() {
    int arr[100], n;

    // Nhập số lượng phần tử và các phần tử của mảng
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng bằng thuật toán nổi bọt
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // Đổi chỗ hai phần tử
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}