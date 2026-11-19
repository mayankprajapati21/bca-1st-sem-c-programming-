
#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) {
        return 0;
    }

    int k = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\nNumber of unique elements: %d\n", k);

    return 0;
}
