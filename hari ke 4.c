#include <stdio.h>

int main(){
    printf("Hello World\n");

    // for -> perulangan dimana kita tau jumlah perulangannya
    
    //  INITIALIZATION   CONDITION   UPDATE / PERLAKUAN
    // for(  int i = 0;   i < 10;        i++){
    //     printf("%d\n", i);
    // }

    // while -> perulangan dimana jumlah perulangannya tidak bisa diprediksi
    // while(CONDITION){

    // }

    // int a = 0; // INITIALIZATION
    // while(a != 64){ // CONDITION
    //     printf("Tebak angka: ");
    //     scanf("%d", &a); // UPDATE
    // }
    // printf("Selamat, Anda berhasil menebak angka!\n");

    // do while -> sama dengan while
    // do while mengeksekusi kodingnya sekali dulu, baru dicek
    // int a;
    // do{
    //     printf("Tebak angka: ");
    //     scanf("%d", &a);
    // }
    // while(a != 120);
    // printf("Selamat, Anda berhasil menebak angka lagi!");


    // int a;
    // do{
    //     printf("Tebak angka: ");
    //     scanf("%d", &a);
    //     if(a == 69){
    //         printf("Selamat, Anda berhasil menebak angka lagi!");
    //         break;
    //     }
    // }
    // while(1);
    
     printf("  0 1 2 3 4\n");
     for (int i = 0; i < 5; i++)
     {
         printf("%d ", i);
         for(int j = 0; j < 5; j++){
             printf("* ");
         }
         printf("\n");
     }
     printf("=============\n");
     for (int i = 0; i < 5; i++)
     {
         for(int j = 0; j < i+1; j++){
             printf("* ");
         }
         printf("\n");
     }
    
return 0;
}