#include <iostream>
#include <string>

#include "smtpclient.h"

using namespace std;


int SmtpClient::connect()
{
	throw SmtpClient::SmtpException("placeholder here");
	return 0;
}

int SmtpClient::send(string *email)
{
	cout << "Sending the message" << endl;
	return 0;
}

int SmtpClient::disconnect()
{
	cout << "Disconnecting from " << ip << endl;
	return 0;
}