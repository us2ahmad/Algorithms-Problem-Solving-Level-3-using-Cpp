//#include <iostream>
//#include <string>
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
//string  TrimRight(string text)
//{
//	for (short i = text.length() - 1; i >= 0; i--)
//	{
//		if (text[i] != ' ')
//		{
//			return text.erase(i + 1 , text.length() - 1);
//		}
//	}
//
//	return "";
//}
//
//string TrimLeft(string text)
//{
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ') 
//		{
//			return text.erase(0, i);
//		}
//	}	
//
//	return "";
//}
//
//string Trim(string text)
//{
//	return TrimLeft(TrimRight(text));
//}
//
//int main() 
//{
//	string text = ReadText();
//
//	cout << "TrimLeft    = " << TrimLeft(text) << endl;
//	cout << "TrimRight   = " << TrimRight(text) << endl;
//	cout << "Trim	    = " << Trim(text) << endl;
//
//	system("pause >0");
//
//	return 0;
//}