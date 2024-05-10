#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Insertion_Sort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
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

void Bubble_Sort(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int tempLow = low;
    int tempHigh = high;
    while (tempLow < tempHigh)
    {

        while (arr[tempLow] <= pivot && tempLow <= high - 1)
        {
            tempLow++;
        }

        while (arr[tempHigh] > pivot && tempHigh >= low + 1)
        {
            tempHigh--;
        }
        if (tempLow < tempHigh)
            swap(&arr[tempLow], &arr[tempHigh]);
    }
    swap(&arr[low], &arr[tempHigh]);
    return tempHigh;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int Sequential_Search(int search, int arr[], int length)
{
    for (int x = 0; x < length; x++)
    {
        if (arr[x] == search)
            return x;
    }
    return -1;
}

int Binary_Search(int search, int arr[], int length)
{
    int left = 0, right = length - 1;
    int middle;
    while (right >= left)
    {
        middle = (left + right) / 2;
        if (arr[middle] == search)
            return middle;
        else
        {
            if (search < arr[middle]) // SISI KIRI
                right = middle - 1;
            else // SISI KANAN
                left = middle + 1;
        }
    }
    return -1;
}

int main()
{
    int choice1, choice2, found;
    clock_t start, end;
    double time_used;
    do
    {
        printf("PROGRAM PENGURUTAN DAN PENCARIAN\n\n");
        printf("1. Insertion Sort\n");
        printf("2. Bubble Sort\n");
        printf("3. Quick Sort\n");
        printf("4. Sequential Search\n");
        printf("5. Binary Search\n");
        printf("0. Exit\n");
        printf("Masukkan pilihan anda : \n");
        scanf("%d", &choice1);
        if (choice1 != 0)
        {
            printf("Menu yang disajikan\n");
            printf("1. 5000\n");
            printf("2. 16000\n");
            printf("3. 64000\n");
            printf("Masukkan pilihan : \n");
            scanf("%d", &choice2);
            int size = -1;
            switch (choice2)
            {
            case 1:
                size = 5000;
                break;
            case 2:
                size = 16000;
                break;
            case 3:
                size = 64000;
                break;
            }
            int array[size];
            srand(time(NULL));
            for (int i = 0; i < size; i++)
            {
                array[i] = rand();
            }
            int search;
            switch (choice1)
            {
            case 1:
                start = clock();
                Insertion_Sort(array, size);
                end = clock();
                break;
            case 2:
                start = clock();
                Bubble_Sort(array, size);
                end = clock();
                break;
            case 3:
                start = clock();
                quickSort(array, 0, size - 1);
                end = clock();
                break;
            case 4:
                srand(time(NULL));
                search = rand();
                start = clock();
                found = Sequential_Search(search, array, size);
                end = clock();
                if (found == -1)
                {
                    printf("data tidak ditemukan");
                }
                printf("data ditemukan di index ke %d\n", found);
                break;
            case 5:
                srand(time(NULL));
                search = rand();
                quickSort(array, 0, size - 1);
                start = clock();
                found = Binary_Search(search, array, size);
                end = clock();
                if (found == -1)
                {
                    printf("data tidak ditemukan");
                }
                printf("data ditemukan di index %d\n", found);
                break;
            }
            time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("waktu yang dibutuhkan: %f\n", time_used);
        }
    } while (choice1 != 0);

    return 0;
};
