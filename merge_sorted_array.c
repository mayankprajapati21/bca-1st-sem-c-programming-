
#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m + 100];

    printf("Enter first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];

    printf("Enter second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    merge(nums1, m, nums2, n);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }

    return 0;
}
