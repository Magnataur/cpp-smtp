#include <iostream>
#include <string>

using namespace std;

class SmtpClient
{
private:
	string ip;
	unsigned int port;

public:
	SmtpClient(string a, unsigned int b): ip(a), port(b) { }

	int connect();
	int send(string *);
	int disconnect();

	class SmtpException
	{
	public:
		string error = "Undefined error";
		SmtpException(string e): error(e) { }
	};

};
