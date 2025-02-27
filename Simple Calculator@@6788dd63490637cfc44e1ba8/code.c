#include <stdio.h>

int main() {
    char op;
    int a, b;
    
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("error\n");
            break;
        default:
            printf("Invalid\n");
    }
    
    return 0;
}
