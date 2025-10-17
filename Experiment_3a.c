/*Name of Student : Arshiq Ahmed Sayyed 
UIN 251P082
Class : F.E. Computer Engineering 
Div : D 
Age : 17*/
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

start:  // Label for goto

    // Display menu
    printf("\n========= SIMPLE CALCULATOR =========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("=====================================\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Check for exit first
    if (choice == 5) {
        printf("Exiting the calculator... Goodbye!\n");
        return 0;
    }

    // Take input numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation based on choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %.2f × %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0)
                printf("Error: Division by zero is not allowed!\n");
            else {
                result = num1 / num2;
                printf("Result: %.2f ÷ %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    // Ask user if they want to continue
    printf("\nDo you want to perform another operation? (1 = Yes / 0 = No): ");
    int again;
    scanf("%d", &again);
    if (again == 1)
        goto start;   // Go back to the menu
    else
        printf("Exiting the calculator... Goodbye!\n");

    return 0;
}
