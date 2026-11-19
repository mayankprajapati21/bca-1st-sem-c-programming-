#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            for (int j = 0; j < digitsSize; j++) {
                result[j] = digits[j];
            }
            *returnSize = digitsSize;
            return result;
        }

        digits[i] = 0;
    }

    result[0] = 1;

    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return result;
}
