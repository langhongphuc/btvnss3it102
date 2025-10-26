#include <stdio.h> 
#include <math.h> 

int main() {
	double r, chuVi, dienTich;
	
	printf("Nhap ban kinh hinh tron: ");
	scanf("%lf",&r);
	
	chuVi = 2 * M_PI * r;
	dienTich = r * r * M_PI;
	
	printf("Chu vi hinh tron la: %.2lf\n", chuVi);
	printf("Dien tich hinh tron la: %.2lf\n", dienTich);
	
	return 0; 
	
	
	 
}
