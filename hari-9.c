#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    // char teks[] = "\n";
//     int angkafavorit[] = {10, 7, 1};
//     file = fopen("bagas.txt", "a");
//     for (int i = 0; i < 3; i++)
//     {
//         fprintf(file, "%d\n", angkafavorit[i]);
//     }

    char teks[5][50] = {
        "Nama saya Bambang.",
        "Mitochondria is the powerhouse of the cell",
        "Lorem ipsum dolor set amet",
        "gak bahaya ta",
        "semongko"
    };
    // teks[5][50] masukkan ke file
    
//     // fprintf(file, "%s", teks);
// //  fprintf(variable FILE, format specifier, value)
//     fclose(file);
    //     fopen("namafile", "mode")
    // 3 MODE
    // MODE R
    // read -> membaca
    // membaca file

    // MODE W
    // write -> menulis

    // MODE A
    // append -> menambahkan 

    // jika file tidak ada, mode W dan A akan membuat file itu secara otomatis
    // jika file tidak ada dan modenya R, error

    // read file
    file = fopen("bagas.txt", "r+");
    // fgetc -> getchar
    // fgets -> getstring
    // fread -> proses seperti 
    return 0;
}