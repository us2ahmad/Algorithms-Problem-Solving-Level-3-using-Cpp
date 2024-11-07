//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <iomanip>
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
//void PrintHeader(short countClient) 
//{
//	cout << "\n\t\t\t\t\tClient List (" << countClient << ") Client(s).\n";
//	cout << "________________________________________________________________________________________________\n" << endl;
//	cout << "| " << left << setw(15) << "Accout Number";
//	cout << "| " << left << setw(10) << "Pin Code";
//	cout << "| " << left << setw(40) << "Client Name";
//	cout << "| " << left << setw(12) << "Phone";
//	cout << "| " << left << setw(12) << "Balance";
//	cout <<"\n________________________________________________________________________________________________\n";
//}
//
//void PrintClientRecord(stClient client)
//{
//	cout << "| " << setw(15) << left << client.accountNumber;
//	cout << "| " << setw(10) << left << client.pinCode;
//	cout << "| " << setw(40) << left << client.name;
//	cout << "| " << setw(12) << left << client.phoneNumber;
//	cout << "| " << setw(12) << left << client.accountBalance;
//}
//
//void PrintFooter() 
//{
//	cout << "\n________________________________________________________________________________________________\n" << endl;
//	cout << "\t\t\t\t\t Developed by Ahmed" << endl;
//}
//
//void PrintAllDataClients(const vector<stClient>& clients)
//{
//	PrintHeader(clients.size());
//	
//	for (const stClient& client : clients)
//	{
//		PrintClientRecord(client);
//		cout << endl;
//	}
//	
//	PrintFooter();
//}
//
//int main() 
//{
//	string filePath = "C:\\Users\\ahmad\\Desktop\\ClientData.txt";
//	PrintAllDataClients(LoadDataClientFromFile(filePath));
//	
//	return 0;
//}