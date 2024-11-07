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
//			matrix[i][j] = RandomNumber(0, 1);
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
//bool IsIdentityMatrix(int matrix1[3][3], int rows, int cols)
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (i == j && matrix1[i][j] != 1)
//				return false;
//
//			else if  (i != j && matrix1[i][j] != 0)
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
//	int matrix1[3][3];
//
//	int rows = 3, cols = 3;
//
//	FillMatrixWithRandomNumber(matrix1,rows,cols);
//
//	cout << "Matrix 1 : \n";
//	PrintMatrix(matrix1,rows,cols);
//
//
//	if(IsIdentityMatrix(matrix1,rows,cols))
//		cout << "\nYes : Matrices is Identity ." <<endl;
//	else
//		cout << "\nNo :  Matrices is Not Identity ." <<endl;
//		
//	return 0;
//}
//


/*	this is identity matrix 
	1	0	0
	0	1	0
	0	0	1
*/