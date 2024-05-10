#include <stdio.h>

// MEMORI STATIK
// pemakaian sudah diset dari awal compiling

// MEMORI DINAMIK
// memori yang tersedia saat program berjalan

// POINTER -> menggunakan memori dinamik
// int *var

// datatype *namavar;
// variable yang menyimpan address

int main(){
    int a = 4;
    int *ptr = &a;

    printf("%x\n", ptr);
    printf("%d\n", *ptr);
    printf("%x\n", &a);
    printf("%d\n", a);

    char p = 'p';
    char *ptrchar = &p;

    printf("%x\n", ptrchar);
    printf("%c\n", *ptrchar);
    printf("%x\n", &p);
    printf("%c\n", p);

    p = 'x';
    printf("%c\n", *ptrchar);
    
    int *coba = NULL;

    int angka[] = {10, 9, 6, 5, 7};
    ptr = angka;

    // printf("%d\n", *ptr);
    // ptr++;
    // printf("%d\n", *ptr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = angka;
    while(ptr <= &angka[4]){
        printf("%d, ", *ptr);
        ptr++;
    }
    printf("\n");
    ptr = angka;
    int *arrptr[4];
    for (int i = 0; i < 5; i++)
    {
        arrptr[i] = &angka[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d: %x\n", i, arrptr[i]);
        printf("%d: %d\n", i, *arrptr[i]);
    }
    


    return 0;
}

