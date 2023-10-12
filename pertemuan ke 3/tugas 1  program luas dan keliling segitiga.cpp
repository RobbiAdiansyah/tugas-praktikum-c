#include <stdio.h>
// INCLUDE MATH.H BERFUNGSI UNTUK MEMASUKAN RUMUS MATEMATKA KEDALAM CODE
#include <math.h>

int main() {

	//MENULISKAN VARIABEL YANG AKAN DI GUNAKAN//
	// VARIABEL YANG DIGUNAKAN BERBENTUK FLOAT YANG BERFUNGSI AGAR ANGKA YANG DI MASUKAN DAPAT BERUPA DESIMAL
	float alas, tinggi, keliling, sm;
	
	// PRINTF UNTUK MENAMPILKAN APA YANG INGIN DI TAMPILKAN
	// SCANF BERFUNGSI UNTUK MENGAMBIL DATA DARI APA YANG DI IMPUT OPERATOR
	printf("input alas : ");
	scanf("%f", &alas);
	
	printf("input tinggi: ");
	scanf("%f", &tinggi);
	
	// LUAS PUN MENGGUNAKAN FLOAT DIKARENAKAN TERDAPAT BILANGAN DESIMAL DALAM CODE RUMUSNYA
	float luas = 0.5 * alas * tinggi;
	// SM DISINI ADALAH SISI MIRING
	//SQRT AKAN MENJADI ERROR JIKA INCLUDE MATH.H TIDAK DI MASUKAN
	sm = sqrt(alas * alas + tinggi * tinggi);
	
	keliling = sm + tinggi + alas;
	//DALAM MENAMPILKAN HASIL AKHIR CODE %.2F BERARTI ANGKA YANG KELUAR AKAN BERUPA DESIMAL DENGAN 2 ANGKA SESUDAH KOMA
	printf("luas segitiga : %.2f, cm^2\n", luas);
	printf("keliling segitiga : %.2f, cm^2\n", keliling);
	
	return 0;
}
