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
//int GetCountVowels(const string& text) 
//{
//	int count = 0;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (CheckletterIsVowel(tolower(text[i])))
//			count++;
//	}
//	return count;
//}
//
//int main() 
//{
//
//	string text = ReadText();
//	cout << "Number of vowels is : "<<GetCountVowels(text);
//	return 0;
//}
//
