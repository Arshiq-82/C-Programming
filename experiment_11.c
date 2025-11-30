/*
NAME:SAYYED ARSHIQ AHMED
BRANCH/YEAR:COMPUTER_02/F.E
DIV:D
UIN/ROLL NO:251P082/07
PRACTICAL:10B
*/
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;

    fp = fopen("emp.dat", "wb");
    if (fp == NULL) {
        printf("Cannot open file.");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e.id);
        printf("Name: ");
        scanf("%s", e.name);
        printf("Salary: ");
        scanf("%f", &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("Cannot open file.");
        return 1;
    }

    printf("\nEmployee Details from File:\n");
    while (fread(&e, sizeof(e), 1, fp) == 1) {
        printf("ID: %d\tName: %s\tSalary: %.2f\n", e.id, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}
