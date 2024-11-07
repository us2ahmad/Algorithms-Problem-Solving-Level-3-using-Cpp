//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int RandomNumber(int from , int to) 
//{
//	return rand() % (to - from + 1) + from;
//}
//
//void PrintMatrix(int arrya[3][3] ,short rows , short cols,const string& message)
//{
//	cout << message << endl;
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			printf("%0*d \t", 2, arrya[i][j]);
//		}
//		cout << endl;
//	}
//	cout<<"\n";
//}
//
//void FillMatrixWithRandomNumber(int arrya[3][3] , short rows , short cols)
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0;  j < cols;  j++)
//		{
//			arrya[i][j] = RandomNumber(1,10);
//		}
//	}
//}
//
//bool CheckNumberExistsInMatrix(int matrix[3][3], int number, int rows, int cols)
//{
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (matrix[i][j] == number)
//				return true;
//		}
//	}
//
//	return false;
//}
//
//void PrintIntersectedNumbers(int matrix1[3][3], int matrix2[3][3] ,int rows, int cols)
//{
//	int number = 0;
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			number = matrix1[i][j];
//			if(CheckNumberExistsInMatrix(matrix2, number,rows,cols))
//				cout << number << "\t";
//		}
//	}
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix1[3][3];
//	int matrix2[3][3];
//	short rows = 3 ,cols = 3;
//
//	FillMatrixWithRandomNumber(matrix1,rows,cols);
// 
//	FillMatrixWithRandomNumber(matrix2,rows,cols);
//	
//	PrintMatrix(matrix1,rows,cols,"matrix1 : ");
// 
//	PrintMatrix(matrix2,rows,cols,"matrix2 : ");
// 
//
//	PrintIntersectedNumbers(matrix1, matrix2, rows, cols);
//
//	return 0;
//}