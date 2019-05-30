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

		cout << "\n   책갈피를 끼워놓고 그 지점으로 되돌아가고자 할 때 사용한다." <<
			"\n   marker :" << 
			"\n   ..." <<
			"\n     (command)" << 
			"\n   ..." <<
			"\n     goto marker; // marker지점으로 돌아가서 프로그램을 다시 실행. if문 안에 쓰는게 보통임." << 
			"\n" << endl;
	}

	if (choice == 'l')
	{
		cout << "** 기본적으로 조건문에 0이 입력되는 순간 loop가 종료된다 **" << endl;

		cout << "\n### 1. for loop ###" << endl;

		cout << "\n   for loop 설정은 쉽게 말해 for (i in 1:5)을 C++스럽게(엄밀하게) 표현한다고 생각하면 된다." <<
			"\n     a) 먼저 i가 정의되지 않았을 것이므로 정의하고" <<
			"\n     b) i를 언제까지 increment시킬건지를 지정한 다음," <<
			"\n     c) 어떻게 i를 increment시킬지를 정한다." <<
			"\n     이를 괄호안에 다 담아 표현하면 된다: for (a; b; c)" <<
			"\n   **참고 : c가 먼저 실행되고 b가 evaluate된다 **\n" <<

			"\n   ex. int input = 10;" <<
			"\n       for (int i = 1; i <= 5; i++) {" <<
			"\n          input++;" <<
			"\n          cout << i << '  ' << input << endl;" <<
			"\n       }\n" <<

			"\n   i <= 5가 true일 때까지 {여기있는 statement들이} 실행된다. 따라서 위 loop는 1  11, ... , 5  15를 출력한다" <<
			"\n   이때 iterator인 i는 local scope안에서 정의되었으므로 duration은 loop가 시작하고 끝날 때까지다." <<
			"\n   loop 밖에서도 iterator를 사용하고자 한다면 아래와 같이 이를 밖에서 정의하면 된다.\n" <<

			"\n   ex. int input = 10;" <<
			"\n       int i = 1;" <<
			"\n       for (; i <= 5; i++) {" <<
			"\n          input++;" <<
			"\n          cout << i << '  ' << input << endl;" <<
			"\n       }" <<
			"\n   동일한 결과를 얻을 수 있고, i도 밖에서 사용할 수 있다. 앞서 increment가 먼저 되고 evaluate이 그 다음에 된다고 했는데," <<
			"\n   그렇기 때문에 위 loop가 끝나고 i의 값을 확인해보면 5가 아니라 6이다.\n" <<

			"\n   이런 표현 덕분에 단일 차원의 loop에서 여러 차원의 iterator를 운용할 수 있게 된다." <<
			"\n   ex. for (int i = 1, j = 1; (i <= 5) && (j <= 5) ; i++, j += 2)" << 
			"\n       j가 5, i가 3일 때 loop가 마지막으로 실행되고 i가 4, j가 7일 때 조건문이 false가 되므로 loop가 종료된다." << endl;

		cout << "\n### 2. while ###" << endl;

		cout << "\n   조건문에 0이 입력될 때까지 loop를 실행시키려 할 때 사용한다(특별할 것 없다). C++에서는 do-while문을 지원하는데," <<
			"\n   최초 실행을 보장하는 while문이라고 생각하면 된다(즉, 최초 실행을 하고 난 후 while문에 0이 입력될 때까지 반복).\n" <<
			
			"\n   ex. int selection;" <<
			"\n       do {" << 
			"\n           cout << \"1. add\" << endl;" <<
			"\n           cout << \"2. sub\" << endl;" <<
			"\n           cout << \"3. mult\" << endl;" <<
			"\n           cout << \"4. div\" << endl;" <<
			"\n           cin >> selection" <<
			"\n       } while (selection <= 0 || selection >= 5);\n" <<

			"\n   정상적인 입력을 받을 떄까지(즉, selection이 1과 4 사이라서 위 조건문이 0을 반환할 때까지) 위 loop를 반복하게 된다." << endl;
	}

}