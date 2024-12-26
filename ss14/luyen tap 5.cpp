#include <stdio.h>

// Ham sap xep chen
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) { // Bat dau tu phan tu thu hai
        int key = arr[i]; // Lay gia tri phan tu hien tai lam key
        int j = i - 1; // Chi so cua phan tu truoc

        // Di chuyen cac phan tu lon hon key sang ben phai
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Chen key vao vi tri dung
    }
}

// Ham in mang
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // In tung phan tu cua mang
    }
    printf("\n"); // Xuong dong sau khi in mang
}

// Ham kiem thu sap xep chen
void testInsertionSort() {
    int arr[] = {12, 11, 13, 5, 6}; // Mang mau
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh kich thuoc mang

    printf("Mang truoc khi sap xep: ");
    printArray(arr, size); // In mang truoc khi sap xep

    insertionSort(arr, size); // Goi ham sap xep chen

    printf("Mang sau khi sap xep: ");
    printArray(arr, size); // In mang sau khi sap xep
}

// Ham phan tich do phuc tap thoi gian
void analyzeComplexity() {
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("1. Truong hop tot nhat: O(n) - Mang da sap xep, chi can duyet qua mot lan.\n");
    printf("2. Truong hop trung binh: O(n^2) - Can chen tung phan tu vao vi tri dung.\n");
    printf("3. Truong hop xau nhat: O(n^2) - Mang sap xep theo thu tu nguoc, moi phan tu can di chuyen het mang da sap xep.\n");
}

// Ham main
int main() {
    printf("Kiem thu thuat toan sap xep chen:\n");
    testInsertionSort(); // Goi ham kiem thu

    analyzeComplexity(); // Goi ham phan tich do phuc tap

    return 0;
}

