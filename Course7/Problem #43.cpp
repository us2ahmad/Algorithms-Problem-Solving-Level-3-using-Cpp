//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> SplitString(string text , string delim = " ")
//{
//	vector<string> vWords;
//	short pos = 0;
//	string sWord = "";
//
//	while ( (pos = text.find(delim)) != string::npos)
//	{
//		sWord = text.substr(0,pos);
//
//		if (sWord != "")
//			vWords.push_back(sWord);
//	
//		text.erase(0, pos + delim.length());
//	}
//
//	if (text != "") 
//		vWords.push_back(text);
//
//	return vWords;
//}
//
//string LowerAllString(string S1)
//{
//	for (short i = 0; i < S1.length(); i++)
//	{
//		S1[i] = tolower(S1[i]);
//	}
//	return S1;
//}
//
//string JoinString(const vector<string>&vWords, const string & delim = " ")
//{
//	string text = "";
//
//	for (short i = 0; i < vWords.size(); i++)
//	{
//		text += vWords[i] + (i < vWords.size() - 1 ? delim : "");
//	}
//	return text;
//}
//
//string ReplaceWordInStringUsingSplit(string text, string oldWord, string newWord,bool matchCase = true)
//{
//	vector<string> vWords = SplitString(text," ");
//
//	for (string& word : vWords)
//	{
//		if (matchCase)
//		{
//			if (word == oldWord)
//				word = newWord;
//		}
//		else
//		{
//			if (LowerAllString(word) == LowerAllString(oldWord))
//			{
//				word = newWord;
//			}
//		}
//	}
//	
//	return JoinString(vWords," ");
//}
//
//int main() 
//{
//	string text = "Welcome to Jordan , Jordan is a nice country";
//	string StringToReplace = "jordan";
//	string ReplaceTo = "Syria";
//
//	cout << "\nOriginal String:\n" << text;
//
//	cout << "\n\nReplace with match case: ";
//	cout << "\n" << ReplaceWordInStringUsingSplit(text,StringToReplace, ReplaceTo);
//
//	cout << "\n\nReplace with dont match case: ";
//	cout << "\n" << ReplaceWordInStringUsingSplit(text,StringToReplace, ReplaceTo, false);
//
//	system("pause >0");
//
//	return 0;
//}