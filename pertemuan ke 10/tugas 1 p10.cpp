#include <stdio.h> 

void arrayb(){
	int A[5] = {12,8,17,5,15};
 	int B[7] = {14,12,9,25,7,11,5};
  	int C[12] = {0};
	int I, J;
	
	J = 0;
	 //index ini untuk array C 
	for(I=0; I<5; I++) {
		if (A[I]>=10) {
		 C[J] = A[I]; 
		 J++;
		} 
	} 
	for(I=0; I<7; I++) {
		if (B[I] >=10) {
		C[J] = B[I]; 
		J++; 
		} 
	} 
	//cetak isi array C 
	printf("\n_________________________________________");
	printf("\nIsi Array C : b\n"); 
	printf("\n  0  1  2  8  9 10 11\n"); 
		for (I=0; I<12; I++) { 
		printf("%3i", C[I]);
	}
}
int main() 
{
	int A[5] = {12,8,17,5,15};
 	int B[7] = {5,11,7,25,9,12,14};
  	int C[12] = {0};
	int I, J;
  	
  	//cetak isi array A
  	printf("Dari data yang ada berikut akan di ubah menjadi sesuai kebutuhan\n ");
  	printf("\n_________________________________________");
	printf("\nIsi Array A : \n"); 
	printf("\n  0  1  2  3  4\n"); 
  	for (I=0; I<5; I++) {
  		printf("%3i", A[I]); 
	}
	 //cetak isi array B 
	 printf("\n_________________________________________");
	printf("\nIsi Array B : \n");
	printf("\n  0  1  2  3  4  5  6\n"); 
	for (I=0; I<7; I++) { 
		printf("%3i", B[I]); 
	} 
	J = 0;
	 //index ini untuk array C 
	for(I=0; I<5; I++) {
		if (A[I]>=10) {
		 C[J] = A[I]; 
		 J++;
		} 
	} 
	for(I=0; I<7; I++) {
		if (B[I] >=10) {
		C[J] = B[I]; 
		J++; 
		} 
	} 
	//cetak isi array C 
	printf("\n_________________________________________");
	printf("\nIsi Array C : a\n"); 
	printf("\n  0  1  2  3  4  5  6  7  8  9 10 11\n"); 
		for (I=0; I<12; I++) { 
		printf("%3i", C[I]);	 
	} 
	arrayb();
	return 0; 
}


