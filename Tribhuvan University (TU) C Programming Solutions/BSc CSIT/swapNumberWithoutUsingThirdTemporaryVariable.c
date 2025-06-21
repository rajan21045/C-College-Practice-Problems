/*
How do you swap the values of two integers without using the third temporary variable? Justify with example. 

*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of a by b to get the original value of a
    a = a - b; // Step 3: Subtract the new value of a by the new value of b to get the original value of b
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}