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
//void PrintMatrix(int matrix[3][3], int rows, int cols)
//{
//	printf("The Following is a %dx%d ordered matrix :\n",rows,cols);
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
//int main() 
//{
//
//	int matrix[3][3];
//	int rows = 3, cols = 3;
//
//	FillMatrix(matrix,rows,cols);
//	PrintMatrix(matrix, rows, cols);
//
//	return 0;
//}