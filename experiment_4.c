/* Arshiq Ahmed Sayyed
F.E. Computer Engineering
251P082
DIV : D, Roll no. 7 */

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int lower, int upper) {
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printPrimes(start, end);
    return 0;
}
