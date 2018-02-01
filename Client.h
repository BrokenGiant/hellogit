#include <string>

using namespace std;

class Client
{

private:
	string name;
	int num;

public:

	Client()
	{
		name = " ";
		num = 0;
	}

	void setName(string ClientName)
	{
		name = ClientName;
	}
	

	string getName() const
	{
		return name;
	}

	void setNumber(int ClientNumber) 
	{
		num = ClientNumber;
	}

	int getNum() const
	{
		return num;
	}
};
