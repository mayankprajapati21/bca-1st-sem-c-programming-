
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    int digits[n];

    printf("Enter digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            break;
        }

        digits[i] = 0;
    }

    if (digits[0] == 0) {
        printf("Result: 1 ");
        for (int i = 0; i < n; i++) {
            printf("%d ", digits[i]);
        }
    } else {
        printf("Result: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", digits[i]);
        }
    }

    return 0;
}
