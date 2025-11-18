#include <stdio.h>
int reverse(int x) {
    int result = 0;
    while (x > 0) {
        result = result * 10 + (x % 10);
        x /= 10;
    }
    return result;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
    return 0;
}
