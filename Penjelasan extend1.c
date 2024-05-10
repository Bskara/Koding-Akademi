#include <stdio.h>

void bubbleSort(int arr[], int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        showArray(arr, length);
    }
}

void selectionSort(int arr[], int length){
    for (int i = 0; i < length-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if(arr[j] < arr[min]) min = j; 
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        showArray(arr, length);
    }
}

void insertionSort(int arr[], int length){
    for (int i = 1; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(key < arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        showArray(arr, length);
    }
}

int linearSearch(int search, int arr[], int length){
    for(int x = 0; x < length; x++){
        if(arr[x] == search) return x;
    }
    return -1;
}

int binarySearch(int search, int arr[], int length){
    int left = 0, right = length - 1;
    int middle;
    while(right >= left){
        middle = (left + right) / 2;
        if(arr[middle] == search)
            return middle;
        else{
            if(search < arr[middle]) // SISI KIRI
                right = middle - 1;
            else // SISI KANAN
                left = middle + 1;
        }
    }
    return -1;
}

void showArray(int arr[], int length){
    printf("[");
    for (int i = 0; i < length-1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[length-1]);
}

int main(){
    int angka[] = {27, 87, 40, 12, 31, 58, 38};
    printf("Array awal:\n");
    showArray(angka, 7);
    printf("Proses sorting:\n");

    // BUBBLE SORT
    // bubbleSort(angka, 7);

    // SELECTION SORT
    selectionSort(angka, 7);

    // INSERTION SORT
    // insertionSort(angka, 7);

    printf("Array setelah sorting:\n");
    showArray(angka, 7);

    int input;
    printf("Cari angka: ");
    scanf("%d", &input);
    int result;
    
    result = linearSearch(input, angka, 7);
    result = binarySearch(input, angka, 7);

    if(result != -1) 
        printf("Angka ditemukan di index ke-%d.\n", result);
    else printf("Angka tidak ada.\n");
    
    return 0;
}