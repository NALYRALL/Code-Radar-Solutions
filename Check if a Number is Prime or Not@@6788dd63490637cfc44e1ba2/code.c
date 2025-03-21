#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);
    printf(isPrime(num) ? "Prime\n" : "Not Prime\n");
    return 0;
}
