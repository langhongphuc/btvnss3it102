#include <stdio.h>

int main() {
    int n;
    double A;

    printf("Nhap n (>1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Gia tri nhap vao khong hop le. n phai lon hon 1.\n");
        return 1;
    }

    A = (double)1 / (n - 1) - (double)1 / (n + 2);

    printf("A = %.5lf\n", A);

    return 0;
}
