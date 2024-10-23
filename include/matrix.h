#ifndef MATRIX_H
#define MATRIX_H

typedef struct 
{
    int columns;
    int rows;
    int fullLength;

    int* matrixPtr;

}Matrix;

Matrix* createMatrix(int columns, int rows);
int deleteMatrix(Matrix* matrixToRemove);

Matrix* addMatrices(Matrix* a, Matrix* b);
Matrix* multiplyMatrices(Matrix* a, Matrix* b);

void gaussianElimination(Matrix* a);



#endif