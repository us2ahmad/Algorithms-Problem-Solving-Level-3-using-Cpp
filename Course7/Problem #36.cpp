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
//short CountWordsInString(string text)
//{
//	short CountWords = 0;
//	short pos = 0;
//
//	while ( (pos = text.find(" ")) != string::npos)
//	{
//		if (text.substr(0, pos) != "")
//			CountWords++;
//
//		text.erase(0, pos + 1);
//	}
//
//	if (text != "")
//		CountWords++;
//
//
//	return CountWords;
//}
//
//int main() 
//{
//	string text = ReadText();
//
//	cout<< "The Number of Words in Your string is : " << CountWordsInString(text);
//
//	system("pause >0");
//
//	return 0;
//}