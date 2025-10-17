/*Name of Student : Arshiq Ahmed Sayyed 
UIN 251P082
Class : F.E. Computer Engineering 
Div : D 
Age : 17*/
#include <stdio.h>

int main() {
    float phy, chem, math, avg;

    // Input marks
    printf("Enter Physics marks: ");
    scanf("%f", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);
    printf("Enter Mathematics marks: ");
    scanf("%f", &math);

    // Calculate average
    avg = (phy + chem + math) / 3;

    // Display average
    printf("\nAverage Marks: %.2f%%\n", avg);

    // Check eligibility using conditional operator
    (avg >= 50) ? printf("Status: Eligible for Admission\n")
                : printf("Status: Not Eligible for Admission\n");

    return 0;
}
