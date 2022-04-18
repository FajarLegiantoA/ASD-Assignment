#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] < element)
            start_index = middle + 1;
        else
            end_index = middle - 1;
    }
    return -1;
}
int main(void)
{
    int array[] = {3, 25, 33, 38, 45, 68, 72, 91, 101, 154};
    int n = 10;
    int element = 154;
    int found_index = iterativeBinarySearch(array, 0, n - 1, element);

    printf("Ini adalah contoh program Binary Search");
    if (found_index == -1)
    {
        printf("Angka tersebut tidak ditemukan ");
    }
    else
    {
        printf("Angka ditemukan pada lokasi/index : %d", found_index);
    }
    return 0;
}
