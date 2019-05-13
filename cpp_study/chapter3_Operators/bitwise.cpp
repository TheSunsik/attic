#include <iostream>
#include <bitset>

void study_bitwise()
{
	using namespace std;

	cout << "------------------------------------------------" << endl;

	cout << "\n### Decimal & Binary numbers ###" <<
		
		"\n\n - Binary → Decimal : 2의 자승들로 구성된 벡터와 자리수 벡터의 내적" <<
		"\n   ex. 10010는 [1 0 0 1 0]와 [2^4 2^3 2^2 2^1 2^0]벡터의 내적." <<
		"\n   (i.e. 1 * 2^4 + 1 * 2^1 = 18)" <<
		
		"\n\n - Decimal → Binary : bitset library를 이용" <<
		"\n   ex. std::bitset<5>(18)은 10010을 반환" << 
		"\n   이때 bitset<5>(18)의 5는 결과를 5bit길이로 출력하라는 뜻임" << 
		
		"\n\n - 이진수 표현으로 integer를 저장"  <<
		"\n   10010 표현 그대로 입력해서 a라는 변수에 18을 할당하려면 아래와 같이 하면 된다:" << 
		"\n   ex. int a = 0b10010;" << endl;

	cout << "\n### Binary representation of negative integers ###" <<
		
		"\n\n - 한 양의 정수에 대한 임의의 길이의 이진수 표현에 대해 그 길이의 음의 이진수를 표현하는 규칙은 유일하다." <<
		"\n   (1) 그 양의 정수의 이진수 표현의 0과 1을 반전시킨다(i.e. complement를 얻는다)" <<
		"\n   (2) (1)에서 얻은 이진수에 1을 더한다" <<
		
		"\n\n   ex. (1) 1바이트 표현이라면 00010010 → 11101101" <<
		"\n       (2) 11101101 → 11101110(-8을 표현하는 1바이트 길이의 표현)" <<
		
		"\n\n   양의 정수의 맨 앞 비트는 (1)을 통해 1로 반전되어 음수를 나타내게 된다." <<
		"\n   또한 (2)를 통해 0이 00000000이나 11111111 둘 다로 표현되지 않고 항상 0000000으로 표현될 수 있게 된다." << endl;

	cout << "\n### Bitwise operator ###" <<
		"\n - 변수 할당이 Byte단위로 이루어지다 보니 메모리가 비효율적으로 사용될 때가 있다." <<
		"\n   예를 들어, bool값의 경우 1바이트를 할당받는데, 사실 1비트만 있으면 표현이 가능한 정보다." <<
		"\n   남은 7비트를 활용하자는 데서 착안했다기보단 컴퓨터의 Bit구조를 십분 활용하자는 동기에서 착안된 연산자다. " <<
		"\n   (무엇보다, 컴퓨터 입장에서는 비트단위 연산이 훨씬 처리하기 편하다-즉, 빠르다)"
		
		"\n\n#1. Six Bitwise operator" << 
		"\n (1) << : Left Shift\n\
   컴퓨터 입장에서는 비트 정보를 왼쪽으로 n칸 옮기는 작업이지만,\n\
   사람 입장에서는 해당 수를 2의 n제곱배 하는 작업이다.\n\n\
   ex. int a = 7; // 즉, a는 00000111([1 1 1]과 [2^2 2^1 2^0]의 내적)\n\
       a <<= 2;   //     a는 00011100([1 1 1]과 [2^4 2^3 2^2]의 내적)\n" << 

		"\n (2) >> : Right Shift\n\
   비슷한 맥락에서 비트 정보를 오른쪽으로 n칸 옮겨 해당 수를 2의 -n제곱배 하는 작업이다. \n\
   iostream library에서 <<랑 >>를 overload해서 그렇지, 사실 이 둘은 bitwise operator다.\n\n\
 여기서부터는 int a = 7, b = a << 1의 4비트 표현을 사용해서 각 결과를 적는 것으로 설명을 대체한다.\n\
 즉, a는 0111,\n\
     b는 1110\n" << 

		"\n (3) ~ : bitwise NOT\n\
   cout << bitset<4>(~ a) << endl; // 1000\n\
   cout << bitset<4>(~ b) << endl; // 0001\n" <<
		
		"\n (4) & : bitwise AND\n\
   cout << bitset<4>(a & b) << endl; // 0110\n" <<
		
		"\n (5) | : bitwise OR\n\
   cout << bitset<4>(a | b) << endl; // 1111\n" <<
		
		"\n (6) ^ : bitwise XOR\n\
   cout << bitset<4>(a ^ b) << endl; // 1001(하나만 1인 경우 빼곤 전부 0)" << endl;

	cout << "\n#2. Bit Flag" <<
		"\n - 1바이트 크기의 unsigned object를 이용하면 64(2^8)가지 경우의 수를 나타낼 수 있다." <<
		"\n   이를 이용해 8가지 binary variable들의 상태를 한번에 통제할 수 있다." <<
		
		"\n\n   ex. const unsigned char item1 = 1 << 0 // 0001" <<
		"\n       const unsigned char item2 = 1 << 1 // 0010" <<
		"\n       const unsigned char item3 = 1 << 2 // 0100" << 
		"\n       const unsigned char item4 = 1 << 3 // 1000" <<
		"\n       unsigned char item_flag = 0b0000" << 
		
		"\n\n       item_flag |= item1		 // 0000 | 0001 == 0001" <<
		"\n       item_flag &= item2		 // 0001 & 0010 == 0000"<<
		"\n       item_flag |= (item3 | item4)	 // 0000 | 0100 | 1000 == 1100" << 
		"\n       item_flag &= ~item3		 // 1100 & 1011 == 1000" << 
		"\n       item_flag & item1		 // 1000 & 0001 == 0000(10진수로 0이면 false이므로 false)" <<
		"\n       item_flag & item4		 // 1000 & 1000 == 1000(10진수로 0만 아니면 true이므로 true)" << endl;

	cout << "" <<
		"" <<
		"" <<
		"" <<
		"" << endl;

}