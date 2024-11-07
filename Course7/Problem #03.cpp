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
//int RowSum(int arr[3][3], int row, int col)
//{
//	int sum = 0;
//
//	for (short i = 0; i < col; i++)
//	{
//		sum += arr[row][i];
//	}
//
//	return sum;
//}
//
//void FillArrayFromMatrixOfRowSum(int arrya[3][3], short rows, short cols,int array[])
//{
//	for (short i = 0; i < rows; i++)
//	{
//		array[i] = RowSum(arrya, i, cols);
//	}
//}
//
//void PrintArray(int array[],int length)
//{
//	cout << "\nThe the following are the sum of each row in the matrix :\n";
//
//	for (short i = 0; i < length; i++)
//	{
//		printf(" Row %d Sum = %d \n",i+1, array[i]);
//	}
//}
//
//int main() 
//{
//	srand(unsigned(time(NULL)));
//
//	int matrix[3][3];
//	int array[3];
//
//	FillMatrixWithRandomNumber(matrix,3,3);
//
//	PrintMatrix(matrix,3,3);
//
//	FillArrayFromMatrixOfRowSum(matrix,3,3, array);
//
//	PrintArray(array, 3);
//
//	return 0;
//}