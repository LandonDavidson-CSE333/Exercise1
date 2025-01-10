// Landon Davidson
#include <inttypes.h>
#include <stdio.h>

void InsertSort(int64_t arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            int64_t tmp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = tmp;
        }
    }
}

void CopyAndSort(int64_t src[], int64_t dst[], int size) {
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
        InsertSort(dst, i + 1);
    }
}

#define ARR_SIZE 12
int main() {
    int64_t src[] = {3, 2, -5, 7, 17, 42, 6, 333, 7, 8, -8, 6};
    int64_t dst[ARR_SIZE];
    CopyAndSort(src, dst, ARR_SIZE);

    // Print out sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < ARR_SIZE; i ++) {
        printf("%" PRId64 ", ", dst[i]);
    }
}
