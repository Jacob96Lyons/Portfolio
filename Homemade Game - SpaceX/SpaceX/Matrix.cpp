#include "Transformation.h"

 Matrix2D BuildMatrix(int rows, int cols)
{
	Matrix2D M;
	//allocation of a two-dimensional array of doubles
	double **f;

	int i = 0, j = 0;
	f = (double**)malloc(sizeof(double*)*rows);

	for(; i < rows; ++i)
		*(f+i) = (double*)malloc(sizeof(double)*cols);

	for(i = 0;i < rows;i++)
		for(j = 0;j < cols; j++)
			f[i][j] = 0;
				
	M.rows = rows;
	M.cols = cols;
	M.Body = f;

	return M;
}

void FreeMatrix( Matrix2D M)
{
	int i;

	for(i=0;i<M.rows;i++)
		free(M.Body[i]);
	free(M.Body);
}

Matrix2D GetTranspose( Matrix2D M)
{
	 Matrix2D Transpose;
	int i, j;
	Transpose = BuildMatrix(M.cols,M.rows);

	for(i = 0;i < Transpose.rows;i++)
		for(j = 0;j < Transpose.cols;j++)
			Transpose.Body[i][j] = M.Body[j][i];

	return Transpose;
}

int IsSquare( Matrix2D M)
{
	if(M.cols == M.rows)
		return 1;
	else 
		return 0;
}

 Matrix2D MatMul( Matrix2D M1,  Matrix2D M2)
{
	 Matrix2D M;
	int i,j,k;
	
	M = BuildMatrix(M1.rows,M2.cols);

	M.rows = M1.rows;
	M.cols = M2.cols;


	for(i = 0; i < M1.rows; i++)
		for(j = 0; j < M2.cols; j++)
			for(k = 0; k < M1.cols; k++)
                M.Body[i][j] += M1.Body[i][k]*M2.Body[k][j];
	return M;
}

void InterchangeRows( Matrix2D M, int a, int b)
{
	double f = 0;
	int i;
	for (i = 0; i < M.cols; i++)
		{
			f=M.Body[a][i];
			M.Body[a][i]=M.Body[b][i];
			M.Body[b][i]=f;
		}
}

void InterchangeColumns( Matrix2D M, int a, int b)
{
	double f = 0;
	int i;
	for (i = 0; i < M.rows; i++)
		{
			f=M.Body[i][a];
			M.Body[i][a]=M.Body[i][b];
			M.Body[i][b]=f;
		}
}

void ScMul( Matrix2D M, int row, double scalar)
{
	int i;
	for (i = 0; i < M.cols; i++)
		M.Body[row][i] = scalar*M.Body[row][i];
}

void RowAddition( Matrix2D M,int row1, int row2, double scalar)
{
	int i;
	for (i = 0; i < M.cols; i++)
		M.Body[row1][i] = M.Body[row1][i] + scalar*M.Body[row2][i];
}

int CheckZeroRow( Matrix2D M)
{
	int i, j;
	int counter = 0;
	
	for(i = 0;i < M.rows; i++)
	{
		counter = 0;

		for(j = 0;j < M.cols; j++)
		{
			if(M.Body[i][j] == 0)
				counter++;
		}
		if(counter == M.cols)
				return 1;
	}

	return 0;
}

int CheckZeroColumn( Matrix2D M)
{
	 Matrix2D T;
	T = GetTranspose(M);
	
	if(CheckZeroRow(T) == 0)
		return 0;
	else 
		return 1;
}

int CheckZeroMatrix( Matrix2D M)
{
	int i, j;

	for(i = 0; i < M.rows; i++)
		for(j = 0; j < M.cols; j++)
		{
			if(M.Body[i][j] != 0)
				return 0;
		}
		
	return 1;
}

 Matrix2D RowColumnElimination( Matrix2D M, int row, int col)
{
	int i, j;
	 Matrix2D R, temp;
	
	R = BuildMatrix(M.rows - 1, M.cols - 1);
	temp = BuildMatrix(M.rows, M.cols);
	for(i = 0; i <temp.rows; i++)
		for(j = 0; j <temp.cols; j++)
			temp.Body[i][j] = M.Body[i][j];	
	
	
	for(i = row; i <temp.rows-1; i++)
		InterchangeRows(temp,i,i+1);

	for(j = col; j <temp.cols-1; j++)
		InterchangeColumns(temp,j,j+1);

	for(i = 0; i < temp.rows-1; i++)
		for(j = 0; j < temp.cols-1; j++)	
			R.Body[i][j] = temp.Body[i][j]; 
	
	FreeMatrix(temp);

	return R;
}

double Determinant( Matrix2D M)
{
	if(IsSquare(M) == 1)
	{
		int i = 0;
		double det = 0;
		 Matrix2D Reduced;
		
		if(CheckZeroColumn(M)  == 1 || CheckZeroRow(M) == 1)
			return 0;

		if(M.cols == 1)
			return M.Body[0][0];
		else if(M.cols == 2)
			return M.Body[0][0]*M.Body[1][1] - M.Body[0][1]*M.Body[1][0];
		else
		{
			for(i = 0; i < M.cols;i++)
			{			
				Reduced = RowColumnElimination(M,0,i);
				det += pow(-1.f,i)*M.Body[0][i]*Determinant(Reduced);			
				FreeMatrix(Reduced);
			}
			return det;
		}
	}

	return 0;
}

 Matrix2D Inverse( Matrix2D M)
{
	int i, j;
	 Matrix2D Cof;

	if(Determinant(M) != 0)
	{
		if(M.cols == 1 && M.rows == 1)
		{
			Cof = BuildMatrix(1,1);
			Cof.Body[0][0] = 1/M.Body[0][0];
		}
		else
		{
		Cof = BuildMatrix(M.cols,M.rows);

		for(i = 0; i < M.rows; i++)
			for(j = 0; j < M.cols; j++)
				Cof.Body[j][i] = pow(-1.f,i+j)*Determinant(RowColumnElimination(M,i,j))/Determinant(M);
		}
	}

	return Cof;
}