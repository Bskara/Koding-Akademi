#include <stdio.h>
#include <stdbool.h>

int main(){
    float Fahrenheit;
        printf("Input suhu F: ");
        scanf("%f", &Fahrenheit);
        printf("Suhu saat ini: %.2f Fahrenheit\n\n", Fahrenheit);

    float Celcius = ((Fahrenheit - 32) / 9)*5;
        printf("Untuk suhu Celcius nya: %2.f Celcius\n", Celcius);
    if (Celcius > 18 && Celcius < 24)
        {
        printf("ideal temperature");
        }
        else if (Celcius <= 18)
        {
        printf("Low temperature");
        }
        else
        {
        printf("High temperature");
        }
            
    return 0;
}