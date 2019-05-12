#include <iostream>
#include <bitset>
#include "Header.h"

int main()
{
	using namespace std;
	char input = 'p';
	while (true)
	{
		cout << "------------------------------------------------" << endl;

		cout << "Which topic do you want to study?" <<
			"\nincrements(i) / comma operator(c) / bitwise operator(b) / quit(q)" << endl <<
			"input : ";
		cin >> input;
		if (input == 'q')
		{
			break;
		}
		else if (input == 'i')
		{
			study_increments();
		}
		else if (input == 'c')
		{
			study_comma();
		}
		else if (input == 'b')
		{
			study_bitwise();
		}
	}

	return 0;
}