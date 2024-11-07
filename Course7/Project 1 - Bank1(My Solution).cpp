//#include "Helper.h" 
//using namespace HelperLib;
//
//const string  gFilePath = "C:\\Users\\ahmad\\Desktop\\ClientData.txt";
//
//vector<stClient> gVClients;
//
//enChoose MainMenuScreen()
//{
//	cout << "===============================================\n";
//	cout << "\t\tMain Menu Screen\n";
//	cout << "===============================================\n";
//	cout << "\t[1] Show Client List.\n";
//	cout << "\t[2] Add New Client.\n";
//	cout << "\t[3] Delete Client.\n";
//	cout << "\t[4] Update Client Info.\n";
//	cout << "\t[5] Find Client.\n";
//	cout << "\t[6] Exit.\n";
//	cout << "===============================================\n";
//
//	cout << "Choose What do you want to do [1 to 6] ";
//	short choose = -1;
//	cin >> choose;
//	return enChoose(choose);
//}
//
//void ShowClientListScreen(const vector<stClient>& clients)
//{
//	system("cls");
//	PrintHeader(clients.size());
//	
//	for (const stClient& client : clients)
//	{
//		PrintClientRecord(client);
//		cout << endl;
//	}
//	WaitingForInput();
//}
//
//#pragma region AddNewClient
//bool CheckAccountNumberIsExist(const string& accountNumber)
//{
//	for (const stClient& client : gVClients) 
//	{
//		if (client.accountNumber == accountNumber)
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//stClient ReadNewClient()		
//{
//	stClient client;
//
//	cout << "Enter Account Number ? ";
//	getline(cin >> ws, client.accountNumber); cout << endl;
//	
//	while (CheckAccountNumberIsExist(client.accountNumber))
//	{
//		cout << "Client With [" << client.accountNumber << "] Already exists , Enter another Account Number?";
//		getline(cin >> ws, client.accountNumber); cout << endl;
//	}
//	////////////////////////////
//
//	cout << "Enter PinCode ? ";
//	getline(cin, client.pinCode); cout << endl;
//	////////////////////////////
//
//	cout << "Enter Name ? ";
//	getline(cin, client.name); cout << endl;
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
//void AddClients()
//{
//	char addMore = 'y';
//	while (tolower(addMore) == 'y')
//	{
//		system("cls");
//		cout << "----------------------------\n";
//		cout << "\t\tAdd New Client Screen\n";
//		cout << "----------------------------\n";
//		cout << "Adding New Client : \n";
//
//		if (SaveDataInFlie(ConvertRecordToLine(ReadNewClient()), gFilePath))
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
//
//void AddNewClientScreen() 
//{
//	AddClients();
//	WaitingForInput();
//}
//
//#pragma endregion
//
//#pragma region DeleteClient
//
//void DeletedClientByAccountNumber(const string& accountNumber,vector<stClient>& vClients)
//{
//	stClient client;
//
//	if (FindClientByAccountNumber(vClients, client, accountNumber))
//	{
//		PrintClientData(client);
//
//		if (GetUserAnswerForDeletion()) 
//		{
//			ChangeIsDeletedForClient(accountNumber, vClients);
//		
//			SaveDataInFlie(vClients,gFilePath);
//
//			cout << "\nClient Deleted Successfully .\n";
//		}
//	}
//	else
//	{
//		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!\n";
//	}
//}
//
//void DeleteClientScreen() 
//{
//	system("cls");
//	cout << "------------------------------------------\n";
//	cout << "\t\tDelete Client Screen\n";
//	cout << "------------------------------------------\n";
//	DeletedClientByAccountNumber(ReadClientAccountNumber(), gVClients);
//	WaitingForInput();
//}
//#pragma endregion
//
//#pragma region UpdateClient
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
//			SaveDataInFlie(vClients,gFilePath);
//
//			cout << "\nClient Update Successfully .\n";
//		}
//	}
//	else
//	{
//		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!\n";
//	}
//}
//
//void UpdateClientScreen() 
//{
//	system("cls");
//	cout << "-----------------------------------------------\n";
//	cout << "\t\tUpdate Client Info Screen\n";
//	cout << "-----------------------------------------------\n";
//	UpdateClientByAccountNumber(ReadClientAccountNumber(), gVClients);
//	WaitingForInput();
//}
//
//#pragma endregion
//
//#pragma region FindClient
//
//void FindClient(const string& accountNumber, vector<stClient>& vClients)
//{
//	stClient client;
//	if (FindClientByAccountNumber(vClients, client, accountNumber))
//	{
//		PrintClientData(client);
//	}
//	else
//	{
//		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
//	}
//}
//
//void FindClientScreen() 
//{
//	system("cls");
//	cout << "--------------------------------------------\n";
//	cout << "\t\tFind Client Screen\n";
//	cout << "--------------------------------------------\n";
//	FindClient(ReadClientAccountNumber(),gVClients);
//	WaitingForInput();
//}
//
//#pragma endregion
//
//
//void ProcessSelection(enChoose choose)
//{
//	switch (choose)
//	{
//	case HelperLib::eShowClientList:
//		ShowClientListScreen(LoadDataClientFromFile(gFilePath));
//		break;
//	case HelperLib::eAddNewClient:
//		AddNewClientScreen();
//		break;
//	case HelperLib::eDeleteClient:
//		DeleteClientScreen();
//		break;
//	case HelperLib::eUpdateClientInfo:
//		UpdateClientScreen();
//		break;
//	case HelperLib::eFindClient:
//		FindClientScreen();
//		break;
//	default:
//		break;
//	}
//}
//
//int main() 
//{
//	enChoose choose;
//	while ( (choose = MainMenuScreen()) != enChoose::eExit)
//	{
//		gVClients = LoadDataClientFromFile(gFilePath);
//		ProcessSelection(choose);
//	}
//	
//	return 0;
//}