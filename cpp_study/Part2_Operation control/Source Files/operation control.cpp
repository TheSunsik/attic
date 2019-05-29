#include <iostream>
#include "Header.h"

int main() {

	using namespace std;
	char input = 'p';
	while (true)
	{
		cout << "------------------------------------------------" << endl;
		cout << "Which concept do you want to study?" <<
			"\ncontrol flow(c) / functions(f) / quit(q)" << endl <<
			"input : ";
		cin >> input;
		if (input == 'q')
		{
			break;
		}
		else if (input == 'c')
		{
			control_flow();
		}
		else if (input == 'f')
		{
			functions();
		}
	}

	return 0;
}