/*
NAME:SAYYED ARSHIQ AHMED
BRANCH/YEAR:COMPUTER_02/F.E
DIV:D
UIN/ROLL NO:251P082/07
PRACTICAL:10B
*/
#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = &a[n - 1];

    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
