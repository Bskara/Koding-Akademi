#include <stdio.h>

int main(){
    int array[] = {10, 1, 7, 5, 4};
    int size = sizeof(array) / sizeof(int);
    printf("Array sebelum di sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    




    return 0;
}