//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//struct stClient
//{
//	string accountNumber = "";
//	string pinCode = "";
//	string name = "";
//	string phoneNumber = "";
//	double accountBalance = 0.0;
//};
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
//	if (text != "" && !vWords.empty())
//		vWords.push_back(text);
//
//	return vWords;
//}
//
//string GetLine()
//{
//	string lineData = "A150#//#1234#//#Ahmad Tabash#//#09459111750#//#5000.000000";
//
//	return lineData;
//
//}
//
//stClient ConvertLineToRecord(string line, string seperator = "#//#")
//{
//	vector<string> record = SplitString(line, seperator);
//	stClient client;
//	
//	if (!record.empty()) 
//	{
//		client.accountNumber = record[0];
//		client.pinCode = record[1];
//		client.name = record[2];
//		client.phoneNumber = record[3];
//		client.accountBalance = stod(record[4]);
//	}
//
//	return client;
//}
//
//void PrintClientData(stClient client)
//{
//	cout << "\n\nThe following is the extracted client record:\n";
//	cout << "\nAccout Number: " << client.accountNumber;
//	cout << "\nPin Code : " << client.pinCode;
//	cout << "\nName : " << client.name;
//	cout << "\nPhone : " << client.phoneNumber;
//	cout << "\nAccount Balance: " << client.accountBalance;
//}
//
//int main() 
//{
//	string line = GetLine();
//	cout << "\nLine Record is:\n";
//	cout << line;
//
//	PrintClientData(ConvertLineToRecord(line,"#//#"));
//
//	system("pause >0");
//
//	return 0;
//}