#include <stdio.h>
int main(){
    int desimal,choice;
    int binary[32];
    int i = 0;
    printf("Input nilai desimal: ");
    scanf("%d", &desimal);

    printf("Pilih jenis konvert yang anda inginkan:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadesimal\n");
    printf("Masukkan pilihan anda (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        while (desimal > 0)
        {
            binary[i] = desimal % 2; 
            desimal /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
        break;
    case 2:
        printf("Octal: %o\n", desimal);
        break;
    case 3:
        printf("Hexa: %X\n", desimal);
        break;
    
    default:
        printf("angka tidak valid");
        break;
    }


    return 0;
}