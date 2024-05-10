#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *file;
    file = fopen("assignment1.txt", "w");
    int angka_random[] = {221, 13, 24, 412, 1371, 3};
    for (int i = 0; i < 6; i++)
    {
        fprintf(file, "%d\n", angka_random[i]);
    }

    fclose(file);
    file = fopen("assignment1.txt", "r");
    char teks[6];
    while (fgets(teks, sizeof(teks), file))
    {
        int temp = atoi(teks);
        if (temp % 2 == 1)
        {
            printf("%d\n", temp);
        }
        
    }
    fclose(file);

    return 0;
}