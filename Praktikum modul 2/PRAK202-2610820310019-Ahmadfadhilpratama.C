#include <stdio.h>

int main() {
    double nilai1, nilai2, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &nilai2);

    hasil = nilai1 + nilai2;

    if (nilai1 == (int)nilai1 && nilai2 == (int)nilai2) {
        printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.0f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    } else if (nilai1 == (int)nilai1) {
        printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    } else if (nilai2 == (int)nilai2) {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.0f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    } else {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    }

    return 0;
}