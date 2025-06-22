#include<stdio.h>

// Recursive function to return the nth Fibonacci number
int fib(int n) {
    if(n == 0)
                return 0;
    else if(n == 1)
                return 1;
    else
                return fib(n-1) + fib(n-2);
}

int main() {
    int n, i;

    // Ask user for number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

