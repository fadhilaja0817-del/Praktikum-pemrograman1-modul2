#include <stdio.h>
#include <math.h>

int main() {
float a, b, c;
float keliling, luas;

scanf("%f %f", &a, &b);

c = sqrtf(b * b - a * a);
keliling = a + b + c;
luas = 0.5f * c * a;

printf("Alas = %g cm\n", c);
printf("Tinggi = %g cm\n", a);
printf("Keliling = %g cm\n", keliling);
printf("Luas = %g cm^2\n", luas);

return 0;

}