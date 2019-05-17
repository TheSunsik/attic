#include <iostream>

void study_comma()
{
	using namespace std;

	cout << "------------------------------------------------" << endl;

	cout << "\n한 줄에 여러가지 연산을 나열할 때 사용할 수 있는 연산자다. 예시를 통해 설명한다." << endl;

	cout << "\n  int x = 1, y = 2;" <<
		"\n  (++x, ++y, x += y, --x);" <<
		"\n  cout << x << y << endl;  // 43 출력" << endl;

	cout << "\n  int x = 1, y = 2;" <<
		"\n  int z = (++x, y++, x += y, --x); // comma operator의 결과를 할당할 땐 마지막에 생성된 값이 할당됨" <<
		"\n  cout << x << y << z << endl;  // 434 출력" << endl;
	
	cout << "\n  int x = 1, y = 2;" <<
		"\n  int z;" <<
		"\n  z = ++x, ++y, x = x + y, --x;" <<
		"\n  cout << x << y << z << endl; // 쉼표 연산자는 precedence가 가장 낮은 연산자라 z에 할당이 먼저 일어남\n" << endl;
}