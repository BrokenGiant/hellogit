#include <iostream>
#include "Client.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	Client sClient;
	string name = " ";
	int num = 0;
	vector <string> myVector;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the client name ";
		cin >> name;
		sClient.setName(name);
		myVector.push_back(sClient.getName());
	}
	cout << "The names you typed are: ";
	for (int i = 0; i < 3; i++)
	{
		cout << endl  << myVector[i] << endl;
	}

	system("pause");
	return 0;
}