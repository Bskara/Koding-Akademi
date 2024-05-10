#include <stdio.h>
#include <stdbool.h>
int main(){

    int a;
    int b;
    printf("Masukkan a: ");
    scanf("%d", &a);
    printf("Masukkan b: ");
    scanf("%d", &b);
    int tambah = a + b;
    printf("Hasil tambah: ");
    printf("%d\n", tambah);

    printf("12 mod 5 = ");
    int modulo = 12 % 5;
    printf("%d\n", modulo);


    // increment & decrement
    //   ++            --

    // pre
    printf("a + 1: ");
    int preinc = ++a;
    printf("%d\n", preinc);

    // preinc (proses)
    // 1. a+1 (value diselesaikan dulu)
    // 2. preinc = a+1 (hasil value dimasukkan ke variable)

    // post 
    printf("a + 1: ");
    int postinc = a++;
    printf("%d\n", postinc);

    // postinc (proses)
    // 1. postinc = a
    // 2. a + 1

    bool coba = 5 < 4;
    printf("%d\n", coba);

    bool coba1 = !(5 < 4) && (7 > 2);
    //         NOT FALSE  &&  TRUE
    printf("%d\n", coba1);

    b += 5;
    printf("%d\n", b);

    return 0;
}