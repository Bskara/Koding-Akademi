#include <stdio.h>
int main()
{
    char nama[100];
    printf("Siapa Namamu: ");
    scanf("%s", &nama);

    int umur;
    printf("Umurmu Berapa: ");
    scanf("%d", &umur);

    char hobi[100];
    printf("Apa Hobimu: ");
    scanf("%s", &hobi);

    printf("Halo %s!, Umurmu %d, dan kamu suka %s", nama, umur, hobi);

    return 0;
}