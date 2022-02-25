//Bubble Sort
#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void cetak_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {10, 8, 13, 88, 21, 43};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printf("Array diurutkan dari yang terkecil:\n");
    cetak_array(data, size);
}

//https://www.programiz.com/dsa/bubble-sort
