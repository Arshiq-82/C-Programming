/*
NAME:SAYYED ARSHIQ AHMED
BRANCH/YEAR:COMPUTER_02/F.E
DIV:D
UIN/ROLL NO:251P082/07
PRACTICAL:8A
*/
#include <stdio.h>

int findLength(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = findLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("Length of string = %d", len);
    return 0;
}
