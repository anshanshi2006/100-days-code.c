//Read and print a matrix.

#include <stdio.h>

int main() 
{
    int rows, cols;//declaration
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    
    printf("\nEnter elements of the matrix:\n");// Reading the matrix
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix is:\n");// Printing the matrix
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
