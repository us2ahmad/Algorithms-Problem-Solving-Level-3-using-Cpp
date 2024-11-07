//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//void PrintMatrix(int arrya[3][3] ,short rows , short cols,const string& message)
//{
//	cout << message << endl;
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols; j++)
//		{
//			printf("%d \t", arrya[i][j]);
//		}
//		cout << endl;
//	}
//	cout<<"\n";
//}
//
//bool IsPalindromeMatrix(int arrya[3][3], short rows, short cols) 
//{
//	for (short i = 0; i < rows; i++)
//	{
//		for (short j = 0; j < cols/2; j++)
//		{
//			if (arrya[i][j] != arrya[i][cols - j - 1])
//				return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	int matrix2[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
//	short rows = 3 ,cols = 3;
// 
//	PrintMatrix(matrix2,rows,cols,"matrix1 : ");
//
//	if (IsPalindromeMatrix(matrix2, rows, cols))
//		cout << "Yes : Matrix is Palindrome \n";
//	else 
//		cout << "No : Matrix is Not Palindrome \n";
//
//	return 0;
//}