#include <stdio.h>

int main() {
    int arr[100], n, key, j;

    // Nhập số lượng phần tử và các phần tử của mảng
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng bằng thuật toán chèn
    for (int i = 1; i < n; i++) {
        key = arr[i]; // Lấy phần tử hiện tại
        j = i - 1;

        // Di chuyển các phần tử lớn hơn key về phía sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Chèn key vào vị trí thích hợp
        arr[j + 1] = key;
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}