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
//void Multiply2Matrix(int matrix1[3][3], int matrix2[3][3], short rows, short cols, int matrix3[3][3])
//{
//
//	for (short i = 0; i < rows; i++)
//	{		
//		for (short j = 0; j < cols; j++)
//		{
//			matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
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
//	int matrix3[3][3];
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
//	Multiply2Matrix(matrix1, matrix2, rows, cols, matrix3);
//	PrintMatrix(matrix3, rows, cols, "Results : ");
//
//
//	return 0;
//}