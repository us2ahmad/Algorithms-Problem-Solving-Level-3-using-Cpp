//#include <iostream>
//#include <string>
//#include <vector>
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
//string ReverseWords(string Text)
//{
//	vector<string> vWords = SplitString(Text," ");
//	string text = "";
//
//	for (int i = vWords.size() - 1 ; i >= 0 ; i--)
//	{
//		text += vWords[i] + ( i > 0 ? " " : "" );
//	}
//
//	return text;
//}
//
//
//string ReverseWordsInString(string Text)
//{
//	vector<string> vWords = SplitString(Text, " ");
//	string text = "";
//
//	vector<string>::iterator iter = vWords.end();
//
//	while (iter != vWords.begin())
//	{
//		iter--;
//		text += *iter + " ";
//	}
//	return text.substr(0, text.length() - 1);
//
//}
//
//int main() 
//{
//	string text =ReadText();
//
//	cout << "\nstring after reversing words by Ahmad" << endl;
//	cout << ReverseWords(text) << endl;
//	
//	cout << "\nstring after reversing words by Dr.Mohammed " << endl;
//	cout << ReverseWordsInString(text) << endl;
//
//	system("pause >0");
//
//	return 0;
//}