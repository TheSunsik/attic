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

		cout << "\n - if (���ǹ�)" << 
			"\n   {" <<
			"\n      (���ǹ��� 0�� �ƴ� ���� ��ȯ�� �� ����Ǵ� operation)" <<
			"\n   }" <<
			"\n   else" <<
			"\n   {" <<
			"\n      (���ǹ��� �ڷ����¿� ��� ���� 0�� ��ȯ�� �� ����Ǵ� operation)" <<
			"\n   }" <<
			"\n   operation�� ����Ǵ� ���� local scope ���̱� ������ �� �߰�ȣ �ȿ��� ������ ������ �ش� �߰�ȣ �ۿ��� �� �� ����. " << endl;

		cout << "\n### 2. swith-case statement ###" << endl;

		cout << "\n - � ������ ��ü���� ���� ���� �����ؾ� �� operation�� ���� �� if-else ��� ����ϱ� ���� ���� �б⹮�̴�." <<
			"\n   switch (�� ����. X��� ����.)" <<
			"\n   {" <<
			"\n   case x1:" <<
			"\n      (X == x1�� �� ������ operation)" <<
			"\n   case x2:" <<
			"\n      (X == x1 �Ǵ� x2�� �� ������ operation)" <<
			"\n   case x3:" <<
			"\n      (X == x1 �Ǵ� x2 �Ǵ� x3�� �� ������ operation)" <<
			"\n   ..." <<
			"\n   }" << 
			"\n   ���� ���� ��ó�� X == x1�� �����ϸ� �� �Ʒ� case�鵵 ��� ����ȴٴ� ���� �����ؾ� �Ѵ�. break�� �̸� ��� �� �ִ�.\n" << endl;
	}

	if (choice == 'j')
	{
		cout << "\n### 1. break / continue ###" << endl;

		cout << "\n   break�� �ش� iteration���� 'loop�� ������ ����'�� �ϰ� return�� '�Լ��� ������ ������ ����'�� �Ѵ�." <<
			"\n   continue�� �ش� iteration���� �������� '���� iteration���� ����'�ϴ� ������ �Ѵ�." << endl;

		cout << "\n### 2. goto ###" << endl;

		cout << "\n" << endl;
	}
}