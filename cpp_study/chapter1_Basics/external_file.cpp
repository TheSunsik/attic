#include <iostream>

int multint(int num_a, int num_b)
{
	return num_a * num_b;
}

namespace extreme
{
	using namespace std;
	void printHelloWorld()
	{
		cout << "Oh yeahhh helloooo world!!" << endl;
	}
}

void getMyFruit()
{
	using namespace std;
#ifdef MY_FRUIT
	cout << "MY_FRUIT is defined" << endl;
#else
	cout << "MY_FRUIT is not defined" << endl;
#endif

	/* This is equivalent to
	#ifdef MY_FRUIT
		cout << "MY_FRUIT is defined" << endl;
	#endif
	#ifndef MY_FRUIT
		cout << "MY_FRUIT is not defined" << endl;
	#endif */
}