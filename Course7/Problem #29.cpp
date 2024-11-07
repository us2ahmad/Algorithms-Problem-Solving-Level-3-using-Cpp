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
//	getline(cin, text);
//
//	return text;
//}
//int GetCountUpperCase(const string& text)
//{
//	int count = 0;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (isupper(text[i]))
//			count++;
//
//	}
//	return count;
//}
//int GetCountLowerCase(const string& text)
//{
//	int count = 0;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (islower(text[i]))
//			count++;
//	}
//	return count;
//}
//void PrintInfoString(const string& text)
//{
//	cout << "String Length : " << text.length() << endl;
//	cout << "Capital Letters Count = " << GetCountUpperCase(text) << "\n";
//	cout << "Small Letters Count = " << GetCountLowerCase(text) << "\n";
//}
//
//int main() 
//{
//	string text = ReadText();
//	PrintInfoString(text);
//	return 0;
//}