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
//void PrintWords(const vector<string>& words)
//{
//	for (const string& word : words) 
//	{
//		cout << word << endl;
//	}
//}
//
//int main() 
//{
//	vector<string> vWords = SplitString(ReadText()," ");
//	cout << "\nTokens = " << vWords.size() << endl;
//	PrintWords(vWords);
//
//	system("pause >0");
//
//	return 0;
//}