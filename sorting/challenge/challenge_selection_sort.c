// Selection sort in C
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
    {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}

void CetakArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main()
{
  int data[] = {23, 67, 89, 5, 45, 20, 15, 27};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Array diurutkan dari yang terkecil:\n");
  CetakArray(data, size);
}

// code from https://www.programiz.com/dsa/selection-sort
