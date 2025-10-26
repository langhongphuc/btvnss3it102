#include <stdio.h>
#include <math.h>

int main () {
	float Celsius;
	printf("Nhap vao do C: ");
	scanf("%f",&Celsius);
	float Fahrenheit = Celsius * 9.0/5 + 32;
	printf("do F: %.2f",Fahrenheit);
	
	return 0; 
}
 
