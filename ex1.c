// Landon Davidson
// landond@uw.edu
#include <inttypes.h>
#include <stdio.h>

// Takes an array and the array's size as input and performs one pass of an insertion sort
void InsertSort(int64_t arr[], int size) {
    // Start at back of array and repeatedly swap if the preceding element is smaller,
    // otherwise return since the new element is fully sorted
    for (int i = size - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            int64_t tmp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = tmp;
        // If the preceding element is smaller than the new element is at the correct position and sorting is done
        } else return;
    }
}

// Takes a source and destination array and their size as input then copies element and sorts each element one at a time
void CopyAndSort(int64_t src[], int64_t dst[], int size) { // NOLINT(*-non-const-parameter)
    // For each element in src, copy to dst and call InsertSort which does one pass of insertion sort
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
        InsertSort(dst, i + 1);
    }
}

#define ARR_SIZE 12
int main() {
    // Initialize the src and dst arrays and call CopyAndSort
    int64_t src[] = {3, 2, -5, 7, 17, 42, 6, 333, 7, 8, -8, 6};
    int64_t dst[ARR_SIZE];
    CopyAndSort(src, dst, ARR_SIZE);

    // Print out sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < ARR_SIZE; i ++) {
        printf("%" PRId64 ", ", dst[i]);
    }
    printf("\n");
}
