#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double S;

    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("a va b phai la so nguyen duong.\n");
        return 1;
    }

    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));

    printf("Output: S = %.2f\n", S);

    return 0;
}
