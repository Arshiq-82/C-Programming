/*
NAME:SAYYED ARSHIQ AHMED
BRANCH/YEAR:COMPUTER_02/F.E
DIV:D
UIN/ROLL NO:251P082/07
PRACTICAL:8A
*/
#include <stdio.h>
int isPalindrome(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    if (str[end] == '\n') {
        str[end] = '\0';
        end--;
    }
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (isPalindrome(str))
        printf("The string is a Palindrome.");
    else
        printf("The string is NOT a Palindrome.");
    return 0;
}
