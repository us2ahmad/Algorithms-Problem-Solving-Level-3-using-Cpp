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
//void PrintFirstLetterOfEachWord(const string& text )
//{
//	bool isFirstLetter = true;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if(text[i] != ' ' && isFirstLetter)
//			cout << text[i] <<"\n";
//	
//		isFirstLetter = text[i] == ' ';
//	}
//}
//
//int main() 
//{
//	string text = ReadText();
//
//	PrintFirstLetterOfEachWord(text);
//
//	return 0;
//}