#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int arr[], int n)
{
  int i, j, temp;
  int c97 = 0;
  int c16 = 0;
  int c45 = 0;
  int c63 = 0;
  int c13 = 0;
  int c22 = 0;
  int c7 = 0;
  int c58 = 0;
  int c72 = 0;
  
  for(j = 0; j < n-1; j++)
  {
    for(i = 0; i < n-1; i++)
    {
      if(arr[i] > arr[i+1])
      {
        swap(&arr[i], &arr[i+1]);
        switch(arr[i])
          {
            case 97:
            c97++;
            break;

            case 16:
            c16++;
            break;

            case 45:
            c45++;
            break;

            case 63:
            c63++;
            break;

            case 13:
            c13++;
            break;

            case 22:
            c22++;
            break;

            case 7:
            c7++;
            break;

            case 58:
            c58++;
            break;

            case 72:
            c72++;
            break;

            default:
            break;
          }
        
        switch(arr[i+1])
          {
            case 97:
            c97++;
            break;

            case 16:
            c16++;
            break;

            case 45:
            c45++;
            break;

            case 63:
            c63++;
            break;

            case 13:
            c13++;
            break;

            case 22:
            c22++;
            break;

            case 7:
            c7++;
            break;

            case 58:
            c58++;
            break;

            case 72:
            c72++;
            break;

            default:
            break;
          }
      }
    }
  }
  printf("97 swaps %d times.\n", c97);
  printf("16 swaps %d times.\n", c16);
  printf("45 swaps %d times.\n", c45);
  printf("63 swaps %d times.\n", c63);
  printf("13 swaps %d times.\n", c13);
  printf("22 swaps %d times.\n", c22);
  printf("7 swaps %d times.\n", c7);
  printf("58 swaps %d times.\n", c58);
  printf("72 swaps %d times.\n", c72);
}

int main() {
  int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

  printf("Before Run: ");
  for(int i = 0; i < 9; i++)
    {
      printf("%d, ", arr[i]);
    }
  printf("\n");
  
  bubbleSort(arr, 9);

  printf("After Run: ");
  for(int i = 0; i < 9; i++)
    {
      printf("%d, ", arr[i]);
    }
  printf("\n");
  
  return 0;
}