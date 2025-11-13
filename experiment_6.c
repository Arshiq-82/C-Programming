/* Arshiq Ahmed Sayyed
F.E. Computer Engineering
251P082
DIV : D, Roll no. 7 */

#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("The counter function has been called %d times.\n", count);
}

int main() {
    int n, i;
    printf("Enter how many times you want to call the counter function: ");
    scanf("%d", &n);
    
    printf("\nCalling the counter function %d times:\n\n", n);
    
    for (i = 1; i <= n; i++) {
        counter();
    }

    printf("\nProgram finished. The counter function was executed %d times in total.\n", n);
    return 0;
}
