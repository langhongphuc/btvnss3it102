#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh;
    float tongDiem, diemTrungBinh;

    // Yêu c?u ngý?i dùng nh?p ði?m
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);

    // Tính t?ng ði?m và ði?m trung b?nh
    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3.0;

    // In k?t qu? ra màn h?nh
    printf("Tong diem la: %.2f\n", tongDiem);
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);

    return 0;
}

