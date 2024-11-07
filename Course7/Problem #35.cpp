//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string ReadText() 
//{
//	cout << "Please Enter Your String ?\n";
//	
//	string text = "";
//	
//	getline(cin, text);
//	
//	return text;
//}
//
//void PrintEachWordOnALine(string& text)
//{
//	string delim = " ";
//	short pos = 0;
//	string sWord = "";
//
//	while ( (pos = text.find(delim)) != string::npos)
//	{
//		sWord = text.substr(0,pos);
//
//		if (sWord != "") 
//			cout << sWord << endl;
//		
//	
//		text.erase(0, pos + delim.length());
//	}
//
//	if (text != "") 
//		cout << text << endl;
//}
//
//int main() 
//{
//	string text = ReadText();
//
//	PrintEachWordOnALine(text);
//
//	system("pause >0");
//
//	return 0;
//}