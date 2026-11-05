
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {

    int count[20001] = {0};

    // Store nums1 elements
    for (int i = 0; i < nums1Size; i++) {
        count[nums1[i] + 10000] = 1;
    }

    int* result = malloc(nums2Size * sizeof(int));
    int size = 0;

    // Check nums2 elements
    for (int i = 0; i < nums2Size; i++) {
        int index = nums2[i] + 10000;

        if (count[index] == 1) {
            result[size++] = nums2[i];
            count[index] = 0;
        }
    }

    *returnSize = size;
    return result;
}