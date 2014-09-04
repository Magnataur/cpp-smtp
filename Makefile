all:
		g++ smtp-sender.cpp smtpclient.cpp -g -std=c++11 -o smtp-sender

clean:
		rm -f smtp-sender
