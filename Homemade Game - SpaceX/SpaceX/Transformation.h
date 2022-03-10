#ifndef _HEADERS_H
#define _HEADERS_H

#include <stdlib.h>
#include "Collision.h"

struct Matrix2D
{
	int rows;
	int cols;
	double ** Body;
};

//Matrices Prototypes
Matrix2D BuildMatrix(int rows, int cols);
void FreeMatrix( Matrix2D M);
int IsSquare( Matrix2D M);
Matrix2D GetTranspose( Matrix2D M);
Matrix2D MatMul( Matrix2D M1,  Matrix2D M2);
void InterchangeRows( Matrix2D M, int a, int b);
void InterchangeColumns( Matrix2D M, int a, int b);
void ScMul( Matrix2D M, int row, double scalar);
void RowAddition( Matrix2D M,int row1, int row2, double scalar);
int CheckZeroRow( Matrix2D M);
int CheckZero_Matrix_( Matrix2D M);
Matrix2D RowReduction( Matrix2D M);
Matrix2D RowColumnElimination( Matrix2D M, int row, int col);
double Determinant( Matrix2D M);
Matrix2D Inverse( Matrix2D M);

//Transformations Prototypes
Matrix2D GetRotationMatrixAroundOrigin(double angle);
Matrix2D GetTranslationMatrix( Vector2D V);
Matrix2D GetReflectionMatrix(char axis);
Matrix2D GetxScalingMatrix(double scale);
Matrix2D GetyScalingMatrix(double scale);
Matrix2D GetOverallScalingMatrix(double scale);
Matrix2D GetArbitraryRotationMatrix(Point2D P, double angle);
Matrix2D GetArbitraryReflectionMatrix(Line2D L);

Vector2D TransformVector(Matrix2D M, Vector2D V);
Point2D TransformPoint(Matrix2D M, Point2D P);

#endif