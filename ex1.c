// Landon Davidson
#include <inttypes.h>

void CopyAndSort(int64_t src[], int64_t dst[], int size) {
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
        //TODO InsertSort function
    }
}

#define ARR_SIZE 12
int main() {
    int64_t src[] = {3, 2, -5, 7, 17, 42, 6, 333, 7, 8, -8, 6};
    int64_t dst[ARR_SIZE];
    CopyAndSort(src, dst, ARR_SIZE);
}
