
#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
