#include <iostream>		// 여전히, console창에 띄우기 위해
#include <cmath>		// 제곱 계산을 위해
#include <limits>		// type별 최소값, 최대값 출력을 위해
#include <string>		// 아직 정식으로 배우진 않았지만 자료형 입력을 위해 포함

void signed_message(
	std::string input_type,
	int bytesize, int bitsize, long long maxvalue, long long minvalue, long long a, long long b
	)
{
	using namespace std;
	cout << "------------------------------------------------" << endl;

	cout << "\n### Range of " << input_type << " ###" <<
		"\nSize of " << input_type << " type variable is " << bytesize << "Bytes(" << bitsize << "Bits)" <<
		"\nThis means that the maximum value that " << input_type << " type can store is 2^(" << bitsize << "-1)-1 = " << maxvalue <<

		"\n\nNote that 1 is subtracted from " << bitsize << " because " << input_type << " is a signed variable(1Bit is used to store the information of sign) " <<
		"\nand 1 is again subtracted from that value to give a space for 0." <<
		"\nTherefore, " << input_type << " type variable can range from " << minvalue << " to " << maxvalue << endl <<

		"\n### Overflowing ###" <<
		"\nAbove result means that if we assign a value larger than " << maxvalue << " or lesser than " << minvalue << " like:" <<

		"\n\n " << input_type << " a = " << maxvalue << " + 1;" <<
		"\n " << input_type << " b = " << minvalue << " - 1; ," <<

		"\n\noverflow occurs. To illustrate, the value circulates in the range of a variable. System of order can be written as:" <<
		"\n... " << maxvalue - 1 << "  " << maxvalue << " " << minvalue << " " << minvalue + 1 << " ..." <<

		"\n\nSo in the above example, a will have value of " << a << " and b will have value of " << b << endl;

	cout << "\n------------------------------------------------" << endl;
}

void unsigned_message(
	std::string input_type,
	int bytesize, int bitsize, unsigned long long maxvalue, unsigned long long minvalue, unsigned long long a, unsigned long long b
)
{
	using namespace std;
	cout << "------------------------------------------------" << endl;

	cout << "\n### Range of unsigned " << input_type << " ###" <<
		"\nSize of unsigned " << input_type << " type variable is " << bytesize << "Bytes(" << bitsize << "Bits)" <<
		"\nThis means that the maximum value that unsigned " << input_type << " type can store is 2^" << bitsize << "-1 = " << maxvalue <<

		"\nNote that 1 is subtracted from the value to give a space for 0." <<
		"\nTherefore, unsigned " << input_type << " type variable can range from " << minvalue << " to " << maxvalue << endl <<

		"\n### Overflowing ###" <<
		"\nThis means that if we assign a value larger than " << maxvalue << " or lesser than " << minvalue << " like:" <<

		"\n\n unsigned " << input_type << " a = " << maxvalue << " + 1;" <<
		"\n unsigned " << input_type << " b = " << minvalue << " - 1; ," <<

		"\n\noverflow occurs. To illustrate, the value circulates in the range of a variable. System of order can be written as:" <<
		"\n... " << maxvalue - 1 << "  " << maxvalue << " " << minvalue << " " << minvalue + 1 << " ..." <<

		"\n\nSo in the above example, a will have value of " << a << " and b will have value of " << b << endl <<

		"\n### Casting ###" <<
		"\nIf we assign signed integer into unsigned integer variable, casting occurs(i.e. data type automatically changes)." <<
		"\nIn our common sence, system of order of integer is ...-2 -1 0 1 2 ...." <<
		"\nThis corresponds to the order system of " << input_type << ", which was ... " <<
		maxvalue - 1 << " " << maxvalue << " " << minvalue << " " << minvalue + 1 << " " << minvalue + 2 << " ...." <<
		"\nTherefore if we initialize unsigned " << input_type << " as -1 or -2 like " <<

		"\n\n unsigned " << input_type << " a = -1;" <<
		"\n unsigned " << input_type << " b = -2; ," <<
		
		"\n\na and b will store " << maxvalue << " and " << maxvalue - 1 << " respectively.";

	cout << "\n------------------------------------------------" << endl;
}

int study_integer()
{
	using namespace std;
	cout << "You can check short(s) / int(i) / long long(l) / unsigned(u) type of integers" << endl << "Your choice is : ";
	char choice = 'a';
	cin >> choice;
	

	if (choice == 's')
	{
		short bytesize = sizeof(short);
		short bitsize = bytesize * 8;
		short maxvalue = numeric_limits<short>::max();
		short minvalue = numeric_limits<short>::min();
		short a = maxvalue + 1;
		short b = minvalue - 1;

		signed_message("short", bytesize, bitsize, maxvalue, minvalue, a, b);
	}


	else if (choice == 'i')
	{
		int bytesize = sizeof(int);
		int bitsize = bytesize * 8;
		int maxvalue = numeric_limits<int>::max();
		int minvalue = numeric_limits<int>::min();
		int a = maxvalue + 1;
		int b = minvalue - 1;

		signed_message("int", bytesize, bitsize, maxvalue, minvalue, a, b);
	}


	else if (choice == 'l')
	{
		long long bytesize = sizeof(long long);
		long long bitsize = bytesize * 8;
		long long maxvalue = numeric_limits<long long>::max();
		long long minvalue = numeric_limits<long long>::min();
		long long a = maxvalue + 1;
		long long b = minvalue - 1;

		signed_message("long long", bytesize, bitsize, maxvalue, minvalue, a, b);
	}


	else
	{
		cout << "------------------------------------------------" << endl;
		cout << "\nYou can check short(s) / int(i) / long long(l) type of unsigned integers" << endl << "Your choice is : ";
		cin >> choice;


		if (choice == 's')
		{
			unsigned short bytesize = sizeof(unsigned short);
			unsigned short bitsize = bytesize * 8;
			unsigned short maxvalue = numeric_limits<unsigned short>::max();
			unsigned short minvalue = numeric_limits<unsigned short>::min();
			unsigned short a = maxvalue + 1;
			unsigned short b = minvalue - 1;

			unsigned_message("short", bytesize, bitsize, maxvalue, minvalue, a, b);
		}


		if (choice == 'i')
		{
			unsigned int bytesize = sizeof(unsigned int);
			unsigned int bitsize = bytesize * 8;
			unsigned int maxvalue = numeric_limits<unsigned int>::max();
			unsigned int minvalue = numeric_limits<unsigned int>::min();
			unsigned int a = maxvalue + 1;
			unsigned int b = minvalue - 1;

			unsigned_message("integer", bytesize, bitsize, maxvalue, minvalue, a, b);
		}


		if (choice == 'l')
		{
			unsigned long long bytesize = sizeof(unsigned long long);
			unsigned long long bitsize = bytesize * 8;
			unsigned long long maxvalue = numeric_limits<unsigned long long>::max();
			unsigned long long minvalue = numeric_limits<unsigned long long>::min();
			unsigned long long a = maxvalue + 1;
			unsigned long long b = minvalue - 1;

			unsigned_message("long long", bytesize, bitsize, maxvalue, minvalue, a, b);
		}
	}
	return 0;
}