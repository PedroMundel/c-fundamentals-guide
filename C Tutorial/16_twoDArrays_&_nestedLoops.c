#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    printf("%d\n", matrix[0][0]); // 1
    printf("%d\n", matrix[2][1]); // 8
    printf("\n\n");

    printf("Matrix:\n");

    int i, j;

    for (i = 0; i < 3; i++) { // Loop through rows 0, 1, 2
        printf("| ");
        for (j = 0; j < 3; j++) {
            if (j<2){
                printf("%d, ", matrix[i][j]);
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("| \n");
    }

    return 0;
}