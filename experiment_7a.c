/* Arshiq Ahmed Sayyed
F.E. Computer Engineering
251P082
DIV : D, Roll no. 7 */

#include <stdio.h>

int main() {
    int arr[100], n, i, largest, position = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            position = i;
        }
    }

    printf("\n\nThe largest element in the array is: %d", largest);
    printf("\nIt is present at position: %d\n", position + 1);

    printf("\nProgram executed successfully.\n");

    return 0;
}
