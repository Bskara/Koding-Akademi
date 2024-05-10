#include <stdio.h>

// Fungsi untuk mengonversi desimal ke biner dan mengembalikan string biner
char* decToBinary(int n) {
    static  char binary[32];
    int i = 0;

    // Mengonversi bilangan desimal ke biner
    while (n > 0) {
        binary[i] = n % 2 + '0';
        n = n / 2;
        i++;
    }

    // Mengakhiri string dengan karakter null
    binary[i] = '\0';

    // Membalikan string biner
    return binary;
}

// Fungsi untuk mengonversi desimal ke oktal dan mengembalikan string oktal
char* decToOctal(int n) {
    static char octal[100];
    int i = 0;

    // Mengonversi bilangan desimal ke oktal
    while (n > 0) {
        octal[i] = n % 8 + '0';
        n = n / 8;
        i++;
    }

    // Mengakhiri string dengan karakter null
    octal[i] = '\0';

    // Membalikan string oktal
    return octal;
}

// Fungsi untuk mengonversi desimal ke heksadesimal dan mengembalikan string heksadesimal
char* decToHexadecimal(int n) {
    static char hexadecimal[100];
    int i = 0;

    // Mengonversi bilangan desimal ke heksadesimal
    while (n > 0) {
        int rem = n % 16;
        if (rem < 10) {
            hexadecimal[i] = rem + '0';
        } else {
            hexadecimal[i] = rem + 'A' - 10;
        }
        n = n / 16;
        i++;
    }

    // Mengakhiri string dengan karakter null
    hexadecimal[i] = '\0';

    // Membalikan string heksadesimal
    return hexadecimal;
}

int main() {
    int decimal, choice;

    // Meminta pengguna memasukkan bilangan desimal
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    // Meminta pengguna memilih jenis konversi
    printf("Pilih jenis konversi:\n");
    printf("1. Biner\n");
    printf("2. Oktal\n");
    printf("3. Heksadesimal\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &choice);

    // Memanggil fungsi konversi berdasarkan pilihan pengguna dan menampilkan hasilnya
    switch (choice) {
        case 1:
            printf("Biner: %s\n", decToBinary(decimal));
            break;
        case 2:
            printf("Oktal: %s\n", decToOctal(decimal));
            break;
        case 3:
            printf("Heksadesimal: %s\n", decToHexadecimal(decimal));
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
