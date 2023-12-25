#include <stdio.h>
int main()
{
	int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12] = {0};
	int C[12] = {0};
	int I, J ,R ,K ,i;
//cetak isi array A

	printf(" Proram menentukan nilai rata rata mahasiswa\n -------------------------------------------\n ");
	for (i=0; i<12; i++){
		K += (float)A[i];
		
	}
	R = K / 12;
	
	printf("Nilai Mahasiswa                         : ");
	for (I=0; I<12; I++) {
		printf("%3i", A[I]);
	}
	J = 0;
	printf("\n Rata rata nilai mahasiswa adalah        : \"%d\"",R);
	for (I=0; I<12; I++) {
		if (A[I]>R) {
		B[J] = A[I];
		J++;
		}
	}
	J = 0;
	for (I=0; I<12; I++) {
		if (A[I]<R) {
		C[J] = A[I];
		J++;
		}
	}
	//cetak isi array B
	printf("\n Nilai mahasiswa yang di atas rata rata  : ");
	for (I=0; I<12; I++) {
		printf("%3i", B[I]);
	}
	//cetak isi array C
	printf("\n Nilai mahasiswa yang di bawah rata rata : ");
	for (I=0; I<12; I++) {
		printf("%3i", C[I]);
	}
	return 0;
}
