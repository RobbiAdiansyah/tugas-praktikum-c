#include <stdio.h>

int main()
{
	int A;
	printf("imput bilangan bulat:");
	scanf("%i", &A);

	if(A %2==0){ 
		printf("BILANGAN GENAP\n");
	} else 
		printf("BILANGAN GANJIL\n");
	return 0;
}
