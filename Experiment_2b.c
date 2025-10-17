/*Name of Student : Arshiq Ahmed Sayyed 
UIN 251P082
Class : F.E. Computer Engineering 
Div : D 
Age : 17*/
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Take input from user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ensure start is less than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Loop through the numbers and sum the odd ones
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {  // check if odd
            sum += i;
        }
    }

    printf("Sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
