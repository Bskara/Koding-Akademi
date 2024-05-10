#include <stdio.h>
int main(){

float Fahrenheit;
printf("Masukkan Suhu Fahrenheit: ");
scanf("%f", &Fahrenheit);
printf("Baik, Suhu saat ini: %.1f fahrenheit\n", Fahrenheit);

float Convert = (Fahrenheit -32) * 5.0 / 9.0;
printf("Hasil Convert: ");
printf("%.1f", Convert);
    return 0;
}