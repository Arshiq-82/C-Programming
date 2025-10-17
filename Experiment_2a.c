/*Name of Student : Arshiq Ahmed Sayyed 
UIN 251P082
Class : F.E. Computer Engineering 
Div : D 
Age : 17*/
#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd using modulus operator
    if (num % 2 == 0)
        printf("%d is an EVEN number.\n", num);
    else
        printf("%d is an ODD number.\n", num);

    return 0;
}
