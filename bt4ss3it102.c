#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh;
    float tongDiem, diemTrungBinh;

    // Y�u c?u ng�?i d�ng nh?p �i?m
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);

    // T�nh t?ng �i?m v� �i?m trung b?nh
    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3.0;

    // In k?t qu? ra m�n h?nh
    printf("Tong diem la: %.2f\n", tongDiem);
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);

    return 0;
}

