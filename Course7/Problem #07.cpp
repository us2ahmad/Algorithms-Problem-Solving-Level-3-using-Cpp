//#include <iostream>
//
//using namespace std;
//
//void FillMatrix(int matrix[3][3], int rows, int cols) 
//{
//	int counter = 0;
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			matrix[i][j] = ++counter;
//		}
//	}
//
//}
//
//void PrintMatrix(int matrix[3][3], int rows, int cols ,const string& message)
//{
//	printf("The Following is a %dx%d %s matrix :\n",rows,cols, message.c_str());
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			cout << matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//void TransposeMatrix(int matrix[3][3], int rows, int cols,int transposeMatrix[3][3])
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			transposeMatrix[i][j] = matrix[j][i];
//		}
//	}
//}
//
//int main() 
//{
//
//	int matrix[3][3];
//	int transposeMatrix[3][3];
//	int rows = 3, cols = 3;
//
//	FillMatrix(matrix,rows,cols);
//	PrintMatrix(matrix, rows, cols,"ordered");
//	
//	TransposeMatrix(matrix, rows, cols,transposeMatrix);
//
//	PrintMatrix(transposeMatrix, rows, cols,"transpose");
//	
//
//	return 0;
//}