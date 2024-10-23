#include "matrix.h"
#include <stdlib.h>

Matrix* createMatrix(int columns, int rows)
{
    Matrix* matrix = (Matrix*)malloc(sizeof(Matrix));
    matrix->columns = columns;
    matrix->rows = rows;
    matrix->fullLength = rows*columns;
    
    matrix->matrixPtr = (int*)malloc(matrix->fullLength * sizeof(int));

    for(int i = 0; i < matrix->fullLength; i++ )    
    {
        matrix->matrixPtr[i] = 0;
    }

    return matrix;
}

int deleteMatrix(Matrix* matrixToRemove)
{
    free(matrixToRemove->matrixPtr);
    free(matrixToRemove);
    return 1;
}