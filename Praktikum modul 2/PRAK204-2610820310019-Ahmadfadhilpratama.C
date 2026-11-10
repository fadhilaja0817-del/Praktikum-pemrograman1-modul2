#include <stdio.h>

int main() {
float a, b;
float volume, luas, keliling;
const float PI = 3.142857f;

scanf("%f %f", &a, &b);
volume = PI * (a * a) * b;
luas = 2 * PI * a * (a + b);
keliling = 2 * PI * a;

printf("Volume = %.2f\n", volume);
printf("Luas = %.2f\n", luas);
printf("Keliling = %.2f\n", keliling);
return 0;
}