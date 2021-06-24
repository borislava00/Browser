using namespace std;
#include <string>
#include "browser.h"


int main()
{

    Browser browser;

	string command;
	string tap;
	
	cin >> command;
	while (command != "exit")
	{
		if (command == "go")
		{
			cin>> tap;
			browser.go(tap.c_str());
		}
		else if (command == "insert")
		{
			cin >> tap;
			browser.insert(tap.c_str());
		}
		else if (command == "forward")
			browser.forward();
		else if (command == "back")
			browser.back();
		else if (command == "print")
			browser.print();
		else if (command == "remove")
			browser.remove();
		else
			cout << "Invalid input!" << endl;
		cin >> command;
	}

	command.erase();
	tap.erase();
	


  
}
