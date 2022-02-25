// Insertion sort
#include <stdio.h>

void cetak_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size)
{
  for (int step = 1; step < size; step++)
  {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main()
{
  int data[] = {23, 67, 89, 5, 45, 20, 15, 27};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Array diurutkan dari yang terkecil:\n");
  cetak_array(data, size);
}

// code from https://www.programiz.com/dsa/insertion-sort
