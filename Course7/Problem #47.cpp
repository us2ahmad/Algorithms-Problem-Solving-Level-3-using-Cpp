//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//struct stClient
//{
//	string accountNumber = "";
//	string pinCode = "";
//	string name = "";
//	string phoneNumber = "";
//	double accountBalance = 0.0;
//};
//stClient ReadNewClient()
//{
//	stClient client;
//
//	cout << "Enter Account Number ? ";
//	getline(cin >> ws, client.accountNumber); cout << endl;
//	////////////////////////////
//
//	cout << "Enter PinCode ? ";
//	getline(cin, client.pinCode); cout << endl;
//	////////////////////////////
//	
//	cout << "Enter Name ? ";
//	getline(cin,client.name); cout << endl;
//	////////////////////////////
//	
//	cout << "Enter Phone Number ? ";
//	getline(cin, client.phoneNumber); cout << endl;
//	////////////////////////////
//
//	cout << "Enter Account Balance ? ";
//	cin >> client.accountBalance; cout << endl;
//	////////////////////////////
//	
//	return client;
//}
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
//bool SaveDataInFlie(const string& line,const string& filePath)
//{
//	fstream myFile;
//	myFile.open(filePath,ios::app);
//
//	if (myFile.is_open())
//	{
//		myFile << line << endl;
//
//		myFile.close();
//
//		return true;
//	}
//	
//	return false;
//}
//void AddClients() 
//{
//	string filePath = "C:\\Users\\ahmad\\Desktop\\ClientData.txt";
//	char addMore = 'Y';
//
//	while ( tolower( addMore) == 'y' )
//	{
//		system("cls");
//		cout << "Adding New Client : \n";
//
//		if (SaveDataInFlie(ConvertRecordToLine(ReadNewClient()), filePath))
//		{
//			cout << "Client Added Successfuly , do you want to add more client ? ";
//			cin >> addMore;
//		}
//		else
//		{
//			cout << "Failed to add client,Do you want to try adding again?";
//			cin >> addMore;
//		}
//	}
//}
//int main() 
//{
//	AddClients();
// 	return 0;
//}
//
