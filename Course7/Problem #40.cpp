//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string JoinString(const vector<string>& vWords,const string& delim = " ")
//{
//	string text ="";
//	
//	for (short i = 0; i < vWords.size(); i++)
//	{
//		text += vWords[i] + ( i < vWords.size() - 1 ? delim : "" );
//	}
//	return text;
//}
//
//string JoinString(const string aWords[],short arraySize, const string& delim = " ")
//{
//	string text = "";
//
//	for (short i = 0; i < arraySize; i++)
//	{
//		text += aWords[i] + (i < arraySize - 1 ? delim : "");
//	}
//	return text;
//}
//
//int main() 
//{
//	vector<string> vWords {"Ahmad","Yassin","Mahmoud"};
//	string aWords[] {"Ahmad","Yassin","Mahmoud"};
//	
//	cout << "vector after join :\n" << JoinString(vWords, "@@") << endl;
//	cout << "array after join :\n" << JoinString(aWords,3, "@@") << endl;
//	
//	system("pause >0");
//
//	return 0;
//}