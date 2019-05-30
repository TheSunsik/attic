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

		cout << "\n   å���Ǹ� �������� �� �������� �ǵ��ư����� �� �� ����Ѵ�." <<
			"\n   marker :" << 
			"\n   ..." <<
			"\n     (command)" << 
			"\n   ..." <<
			"\n     goto marker; // marker�������� ���ư��� ���α׷��� �ٽ� ����. if�� �ȿ� ���°� ������." << 
			"\n" << endl;
	}

	if (choice == 'l')
	{
		cout << "** �⺻������ ���ǹ��� 0�� �ԷµǴ� ���� loop�� ����ȴ� **" << endl;

		cout << "\n### 1. for loop ###" << endl;

		cout << "\n   for loop ������ ���� ���� for (i in 1:5)�� C++������(�����ϰ�) ǥ���Ѵٰ� �����ϸ� �ȴ�." <<
			"\n     a) ���� i�� ���ǵ��� �ʾ��� ���̹Ƿ� �����ϰ�" <<
			"\n     b) i�� �������� increment��ų������ ������ ����," <<
			"\n     c) ��� i�� increment��ų���� ���Ѵ�." <<
			"\n     �̸� ��ȣ�ȿ� �� ��� ǥ���ϸ� �ȴ�: for (a; b; c)" <<
			"\n   **���� : c�� ���� ����ǰ� b�� evaluate�ȴ� **\n" <<

			"\n   ex. int input = 10;" <<
			"\n       for (int i = 1; i <= 5; i++) {" <<
			"\n          input++;" <<
			"\n          cout << i << '  ' << input << endl;" <<
			"\n       }\n" <<

			"\n   i <= 5�� true�� ������ {�����ִ� statement����} ����ȴ�. ���� �� loop�� 1  11, ... , 5  15�� ����Ѵ�" <<
			"\n   �̶� iterator�� i�� local scope�ȿ��� ���ǵǾ����Ƿ� duration�� loop�� �����ϰ� ���� ��������." <<
			"\n   loop �ۿ����� iterator�� ����ϰ��� �Ѵٸ� �Ʒ��� ���� �̸� �ۿ��� �����ϸ� �ȴ�.\n" <<

			"\n   ex. int input = 10;" <<
			"\n       int i = 1;" <<
			"\n       for (; i <= 5; i++) {" <<
			"\n          input++;" <<
			"\n          cout << i << '  ' << input << endl;" <<
			"\n       }" <<
			"\n   ������ ����� ���� �� �ְ�, i�� �ۿ��� ����� �� �ִ�. �ռ� increment�� ���� �ǰ� evaluate�� �� ������ �ȴٰ� �ߴµ�," <<
			"\n   �׷��� ������ �� loop�� ������ i�� ���� Ȯ���غ��� 5�� �ƴ϶� 6�̴�.\n" <<

			"\n   �̷� ǥ�� ���п� ���� ������ loop���� ���� ������ iterator�� ����� �� �ְ� �ȴ�." <<
			"\n   ex. for (int i = 1, j = 1; (i <= 5) && (j <= 5) ; i++, j += 2)" << 
			"\n       j�� 5, i�� 3�� �� loop�� ���������� ����ǰ� i�� 4, j�� 7�� �� ���ǹ��� false�� �ǹǷ� loop�� ����ȴ�." << endl;

		cout << "\n### 2. while ###" << endl;

		cout << "\n   ���ǹ��� 0�� �Էµ� ������ loop�� �����Ű�� �� �� ����Ѵ�(Ư���� �� ����). C++������ do-while���� �����ϴµ�," <<
			"\n   ���� ������ �����ϴ� while���̶�� �����ϸ� �ȴ�(��, ���� ������ �ϰ� �� �� while���� 0�� �Էµ� ������ �ݺ�).\n" <<
			
			"\n   ex. int selection;" <<
			"\n       do {" << 
			"\n           cout << \"1. add\" << endl;" <<
			"\n           cout << \"2. sub\" << endl;" <<
			"\n           cout << \"3. mult\" << endl;" <<
			"\n           cout << \"4. div\" << endl;" <<
			"\n           cin >> selection" <<
			"\n       } while (selection <= 0 || selection >= 5);\n" <<

			"\n   �������� �Է��� ���� ������(��, selection�� 1�� 4 ���̶� �� ���ǹ��� 0�� ��ȯ�� ������) �� loop�� �ݺ��ϰ� �ȴ�." << endl;
	}

}