#include <stdio.h>

// Ham tim kiem nhi phan khong de quy
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1; // Khoi tao bien chi so trai va phai
    while (left <= right) {
        int mid = left + (right - left) / 2; // Tinh chi so giua mang de tranh tran so
        if (arr[mid] == target) { // Neu phan tu o giua bang target
            return mid; // Tra ve chi so giua
        } else if (arr[mid] < target) { // Neu target lon hon phan tu giua
            left = mid + 1; // Tim kiem trong nua ben phai
        } else { // Neu target nho hon phan tu giua
            right = mid - 1; // Tim kiem trong nua ben trai
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

// Ham tim kiem nhi phan bang de quy
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Neu khong con phan tu nao de kiem tra
    }
    int mid = left + (right - left) / 2; // Tinh chi so giua mang
    if (arr[mid] == target) { // Neu phan tu o giua bang target
        return mid; // Tra ve chi so giua
    } else if (arr[mid] < target) { // Neu target lon hon phan tu giua
        return binarySearchRecursive(arr, mid + 1, right, target); // Goi de quy nua ben phai
    } else { // Neu target nho hon phan tu giua
        return binarySearchRecursive(arr, left, mid - 1, target); // Goi de quy nua ben trai
    }
}

// Ham kiem thu tim kiem nhi phan
void testBinarySearch() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; // Mang da sap xep
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh kich thuoc mang

    int targets[] = {30, 60, 5}; // Cac phan tu can tim
    int targetSize = sizeof(targets) / sizeof(targets[0]); // Kich thuoc mang targets

    for (int i = 0; i < targetSize; i++) {
        // Kiem thu tim kiem khong de quy
        int result = binarySearch(arr, size, targets[i]);
        if (result != -1) {
            printf("Phan tu %d duoc tim thay tai chi so %d (khong de quy).\n", targets[i], result);
        } else {
            printf("Phan tu %d khong ton tai trong mang (khong de quy).\n", targets[i]);
        }

        // Kiem thu tim kiem de quy
        result = binarySearchRecursive(arr, 0, size - 1, targets[i]);
        if (result != -1) {
            printf("Phan tu %d duoc tim thay tai chi so %d (de quy).\n", targets[i], result);
        } else {
            printf("Phan tu %d khong ton tai trong mang (de quy).\n", targets[i]);
        }
    }
}

// Ham phan tich do phuc tap thoi gian
void analyzeComplexity() {
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("1. Truong hop tot nhat: O(1) - Phan tu can tim o vi tri giua ngay tu dau.\n");
    printf("2. Truong hop trung binh va xau nhat: O(log n) - Moi lan lap giam mot nua so phan tu.\n");
}

// Ham main
int main() {
    printf("Kiem thu thuat toan tim kiem nhi phan:\n");
    testBinarySearch(); // Goi ham kiem thu

    analyzeComplexity(); // Goi ham phan tich do phuc tap

    return 0;
}

