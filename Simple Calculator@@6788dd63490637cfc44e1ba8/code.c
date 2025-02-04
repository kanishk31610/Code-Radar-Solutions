#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Taking input: two integers followed by an operator
    scanf("%d %d %*c%c", &a, &b, &op);

    // Performing operations based on the operator
    if (op == '+') {
        printf("%d\n", a + b);
    } 
    else if (op == '-') {
        printf("%d\n", a - b);
    } 
    else if (op == '*') {
        printf("%d\n", a * b);
    } 
    else if (op == '/') {
        if (b != 0) 
            printf("%d\n", a / b);
        else 
            printf("Error: Division by zero\n");
    } 
    else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}
