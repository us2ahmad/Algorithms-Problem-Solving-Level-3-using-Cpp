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
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix[3][3];
//	int rows = 3, cols = 3;
//
//	FillMatrixWithRandomNumber(matrix,rows,cols);
//
//	cout << "Matrix 1 : \n";
//	PrintMatrix(matrix,rows,cols);
//
//	cout << "\nSum Of Matrix1 Is : " << SumFieldOfMatrix(matrix, rows, cols) <<endl;
//	
//	return 0;
//}