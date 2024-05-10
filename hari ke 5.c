#include <stdio.h>

int main(){
    // syntax -> array
    // datatype namavariable[size];


    // membuat array
    // int angka[5];
    char kata[10]; // string 10 huruf
    float desimal[12];

    // int angka[5] = {0};
    int angka[5];
      //            0  1  2  3  4.....

    int size = sizeof(angka) / sizeof(int);
            // sizeof(array) / sizeof(datatype)
            // sizeof(array) / sizeof(array[0])

    printf("Ukuran array: %d\n", size);
    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", angka[i]);
    }


    // array[100]
    //  0,  1,, 2,  3,  4, .......
    // {10, 20, 30, 40, 50}
    // isi angka 90 di index ke-2
    // hasil akhirnya harusnya= {10, 20, 90, 30, 40 ,50}

    // 1. array awal = {10,20,30,40,50}
    // 2. copy array setelah index ke-2
    // {10, 20, 30, 30, 40, 50}
    //  0   1   2   3   4   5
    // 3. valuenya diisi
    // {10, 20, 90, 30, 40, 50}

        // array 2 dimensi
         //   ROW COLUMN
   // int matrix[2][2] = {
   //     {1, 4},  // [0]
     //   {6, -2}  // [1]
    //  [0] [1]
   // };


    return 0;
}