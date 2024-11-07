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
//
//bool CheckletterIsVowel(const char& letter)
//{
//	switch (letter)
//	{
//	case 'a':
//	case 'e':
//	case 'i':
//	case 'o':
//	case 'u':
//		return true;
//
//	default:
//		return false;
//	}
//}
//
//void GetCountVowels(const string& text) 
//{
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (CheckletterIsVowel(tolower(text[i])))
//			cout << text[i]<<"\t";
//	}
//}
//
//int main() 
//{
//
//	string text = ReadText();
//	cout << "Vowels in String are : ";
//	GetCountVowels(text);
//	return 0;
//}
//
