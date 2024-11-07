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
//int SumFieldOfMatrix(int matrix[3][3], int rows, int cols)
//{
//	int  sum = 0;
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			sum += matrix[i][j];
//		}
//	}
//	
//	return sum;
//}
//
//bool AreEqualMatrices(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
//{
//	return  SumFieldOfMatrix(matrix1, rows, cols) == SumFieldOfMatrix(matrix2, rows, cols);
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
//	if(AreEqualMatrices(matrix1,matrix2,rows,cols)) 
//		cout << "\nYes : both Matrices are  equal ." <<endl;
//	else
//		cout << "\nNo : Matrices are Not equal ." <<endl;
//		
//	return 0;
//}