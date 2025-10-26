#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("So da nhap khong phai la so co 4 chu so.\n");
        return 1;
    }

    int tempNumber = number; 
    while (tempNumber > 0) {
        digit = tempNumber % 10; 
        sum += digit; 
        tempNumber /= 10; 
    }

    printf("Tong cac chu so cua %d la: %d\n", number, sum);

    return 0;
}

