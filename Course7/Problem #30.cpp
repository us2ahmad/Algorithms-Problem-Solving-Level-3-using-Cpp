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
//int GetCountCharacterInText(const string& text,char& character)
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
//int main() 
//{
//	string text = ReadText();
//	cout << endl;
//	char character = ReadCharacter();
//	cout << endl;
//	cout<<"Letter '" << character << "' Count = " << GetCountCharacterInText(text, character);
//	return 0;
//}