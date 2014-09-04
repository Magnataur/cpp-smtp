#include <iostream>
#include <string>

#include "smtpclient.h"

using namespace std;



int main(int argc, char *argv[])
{
	int ret;
	string ip = "127.0.0.1";
	int port = 22;

	SmtpClient smtp_client(ip, port);

	cout << "Connecting to " << ip << ":" << port << endl;
	try
	{
		smtp_client.connect();
	}
	catch(SmtpClient::SmtpException ix)
	{
		cout << "Unable to connect with error: " << ix.error << endl;
		return -1;
	}

	return 0;
}
