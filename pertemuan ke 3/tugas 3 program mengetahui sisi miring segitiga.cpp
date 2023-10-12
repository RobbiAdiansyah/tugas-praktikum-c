#include <stdio.h>
#include <math.h>


int main() {


	float alas, tinggi, keliling, sm;
	
	printf("input alas : ");
	scanf("%f", &alas);
	
	printf("input tinggi: ");
	scanf("%f", &tinggi);
	
	sm = sqrt(alas * alas + tinggi * tinggi);
	
	printf("sisi miringnya  : %.2f, cm^2\n", sm);
	
	return 0;
}
