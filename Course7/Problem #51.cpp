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
//string ConvertRecordToLine(stClient client,string seperator = "#//#")
//{
//	string clientRecord = "";
//
//	clientRecord += client.accountNumber + seperator;
//	clientRecord += client.pinCode + seperator;
//	clientRecord += client.name + seperator;
//	clientRecord += client.phoneNumber + seperator;
//	clientRecord += to_string( client.accountBalance);
//	
//	return clientRecord;
//}
//
//vector<stClient> LoadDataClientFromFile() 
//{
//	vector<stClient> clients;
//	fstream myFile;
//	myFile.open(gFilePath,ios::in);
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
//bool SaveDataInFlie(vector<stClient>& vClients)
//{
//	fstream myFile;
//	myFile.open(gFilePath,ios::out);
//
//	if (myFile.is_open())
//	{
//		for (stClient client : vClients) 
//		{
//			myFile << ConvertRecordToLine(client) << endl;
//		}
//		
//		myFile.close();
//
//		return true;
//	}
//	
//	return false;
//}
//
//bool FindClientByAccountNumber(vector<stClient> vClients,stClient& client, const string& accountNumber)
//{	
//	for (const stClient & searchClient : vClients)
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
//bool GetUserAnswerForUpdate()
//{
//	char deleted = 'y';
//	cout << "\nAre You sure want Update this client ? y/n ? ";
//	cin >> deleted;
//	
//	return tolower(deleted) == 'y';
//}
//
//void UpdateDataClient(const string& accountNumber, vector<stClient>& vClients)
//{
//	for (stClient& client : vClients) 
//	{
//		if (client.accountNumber == accountNumber) 
//		{
//			cout << "\n\nEnter PinCode ? ";
//			getline(cin >> ws, client.pinCode); cout << endl;
//			////////////////////////////
//	
//			cout << "Enter Name ? ";
//			getline(cin,client.name); cout << endl;
//			////////////////////////////
//	
//			cout << "Enter Phone Number ? ";
//			getline(cin, client.phoneNumber); cout << endl;
//			////////////////////////////
//
//			cout << "Enter Account Balance ? ";
//			cin >> client.accountBalance; cout << endl;
//			////////////////////////////	
//		}
//	}
//}
//
//void UpdateClientByAccountNumber(const string& accountNumber,vector<stClient>& vClients)
//{
//	stClient client;
//
//	if (FindClientByAccountNumber(vClients, client, accountNumber))
//	{
//		PrintClientData(client);
//
//		if (GetUserAnswerForUpdate())
//		{
//			UpdateDataClient(accountNumber,vClients);
//			SaveDataInFlie(vClients);
//
//			cout << "\nClient Update Successfully .";
//		}
//	}
//	else
//	{
//		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
//	}
//
//}
//
//int main()
//{
//	string accountNumber = ReadClientAccountNumber();
//	
//	vector<stClient>vClients = LoadDataClientFromFile();
//
//	UpdateClientByAccountNumber(accountNumber,vClients);
//	
//	system("pause>0");
//
//	return 0;
//}