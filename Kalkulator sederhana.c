#include <stdio.h>
#include <stdbool.h>
int main(){
    //TAMBAH
    int a;
    printf("Input nilai a: ");
    scanf("%d", &a);
    int b;
    printf("Input nilai b: ");
    scanf("%d", &b);
    int tambah = a + b;
    printf("Hasilnya adalah: %d\n\n", tambah);
    
    //KURANG
    int c;
    printf("Input nilai c: ");
    scanf("%d", &c);
    int d;
    printf("input nilai d: ");
    scanf("%d", &d);
    int pengurangan = c - d;
    printf("Hasilnya adalah: %d\n\n", pengurangan);

    //PERKALIAN
    int e;
    printf("Input nilai e: ");
    scanf("%d", &e);
    int f;
    printf("input nilai f: ");
    scanf("%d", &f);
    int Perkalian = e * f;
    printf("Hasilnya adalah: %d\n\n", Perkalian);

    //PEMBAGIAN
    int g;
    printf("input nilai g: ");
    scanf("%d", &g);
    int h;
    printf("Input nilai h: ");
    scanf("%d", &h);
    int Pembagian;
    Pembagian = g / h;
    printf("Baik, hasilnya adalah: %d\n", Pembagian);

    return 0;
}