#include <stdio.h>
#include <stdbool.h>
int main(){

    // if
    // if(condition){isi kode}

    // int a;
    // printf("Masukkan angka: ");
    // scanf("%d", &a);

    // if(a < 10){
    //     printf("Angka kurang dari sepuluh");
    // }
    // else if(a < 15){
    //     printf("Angka kurang dari lima belas");
    // }
    // else{
    //     printf("Angka lebih dari sama dengan lima belas");
    // }
    // printf("\n");
    // switch
    // switch (variabel pembanding){
    //      case value pembanding:
    //          isi kode
    //          break;
    // }

    // printf("Masukkan angka: ");
    // scanf("%d", &a);

    // switch(a){
    //     case 1:
    //         printf("Ini angka 1");
    //         printf("\nOke?");
    //         break;
    //     case 2:
    //         printf("Ini angka 2");
    //         break;
    //     default:
    //         printf("Oke pokoknya input");
    // }

    char huruf;
    printf("Masukkan huruf: ");
    scanf("%c", &huruf);

    switch (huruf){
        case 'a':
        case 'i':
        case 'u':
            printf("Ini huruf hidup");
            break;
        default:
            printf("Ini huruf mati");
    }

    if(huruf=='a' || huruf=='i'){

    }
    
    return 0;
}