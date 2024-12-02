#include <stdio.h>

int main() {
    int arr[100], n, min_idx;

    // Nhập số lượng phần tử và các phần tử của mảng
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng bằng thuật toán chọn
    for (int i = 0; i < n-1; i++) {
        // Tìm vị trí của phần tử nhỏ nhất trong phần chưa được sắp xếp
        min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên của phần chưa được sắp xếp
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}