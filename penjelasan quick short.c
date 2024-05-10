#include <stdio.h>

void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    
    int pivot = arr[low];
    int tempLow = low;
    int tempHigh = high;
    while(tempLow < tempHigh){
        
        // cari element lebih besar dari pivot
        while(arr[tempLow] <= pivot && tempLow <= high - 1){
            tempLow++;
        }

        // cari element lebih kecil dari pivot dari belakang
        while(arr[tempHigh] > pivot && tempHigh >= low + 1){
            tempHigh--;
        }
        if(tempLow < tempHigh) swap(&arr[tempLow], &arr[tempHigh]);
    }
    swap(&arr[low], &arr[tempHigh]);
    return tempHigh;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }
}

int main(){
    int angka[] = { 19, 17, 15, 12, 16, 18, 4, 11, 13 };
    int n = sizeof(angka) / sizeof(int);
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", angka[i]);
    }
    quickSort(angka, 0, n-1);
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", angka[i]);
    }
    return 0;
}