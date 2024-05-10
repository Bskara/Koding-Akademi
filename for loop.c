#include <stdio.h>

// Deklarasi struktur untuk menyimpan data string dan integer
struct Data {
    char stringData[50];
    int intData;
};

int main() {
    // Deklarasi matriks menggunakan struktur Data
    struct Data matrix[2][3];

    // Mengisi matriks dengan data
    strcpy(matrix[0][0].stringData, "String 1");
    matrix[0][0].intData = 10;

    strcpy(matrix[0][1].stringData, "String 2");
    matrix[0][1].intData = 20;

    strcpy(matrix[0][2].stringData, "String 3");
    matrix[0][2].intData = 30;

    strcpy(matrix[1][0].stringData, "String 4");
    matrix[1][0].intData = 40;

    strcpy(matrix[1][1].stringData, "String 5");
    matrix[1][1].intData = 50;

    strcpy(matrix[1][2].stringData, "String 6");
    matrix[1][2].intData = 60;

    // Menampilkan isi matriks
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("String: %s, Integer: %d\n", matrix[i][j].stringData, matrix[i][j].intData);
        }
    }

    return 0;
}
