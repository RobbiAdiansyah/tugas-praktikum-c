#include <stdio.h>

int main()
{
    char sales[10];
    int penjualan;
    float hargaB;

    printf("Masukkan nama sales: ");
    scanf("%s", sales);

    printf("Masukkan hasil penjualan: ");
    scanf("%d", &penjualan);

    printf("Masukkan harga barang: ");
    scanf("%f", &hargaB);

    float komisi = hargaB * penjualan * 5.0 / 100.0;

    printf("Komisi yang didapat dari sales yang bernama %s adalah: %.2f\n", sales, komisi);

    return 0;
}
