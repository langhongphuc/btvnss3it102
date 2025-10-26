#include <stdio.h>

int main() {
    double canh_day, chieu_cao, dien_tich;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%lf", &canh_day);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%lf", &chieu_cao);

    dien_tich = (canh_day * chieu_cao) / 2.0;

    printf("Dien tich tam giac la: %.2lf\n", dien_tich);

    return 0;
}

