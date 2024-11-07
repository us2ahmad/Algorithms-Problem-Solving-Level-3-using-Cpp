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
//char ReadCharacter()
//{
//	cout << "Please Enter a Character ?\n";
//	
//	char character = ' ';
//	
//	cin >> character;
//	
//	return character;
//}
//
//char InvertLetterCase(char letter) 
//{
//	return isupper(letter) ?  tolower(letter) : toupper(letter);
//}
//
//int GetCountLetter(const string& text,const char& letter , bool matchCase = true ) 
//{
//	int count = 0;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (matchCase) 
//		{
//			if(text[i] == letter)
//				count++;
//		}
//		else 
//		{
//			if (tolower(text[i]) == tolower(letter))
//				count++;
//		}
//	}
//	return count;
//}
//
//int main() 
//{
//	string text = ReadText();
//	char letter = ReadCharacter();
//	
//	cout << "Letter \'" << letter << "\' Count = " << GetCountLetter(text, letter);
//	cout << endl;
//
//	cout << "Letter \'" << letter << "\' Or \'" << InvertLetterCase(letter) << "\' Count = " << GetCountLetter(text, letter, false);
//	
//	return 0;
//}
//
//
//#pragma region MySolution
//
//void InvertChar(char& character)
//{
//	isupper(character) 
//	? character = tolower(character)
//	: character = toupper(character);
//}
//
//int GetCountCharacterMatchCaseInText(const string& text,char& character)
//{
//	int count = 0;
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (text[i] == character)
//			count++;
//	}
//
//	return count;
//}
//
//int GetCountCharacterInText(const string& text, const char& character, const char& newChar)
//{
//	int count = 0;
//
//
//	for (short i = 0; i < text.length(); i++)
//	{
//		if (text[i] == character || text[i] == newChar)
//			count++;
//	}
//
//	return count;
//}
//
////int main()
////{
////	string text = ReadText();
////	cout << endl;
////
////	char character = ReadCharacter();
////	cout << endl;
////	
////	char newChar = character;
////	InvertChar(newChar);
////
////	cout<<"Letter '" << character << "' Count = " << GetCountCharacterMatchCaseInText(text, character);
////	cout << endl;
////
////	cout<<"Letter '" << character << "' Or '" << newChar <<"' Count = " << GetCountCharacterInText(text, character, newChar);
////	return 0;
////}
//#pragma endregion
