#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int array[5000] = rand();
    printf("%d ", array);
    return 0;
}