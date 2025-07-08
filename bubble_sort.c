#include <stdio.h>

// Fungsi untuk menampilkan isi array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Bubble sort dengan early stopping
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    printf("Array awal:\n");
    printArray(arr, n);
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // Reset status pertukaran untuk pass ini
        printf("Pass %d:\n", i + 1);

        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Lakukan pertukaran jika perlu
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  // Tandai bahwa terjadi pertukaran
            }
            printArray(arr, n);
        }

        // Jika tidak ada pertukaran, array sudah terurut
        if (swapped == 0) {
            printf("Tidak ada pertukaran pada pass ini. Array sudah terurut.\n\n");
            break;
        }

        printf("\n");
    }

    printf("Array setelah diurutkan:\n");
    printArray(arr, n);
}

int main() {
    int arr[] = {29, 10, 14, 37, 13, 5, 33, 20, 8, 17}; // 10 elemen
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}
