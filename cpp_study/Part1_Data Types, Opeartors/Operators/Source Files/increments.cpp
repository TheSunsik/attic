#include <iostream>

void study_increments()
{
	using namespace std;

	cout << "------------------------------------------------" << endl;

	cout << "\n### Assignment by arithmetic ###" <<
		
		"\n\n - 어떤 변수에 할당된 값에 사칙연산을 한 값을 바로 다시 그 변수에 할당하려 할 때 사용하기 좋은 연산자다." <<
		"\n   (ex. 임의의 숫자형 변수 x에 a라는 수가 할당되었을 때, x += 3을 통해 a+3을 바로 x에 할당)" <<
		"\n - 참고로 모든 할당 연산자는 동일한 operator precedence를 공유한다." <<
		"\n   (i.e. =, +=, <<=, ^= ... shares same operator precedence of 16, which is second lowest)" <<
		"\n - 또한 모든 할당 연산자는 오른쪽에 있는 값을 가지고 연산한 결과를 왼쪽에 할당하므로 Associativity가 Right-to-left다." <<
		"\n   이에 관해선 https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B를 참조." << endl;

	cout << "\n### Postfix/Prefix Increments(Decrements) ###" <<
		
		"\n\n - 어떤 변수에 할당된 값을 1만큼 증감시킬 때 사용하기 좋은 연산자다." <<
		"\n   ex. x++나 x-- 하나만으로 x에 할당된 값을 1만큼 증가시키거나 감소시킬 수 있다." <<
		"\n - 이때 ++나 --가 위와 같이 expression 뒤에 올 수도(Postfix), 앞에 올 수도 있다(Prefix). 이 둘은 아주 다른 연산자다." <<
		
		"\n\n   ex. int x = 10;  // x에 10을 할당" << 
		"\n       int y = ++x; // ++가 먼저 실행되고, 새로 할당된 11이 y에 할당된다. x와 y가 가리키는 주소엔 각각 11이 담김." <<
		"\n       int z = x++; // x가 먼저 z에 할당되고, ++가 실행된다. x는 12가 되고, z가 가리키는 주소엔 11이 담김." << endl;

	cout << "\n### Increment/Decrement with other operations ###" <<
		
		"\n\n - 어떤 숫자형 변수를 함수의 인자로 사용할 때 increment나 decrement를 붙여서 입력해도 해당 변수의 값에 증감이 발생한다." <<
		"\n   이때 두 operator의 기능 차이때문에 아래와 같은 일이 발생할 수 있다(add는 두 정수를 받아 그 합을 반환하는 함수라 하자)" <<
		
		"\n\n   ex. int a = 10, b = 10;  // a, b에 각각 10을 할당" <<
		"\n       cout << add(a++, ++b) << endl; // a가 증가하기에 앞서 함수가 실행되므로 이 값은 21." <<
		
		"\n\n - 논리 연산자와 함께 사용할 때도 이런 issue가 발생할 수 있다. 변수의 값이 먼저 evaluate되는 경우에는 상관 없지만" << 
		"\n   increment/decrement가 먼저 실행되는 아래와 같은 경우에는 의도하지 않은 결과를 얻을 수 있으므로 주의가 필요하다:" << 
		
		"\n\n   ex. int x = 1, y = 2;" << 
		"\n       cout << (x == 1 && ++y == 2) << endl; // 괄호 안에서 y가 이미 3이므로 0이 반환됨" << 
		
		"\n\n - 참고로 1. logical AND(&&)이 logical OR(||)보다 우선순위가 높고" << 
		"\n          2. Boolean이 아닌 값에 !(logical NOT)을 붙이면 casting이 발생하고" <<
		"\n          3. 곱하기와 나누기같이 우선순위가 같은 연산자들은 괄호를 통해 우선순위를 명시해주는 것이 좋다.\n" << endl;
}