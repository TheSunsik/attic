#include <iostream>
#include "Header.h"

int main() {

	using namespace std;
	char input = 'p';
	while (true)
	{
		cout << "Which data type do you want to study?" << 
			"\ninteger(i) / float(f) / char(c) /  / quit(q)" << endl << 
			"input : ";
		cin >> input;
		if (input == 'q')
		{
			break;
		}
		else if (input == 'i')
		{
			study_integer();
		}
		else if (input == 'f')
		{
			study_float();
		}
	}
	
	return 0;
}