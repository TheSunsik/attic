#include <iostream>

void control_flow()
{
	using namespace std;
	cout << "Among this topic, you can look into (conditional branches(c) / jumps(j) / loops(l) / exceptions(e))" << endl << "Your choice is : ";
	char choice = 'c';
	cin >> choice;
	cout << "------------------------------------------------" << endl;

	if (choice == 'c')
	{
		cout << "\n### 1. if-else statement ###" << endl;

		cout << "\n - if (조건문)" << 
			"\n   {" <<
			"\n      (조건문이 0이 아닌 값을 반환할 때 실행되는 operation)" <<
			"\n   }" <<
			"\n   else" <<
			"\n   {" <<
			"\n      (조건문이 자료형태에 상관 없이 0을 반환할 때 실행되는 operation)" <<
			"\n   }" <<
			"\n   operation이 실행되는 곳은 local scope 안이기 때문에 각 중괄호 안에서 생성한 변수는 해당 중괄호 밖에선 볼 수 없다. " << endl;

		cout << "\n### 2. swith-case statement ###" << endl;

		cout << "\n - 어떤 변수의 구체적인 값에 따라 실행해야 될 operation이 많을 때 if-else 대신 사용하기 좋은 조건 분기문이다." <<
			"\n   switch (그 변수. X라고 하자.)" <<
			"\n   {" <<
			"\n   case x1:" <<
			"\n      (X == x1일 때 실행할 operation)" <<
			"\n   case x2:" <<
			"\n      (X == x1 또는 x2일 때 실행할 operation)" <<
			"\n   case x3:" <<
			"\n      (X == x1 또는 x2 또는 x3일 때 실행할 operation)" <<
			"\n   ..." <<
			"\n   }" << 
			"\n   위에 적힌 것처럼 X == x1이 성립하면 그 아래 case들도 모두 실행된다는 점을 유의해야 한다. break로 이를 끊어낼 수 있다.\n" << endl;
	}

	if (choice == 'j')
	{
		cout << "\n### 1. break / continue ###" << endl;

		cout << "\n   break는 해당 iteration에서 'loop를 끝내는 역할'을 하고 return은 '함수의 실행을 끝내는 역할'을 한다." <<
			"\n   continue는 해당 iteration에서 빠져나가 '다음 iteration으로 진행'하는 역할을 한다." << endl;

		cout << "\n### 2. goto ###" << endl;

		cout << "\n" << endl;
	}
}