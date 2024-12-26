#include <stdio.h>

// Ham sap xep noi bot
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) { // Lap qua cac phan tu
        for (int j = 0; j < size - i - 1; j++) { // Lap de so sanh cac cap phan tu
            if (arr[j] > arr[j + 1]) { // Neu phan tu o vi tri j lon hon phan tu ke tiep
                // Hoan doi hai phan tu
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Ham in mang
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // In tung phan tu cua mang
    }
    printf("\n"); // Xuong dong sau khi in xong mang
}

// Ham kiem thu thuat toan sap xep noi bot
void testBubbleSort() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Mang can sap xep
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh kich thuoc mang

    printf("Mang truoc khi sap xep: ");
    printArray(arr, size); // In mang truoc khi sap xep

    bubbleSort(arr, size); // Goi ham sap xep noi bot

    printf("Mang sau khi sap xep: ");
    printArray(arr, size); // In mang sau khi sap xep
}

// Ham phan tich do phuc tap
void analyzeComplexity() {
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("1. Truong hop tot nhat: O(n) - Mang da sap xep, chi can duyet qua mot lan.\n");
    printf("2. Truong hop trung binh: O(n^2) - Can lap de kiem tra va hoan doi cac cap phan tu.\n");
    printf("3. Truong hop xau nhat: O(n^2) - Mang dao nguoc hoan toan, can duyet het cac cap phan tu.\n");
}

// Ham main
int main() {
    printf("Kiem thu thuat toan sap xep noi bot:\n");
    testBubbleSort(); // Goi ham kiem thu

    analyzeComplexity(); // Goi ham phan tich do phuc tap

    return 0;
}

