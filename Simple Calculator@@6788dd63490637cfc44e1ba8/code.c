// #include <stdio.h>

// int main(){
//     int a,b;
//     char c;
//     scanf("%d %d",&a,&b);
//     scanf(" %c", %c);
//     switch(c){
//         case '+':
//         printf("%d",a+b);
//         break;
//         case '-':
//         printf("%d",a-b);
//         break;
//         case '*':
//         printf("%d",a*b);
//         break;
//         case '/':
//         printf("%d",a/b);
//         break;
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Reading two integers and an operator
    scanf("%d %d %c", &a, &b, &op);

    // Checking operator and performing the corresponding operation
    if (op == '+') {
        printf("%d", a + b);
    } else if (op == '-') {
        printf("%d", a - b);
    } else if (op == '*') {
        printf("%d", a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Error: Invalid operator");
    }

    return 0;
}
