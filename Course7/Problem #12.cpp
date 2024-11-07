//#include <iostream>
//
//using namespace std;
//
//int RandomNumber(int from, int to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//void FillMatrixWithRandomNumber(int matrix[3][3],int rows,int cols)
//{
//	for (short  i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//void PrintMatrix(int matrix[3][3], int rows, int cols)
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			printf(" %0*d\t",2, matrix[i][j]);
//		}
//
//		cout << endl;
//	}
//}
//
//bool AreTypicalMatrices(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (matrix1[i][j] != matrix2[i][j])
//				return false;
//		}
//	}
//	return true;
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix1[3][3], matrix2[3][3];
//	int rows = 3, cols = 3;
//
//	FillMatrixWithRandomNumber(matrix1,rows,cols);
//
//	cout << "Matrix 1 : \n";
//	PrintMatrix(matrix1,rows,cols);
//
//
//	FillMatrixWithRandomNumber(matrix2, rows, cols);
//
//	cout << "\nMatrix 2 : \n";
//	PrintMatrix(matrix2, rows, cols);
//
//
//	if(AreTypicalMatrices(matrix1,matrix2,rows,cols)) 
//		cout << "\nYes : both Matrices are  typical ." <<endl;
//	else
//		cout << "\nNo : Matrices are Not typical ." <<endl;
//		
//	return 0;
//}