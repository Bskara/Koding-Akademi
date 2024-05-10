#include <stdio.h>
#include <string.h>
struct market
{
    char item[100];
    int harga;
    int stok;
};


int main(){
    struct market brg1, brg2, brg3, brg4, brg5;
    strcpy(brg1.item, "Sabun");
    brg1.harga = 5000;
    brg1.stok = 5;
    printf("%s, Harga = %d, stok tersisa = %d", brg1.item, brg1.harga, brg1.stok);


    return 0;
}