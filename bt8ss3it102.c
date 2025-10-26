#include <stdio.h> 
int main(){
    int n, reversed_n = 0, remainder;
    printf("Nhap vao mot so nguyen co 4 chu so: ");
	scanf("%d", &n);
	
	while (n != 0){
		remainder = n % 10;
		reversed_n = reversed_n * 10 + remainder;
		n /= 10; 
	}
	
	printf("So nghich dao la: %d\n", reversed_n);
	return 0;	 
} 
