#include <stdio.h>

/* Arrays: a collection of variables of the same type */
/* 1D array: a single row of elements */
/* 2D array: a table of elements */
/* 3D array: a cube of elements */

int main()
{
   /*Indexes:         0  1  2  3  4   */
    int numbers[5] = {1, 2, 3, 4, 5}; // 1D array of integers
    numbers[3] = 69;
    printf("Array elements: %d", numbers[3]);
    printf("\nArray size: %d", sizeof(numbers) / sizeof(numbers[0])); // size of the array
    printf("\nArray size: %d", sizeof(numbers)); // size of the array in bytes
    return 0;
}








/*
int numbers[5]; // 1D array of integers
int i, sum = 0;
float average;
int matrix[3][3]; // 2D array of integers
int j, k;
int cube[2][3][4]; // 3D array of integers
int l, m, n;
int *p; // pointer to an integer
int *array; // pointer to an array of integers
int size = sizeof(numbers) / sizeof(numbers[0]); // size of the array 

printf("%d")
*/