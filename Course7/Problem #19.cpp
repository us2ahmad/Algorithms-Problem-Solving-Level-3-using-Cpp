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
//			printf("%0*d \t", 3, arrya[i][j]);
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
//			arrya[i][j] = RandomNumber(1,100);
//		}
//	}
//}
//
//int GetMaxNumberInMatrix(int arrya[3][3], short rows, short cols)
//{
//	int maxNumber = arrya[0][0];
//	
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (maxNumber < arrya[i][j])
//				maxNumber = arrya[i][j];
//		}
//	}
//	return maxNumber;
//}
//
//int GetMinNumberInMatrix(int arrya[3][3], short rows, short cols)
//{
//	int minNumber = arrya[0][0];
//
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			if (minNumber > arrya[i][j])
//				minNumber = arrya[i][j];
//		}
//	}
//	return minNumber;
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix1[3][3];
//	short rows = 3 ,cols = 3;
//
//	FillMatrixWithRandomNumber(matrix1,rows,cols);
// 
//	PrintMatrix(matrix1,rows,cols,"matrix1 : ");
//
//	cout << "Minimum Number is : " <<GetMinNumberInMatrix(matrix1,rows,cols) <<endl;
//
//	cout << "Max Number is : " <<GetMaxNumberInMatrix(matrix1,rows,cols) <<endl;
//
//
//	return 0;
//}