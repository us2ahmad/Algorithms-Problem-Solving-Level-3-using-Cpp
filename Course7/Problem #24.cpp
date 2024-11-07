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
//void UpperFirstLetterOfEachWord(string& text )
//{
//	bool isFirstLetter = true;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ' && isFirstLetter)
//			text[i] = toupper(text[i]);
//
//		isFirstLetter = text[i] == ' ';
//	}
//}
//int main() 
//{
//	string text = ReadText();
//	UpperFirstLetterOfEachWord(text);
//	cout << text;
//
//	return 0;
//}