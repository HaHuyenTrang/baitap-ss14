#include <stdio.h>

// Ham tim kiem tuyen tinh
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) { // Neu phan tu hien tai bang target
            return i; // Tra ve chi so cua phan tu
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

// Ham kiem thu tim kiem tuyen tinh
void testLinearSearch() {
    int arr[] = {10, 20, 30, 40, 50}; // Mang mau
    int size = sizeof(arr) / sizeof(arr[0]); // Kich thuoc mang

    int targets[] = {30, 50, 5}; // Cac phan tu can tim
    int targetSize = sizeof(targets) / sizeof(targets[0]); // Kich thuoc cua mang targets

    for (int i = 0; i < targetSize; i++) {
        int result = linearSearch(arr, size, targets[i]); // Goi ham tim kiem
        if (result != -1) { // Neu tim thay
            printf("Phan tu %d duoc tim thay tai chi so %d.\n", targets[i], result);
        } else { // Neu khong tim thay
            printf("Phan tu %d khong ton tai trong mang.\n", targets[i]);
        }
    }
}

// Ham phan tich do phuc tap thoi gian
void analyzeComplexity() {
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("1. Truong hop tot nhat: O(1) - Phan tu can tim nam o dau mang.\n");
    printf("2. Truong hop trung binh: O(n/2) - Trung binh can duyet n/2 phan tu.\n");
    printf("3. Truong hop xau nhat: O(n) - Phan tu can tim nam o cuoi mang hoac khong co trong mang.\n");
}

// Ham main
int main() {
    printf("Kiem thu thuat toan tim kiem tuyen tinh:\n");
    testLinearSearch(); // Goi ham kiem thu

    analyzeComplexity(); // Goi ham phan tich do phuc tap

    return 0;
}

