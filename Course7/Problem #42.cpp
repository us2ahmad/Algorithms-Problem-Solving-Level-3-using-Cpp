//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string ReplaceWordInStringUsingBuiltInFunction(string text, string oldWord, string newWord)
//{
//	short pos = text.find(oldWord);
//
//	while (pos != string::npos)
//	{
//		text = text.replace(pos, oldWord.length(), newWord);
//		pos = text.find(oldWord);
//	}
//
//	return text;
//}
//
//int main() 
//{
//	string S1 = "Welcome to EGYPT , EGYPT is a nice country";
//	string oldWord = "EGYPT";
//	string newWord = "SYRIA";
//
//	cout << "\nOrigial String\n" << S1;
//	cout << "\n\nString After Replace:";
//	cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S1, oldWord, newWord);
//	
//	system("pause >0");
//
//	return 0;
//}