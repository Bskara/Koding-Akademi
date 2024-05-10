#include <stdio.h>
    
int main(){
    int Value[5] = {100, 200, 300, 400, 500};
    int *ptr = Value;
    int total;
    int size = sizeof Value / sizeof(int);
    float avg;

    for (int i = 0; i < 5; i++)
    { 
        total += ptr[i];
    }
     printf("%d\n", total);
     avg = (float)total / (float)size;
     printf("average from this data is: %.2f", avg);
    return 0;
}