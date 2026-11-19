
#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle) {
    int h = strlen(haystack);
    int n = strlen(needle);

    if (n == 0) {
        return 0;
    }

    for (int i = 0; i <= h - n; i++) {
        int j = 0;

        while (j < n && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == n) {
            return i;
        }
    }

    return -1;
}

int main() {
    char haystack[100];
    char needle[100];

    printf("Enter main string: ");
    scanf("%99s", haystack);

    printf("Enter search string: ");
    scanf("%99s", needle);

    printf("Index: %d\n", strStr(haystack, needle));

    return 0;
}
