/*

Write a program to find the sum of digits of a given integer using recursion. 


*/


#include <stdio.h>
int sumOfDigits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: add the last digit to the sum of the remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number;
    }
    
    int result = sumOfDigits(number);
    printf("The sum of the digits is: %d\n", result);
    
    return 0;
}