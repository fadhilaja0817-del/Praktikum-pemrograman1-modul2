#include <stdio.h>

 int main() {
    float a, b, i, j, x, y, Hasil;
    
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    Hasil = (a - b) * (i / j) - (x + y);
    printf("%.3f\n", Hasil);
    return 0;

 }