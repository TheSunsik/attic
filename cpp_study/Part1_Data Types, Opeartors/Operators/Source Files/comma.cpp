#include <iostream>

void study_comma()
{
	using namespace std;

	cout << "------------------------------------------------" << endl;

	cout << "\n�� �ٿ� �������� ������ ������ �� ����� �� �ִ� �����ڴ�. ���ø� ���� �����Ѵ�." << endl;

	cout << "\n  int x = 1, y = 2;" <<
		"\n  (++x, ++y, x += y, --x);" <<
		"\n  cout << x << y << endl;  // 43 ���" << endl;

	cout << "\n  int x = 1, y = 2;" <<
		"\n  int z = (++x, y++, x += y, --x); // comma operator�� ����� �Ҵ��� �� �������� ������ ���� �Ҵ��" <<
		"\n  cout << x << y << z << endl;  // 434 ���" << endl;
	
	cout << "\n  int x = 1, y = 2;" <<
		"\n  int z;" <<
		"\n  z = ++x, ++y, x = x + y, --x;" <<
		"\n  cout << x << y << z << endl; // ��ǥ �����ڴ� precedence�� ���� ���� �����ڶ� z�� �Ҵ��� ���� �Ͼ\n" << endl;
}