#include <stdio.h>
#include <string.h>

struct person
{
    char nama[50];
    char pekerjaan[50];
    char gaji[64];
};
void input(struct person *x){
    printf("input namamu: ");
    scanf("%s", &x->nama);
    printf("input jenis pekerjaan mu: ");
    scanf("%s", &x->pekerjaan);
    printf("input gaji: ");
    scanf("%s", &x->gaji);
    printf("Namamu: %s\n", x->nama);
    printf("Pekerjaanmu: %s\n", x->pekerjaan);
    printf("Gajimu: %s\n", x->gaji);
};
void cetak(struct person z){
    printf("Namamu: %s\n", z.nama);
    printf("Pekerjaanmu: %s\n", z.pekerjaan);
    printf("Gajimu: %s\n", z.gaji);
};

int main(){
   struct person orang1, orang2, orang3, orang4, orang5;
   input(&orang1);
   input(&orang2);
   strcpy(orang3.nama, "Steve");
   strcpy(orang3.pekerjaan, "Manager");
   strcpy(orang3.gaji, "2.500.000");
   strcpy(orang4.nama, "Mark");
   strcpy(orang4.pekerjaan, "Manager");
   strcpy(orang4.gaji, "2.500.000");
   strcpy(orang5.nama, "Jane");
   strcpy(orang5.pekerjaan, "Direktur");
   strcpy(orang5.gaji, "4.350.000");
   struct person list_pegawai[5] = {orang1, orang2, orang3, orang4, orang5};

for (int i = 0; i < 5; i++)
{
    cetak(list_pegawai[i]);
    // printf("%s\t", list_pegawai[i].nama);
    // printf("%s\n\t", list_pegawai[i].pekerjaan);
    // printf("%s\n", list_pegawai[i].gaji);
    
}
    return 0;
}