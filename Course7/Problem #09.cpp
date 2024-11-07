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
//
//		}
//		cout << endl;
//	}
//}
//void PrintMiddleCol(int matrix[3][3], int rows, int cols)
//{
//	cout << "\nMiddle Col Of Matrix is : \n";
//	
//	short middleCol = cols / 2;
//
//	for (short i = 0; i < rows; i++)
//	{
//		printf(" %0*d\t", 2, matrix[i][middleCol]);
//	}
//
//	cout << endl;
//}
//
//void PrintMiddleRow(int matrix[3][3], int rows, int cols)
//{
//	cout << "\nMiddle Row Of Matrix is : \n";
//
//	short middleRow = rows / 2;
//
//	for (short i = 0; i < cols; i++)
//	{
//		printf(" %0*d\t", 2, matrix[middleRow][i]);
//	}
//
//	cout << endl;
//}
//
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix[3][3];
//	int rows = 3, cols = 3;
//	FillMatrixWithRandomNumber(matrix,rows,cols);
//	cout << "Matrix 1 : \n";
//	PrintMatrix(matrix,rows,cols);
//
//	PrintMiddleRow(matrix,rows,cols);
//	PrintMiddleCol(matrix,rows,cols);
//	
//	return 0;
//}