//#include <iostream>
//#include <string>
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
//stClient ReadNewClient()
//{
//	stClient client;
//	cout << "Enter Account Number ? ";
//	getline(cin, client.accountNumber); cout << endl;
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
//int main() 
//{
//	cout << "Please Enter Client Data : \n";
//	stClient client = ReadNewClient();
//	
//	cout << "Client Record For Saving is :\n ";
//	cout << ConvertRecordToLine(client);
//
//	system("pause > 0");
//
// 	return 0;
//}
//
