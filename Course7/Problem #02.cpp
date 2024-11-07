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
//void PrintMatrix(int arrya[3][3] ,short rows , short cols)
//{
//	printf("The Following is %dx%d random matrix\n",rows,cols);
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			cout << setw(3) << arrya[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//void FillMatrix(int arrya[3][3] , short rows , short cols)
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
//void PrintSumRowInMatrix(int arrya[3][3], short rows, short cols)
//{
//	cout << "\nThe the following are the sum of each row in the matrix :\n" ;
//
//	for (short i = 0; i < rows; i++)
//	{
//		short sumRowValue = 0;
//		
//		for (short j = 0; j < cols; j++)
//		{
//			sumRowValue +=	arrya[i][j];
//		}
//
//		printf(" Row %d Sum = %d \n",i+1,sumRowValue);
//	}
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int arrya[3][3];
//	short rows = 3 ,cols = 3;
//
//	FillMatrix(arrya,rows,cols);
//
//	PrintMatrix(arrya,rows,cols);
//
//	PrintSumRowInMatrix(arrya,rows,cols);
//	
//	return 0;
//}