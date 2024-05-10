
#include <stdio.h>

void insertion_short(int arr[], int lenght);

int main(){
    int arr[] = {8,2,6,10,5,4};
    insertion_short(arr, 6);
    for (int  i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}

void insertion_short(int arr[], int lenght)
{
    for (int i = 1; i < lenght; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
           arr[j + 1] = arr[j];
           j = j - 1;
        }
        arr[j + 1] = temp;
    }
    
}
