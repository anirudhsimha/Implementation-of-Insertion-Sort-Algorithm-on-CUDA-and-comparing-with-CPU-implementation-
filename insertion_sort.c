%%writefile insertionsort.c
#include <math.h>
#include <stdio.h>
#include<time.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
clock_t start, end;
double cpu_time_used;
int main()
{ int arr[] = {83,86,77,15,93,35,86,92,49,21,62,27,90,59,63,26,40,26,72,36,11,68,67,29,82,30,62,23,67,35,29,2,22,58,69,67,93,56,11,42,29,73,21,19, 84 ,37 ,98 ,24 ,15 ,70 ,13, 26 ,91 ,80 ,56 ,73 ,62 ,70,96,81 ,5 ,25 ,84 ,27 ,36 ,5 ,46 ,29 ,13 ,57 ,24 ,95,82 ,45,14 ,67 ,34 ,64 ,43 ,50, 87 ,8 ,76, 78, 88, 84, 3, 51, 54, 99, 32, 60 ,76, 68, 39, 12, 26, 86, 94, 39 };
    int n = sizeof(arr) / sizeof(arr[0]);
    float start_time=clock();
    insertionSort(arr, n);
    float end_time= clock();
    printArray(arr, n);
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("time taken is %f seconds ",cpu_time_used);
    return 0;
}
