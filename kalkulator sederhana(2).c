#include <stdio.h>
#include <stdbool.h>

int main(){

    int a;
    int b;
    printf("Input nilai a: ");
    scanf("%d", &a);
    printf("Input nilai b: ");
    scanf("%d", &b);
    int tambah = a + b;
    printf("Hasil Pertambahannya adalah: %d\n\n", tambah);
    
    printf("input nilai a: ");
    scanf("%d", &a);
    printf("Input nilai b: ");
    scanf("%d", &b);
    int kurang = a - b;
    printf("Hasil Pengurangannya adalah: %d\n\n", kurang);

    printf("Input nilai a: ");
    scanf("%d", &a);
    printf("Input nilai b: ");
    scanf("%d", &b);
    int Perkalian = a * b;
    printf("Hasil Perkaliannya adalah: %d\n\n", Perkalian);

    printf("Input nilai a: ");
    scanf("%d", &a);
    printf("Input nilai b: ");
    scanf("%d", &b);
    float Pembagian = (float)a / (float)b;
    printf("Hasil Pembagiannya adalah: %.2f\n\n", Pembagian);

    return 0;
}