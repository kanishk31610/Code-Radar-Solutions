#include<stdio.h>

int fibonacciSeries(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}