//#include <iostream>
//
//using namespace std;
//
//int ReadNumber() 
//{
//	cout << "Enter the number to count in matrix ? ";
//
//	int number = 0;
//	cin >> number;
//
//	return number;
//}
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
//			matrix[i][j] = RandomNumber(0, 10);
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
//			printf(" %d\t",matrix[i][j]);
//		}
//
//		cout << endl;
//	}
//}
//
//int GetNumberZeroCount(int matrix[3][3], int rows, int cols) 
//{
//	short numberCount = 0;
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (matrix[i][j] == 0)
//				numberCount++;
//		}
//	}
//	
//	return numberCount;
//}
//
//bool IsMatrixSparse(int matrix[3][3], int rows, int cols) 
//{
//	return (GetNumberZeroCount(matrix, rows, cols) > ((rows * cols) / 2));
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix1[3][3];
//
//	int rows = 3, cols = 3;
//
//	FillMatrixWithRandomNumber(matrix1,rows,cols);
//
//	cout << "Matrix 1 : \n";
//	PrintMatrix(matrix1,rows,cols);
//
//	if (IsMatrixSparse(matrix1, rows, cols))
//		cout << "\nYes : It's Sparse .\n";
//	else
//		cout << "\nNo : It's Not Sparse .\n";
//
//	return 0;
//}
//
