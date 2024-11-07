//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//const string  gFilePath = "C:\\Users\\ahmad\\Desktop\\ClientData.txt";
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
//vector<string> SplitString(string text, string delim = " ")
//{
//	vector<string> vWords;
//	short pos = 0;
//	string sWord = "";
//
//	while ((pos = text.find(delim)) != string::npos)
//	{
//		sWord = text.substr(0, pos);
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
//vector<stClient> LoadDataClientFromFile(const string& filePath) 
//{
//	vector<stClient> clients;
//	fstream myFile;
//	myFile.open(filePath,ios::in);
//
//	if (myFile.is_open()) 
//	{
//		string line = "";
//		while (getline(myFile, line))
//		{
//			clients.push_back(ConvertLineToRecord(line));
//		}
//		myFile.close();
//	}
//
//	return clients;
//}
//
//bool FindClientByAccountNumber(stClient& client, const string& accountNumber)
//{
//	vector<stClient> clients = LoadDataClientFromFile(gFilePath);
//	
//	for (const stClient & searchClient : clients)
//	{
//		if (searchClient.accountNumber == accountNumber)
//		{
//			client = searchClient;
//			return true;
//		}
//	}
//
//	return false;
//}
//
//void PrintClientData(const stClient& client)
//{
//	cout << "\nThe following are the client details:\n";	
//	cout << "\nAccount Number : " << client.accountNumber;
//	cout << "\nPin Code : " << client.pinCode;
//	cout << "\nName : " << client.name;
//	cout << "\nPhone Number : " << client.phoneNumber;
//	cout << "\nAccount Balance : " << client.accountBalance;
//}
//
//string ReadClientAccountNumber() 
//{
//	cout << "Please Enter Account Number ? ";
//	string accountNumber;
//	cin >> accountNumber;
//	return accountNumber;
//}
//
//int main()
//{
//	string accountNumber = ReadClientAccountNumber();
//	stClient client;
//	
//	if (FindClientByAccountNumber(client, accountNumber))
//		PrintClientData(client);
//	else
//		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
//	
//	system("pause>0");
//
//	return 0;
//}