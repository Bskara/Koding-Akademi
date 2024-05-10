#include <stdio.h>

// syntax
// return_datatype function_name(parameter){
//      body of function 
// }

// PROCEDURE
// void coba(){
    // sdjgosahg
// }

// FUNCTION
// int hitung(){
//    return 1 + 2;
// }

int tambah(int angka1, int angka2){
    return angka1 + angka2;
}

void cetakHasilTambah(int angka1, int angka2, int result){
    // int result = tambah(angka1, angka2);
    printf("%d + %d = %d", angka1, angka2, result);
}

int coba(int *angka1, int angka2){
    *angka1 += angka2;
    return *angka1;
}

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}
/*
    factorial(4) = 24
    return 4 * factorial(3) = 6
               return 3 * factorial(2) = 2
                          return 2 * factorial(1) = 1
                                     return 1 * factorial(0) = 1
                                                    1


*/


int main(){
    int num1, num2;
    printf("Masukkan angka pertama: ");
    scanf("%d", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &num2);
    // int hasil = tambah(num1, num2);
    // printf("Hasil tambah: %d\n", hasil);

    // cetakHasilTambah(num1, num2, hasil);

    int hasilcoba = coba(&num1, num2);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("hasil: %d\n", hasilcoba);
    hasilcoba = coba(&num1, num2);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("hasil: %d\n", hasilcoba);
    return 0;
}   