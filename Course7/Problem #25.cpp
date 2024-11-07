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
//void LowerFirstLetterOfEachWord(string& text )
//{
//	bool isFirstLetter = true;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ' && isFirstLetter)
//			text[i] = tolower(text[i]);
//
//		isFirstLetter = text[i] == ' ';
//	}
//}
//int main() 
//{
//	string text = ReadText();
//	LowerFirstLetterOfEachWord(text);
//	cout << text;
//	return 0;
//}