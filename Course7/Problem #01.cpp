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
//void PrintMatrix(int arrya[5][5] ,short rows , short cols)
//{
//	printf( "The Following is %dx%d random matrix\n",rows,cols);
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
//void FillMatrix(int arrya[5][5] , short rows , short cols)
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
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int arrya[5][5];
//	short rows = 5 ,cols = 5;
//
//	FillMatrix(arrya,rows,cols);
//
//	PrintMatrix(arrya,rows,cols);
//	
//	return 0;
//}