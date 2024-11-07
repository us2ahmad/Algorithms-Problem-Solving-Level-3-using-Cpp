//#include <iostream>
//
//using namespace std;
//
//int ReadNumber() 
//{
//	cout << "Please Enter the number to look for in matrix ? ";
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
//			printf(" %0*d\t",2,matrix[i][j]);
//		}
//
//		cout << endl;
//	}
//}
//
//bool CheckNumberExistsInMatrix(int matrix[3][3], int rows, int cols,int number) 
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
//	int number = ReadNumber();
//
//	if (CheckNumberExistsInMatrix(matrix1, rows, cols, number))
//		cout << "\nYes It's there\n";
//	else 
//		cout << "\nNo It's Not there\n";
//
//
//	return 0;
//}
//
