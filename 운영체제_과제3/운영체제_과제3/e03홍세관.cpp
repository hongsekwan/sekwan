//
//					�⺻ ���� �� �Ǵ� ���� ���α׷�  e03ArithSwitch  
//
#include <iostream>   
#include <iomanip>
#include <ctime>			// time �Լ� ȣ��� �ʼ�
using namespace std;
int add(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

int sub(int a, int b)
{
	int sum = 0;
	sum = a - b;
	return sum;
}
int mal(int a, int b)
{
	int sum = 0;
	sum = a * b;
	return sum;
}
int din(int a, int b)
{
	int sum = 0;
	sum = a / b;
	return sum;
}
int rem(int a, int b)
{
	int sum = 0;
	sum = a % b;
	return sum;
}
void  main()
{
	int		i, var1, var2, year, month, tries;
	char		op, ch, answer, guess;
	//				var1/var2  ���� 1-2�� �ǿ�����			op			���� 1-2�� ������ ����
	//				year, month											���� 4��  �� �� �� ����
	//				ch				���� 3�� �Է� ����				answer		���� 5�� ������ ����
	//				tries			���� 5�� �ݺ�Ƚ��				guess		���� 5�� ���� ����
	//				�ʿ��� ���� �߰� ���

	// ���� 1.	�����۾�( + - * / % )�� case ���� Ȱ���Ͽ� ����
	//				�Է� ��) 100 + 200		51 * 2		201 % 100		����� 0 0 0
	cout << "\n���� 1. case ���� Ȱ���� �����( + - * / % ) ó��\n";
			// 200 + 300  --->  var1=200   op="+"  var2=300
	for (;;) {
		cout << setw(10) << ">>var1 ������ var2 (����= 000)?";
		cin >> var1;
		if (var1 == 000)
		{
			break;
		}
		cin >> op >> var2;
		
		switch (op)
		{
		case 43:
			cout << setw(10) << "..���� ��� :" << var1 << "+" << var2 << "=" << var1 + var2 << endl;
			break;
		case 45:
		;
			cout << setw(10) << "..���� ��� :" << var1 << "-" << var2 << "=" << var1 - var2 << endl;
			break;
		case 42:
			
			cout << setw(10) << "..���� ��� :" << var1 << "*" << var2 << "=" << var1 * var2 << endl;
			break;
		case 47:
			
			cout << setw(10) << "..���� ��� :" << var1 << "/" << var2 << "=" << var1 / var2 << endl;
			break;
		case 37:
			
			cout << setw(10) << "..���� ��� :" << var1 << "%" << var2 << "=" << var1 % var2 << endl;
			break;
		default:
			cout << "�ٽ��Է�\n";
			break;
		}
	}
cout << endl;
									// ���� 2.	���� 1�� �� case���� ���๮�� ������ �Լ��� ��ü 
									//				��Ÿ �۾��� ���� 1�� ����
	cout << "\n���� 2. �Լ��� Ȱ���� �����( + - * / % ) ó��\n";
	for (;;) {
		cout << setw(10) << ">>var1 ������ var2 (����= 000)?";
		cin >> var1;
		if (var1 == 000)
		{
			break;
		}
		cin >> op >> var2;

		switch (op)
		{
		case 43:
			cout << setw(10) << "..���� ��� :" << var1 << "+" << var2 << "=" << add(var1,var2) << endl;
			break;
		case 45:
			;
			cout << setw(10) << "..���� ��� :" << var1 << "-" << var2 << "=" << sub(var1, var2) << endl;
			break;
		case 42:

			cout << setw(10) << "..���� ��� :" << var1 << "*" << var2 << "=" << mal(var1, var2) << endl;
			break;
		case 47:

			cout << setw(10) << "..���� ��� :" << var1 << "/" << var2 << "=" << din(var1, var2) << endl;
			break;
		case 37:

			cout << setw(10) << "..���� ��� :" << var1 << "%" << var2 << "=" << rem(var1, var2) << endl;
			break;
		default:
			cout << "�ٽ��Է�\n";
			break;
		}
	}
	cout << endl;

	// ���� 3.	�Է��� ������ ��/�ҹ���, ����, ��Ÿ ���� ���θ� �Ǵ��ϴ� �� ����
	//				������ ASCII ���� �ε����� �Ͽ� �����ϰ� ó��
	cout << "\n���� 3. �Է��� ������ ������, ����, ��Ÿ ���� ���� �Ǵ�\n";
	for (;;)
	{
		cout << setw(10) << ">> �Ǻ��� 1���� ���ڸ� �Է��Ͻÿ� (����= /, ��������)?";
		cin >> ch;
		if (ch == 47) {
			break;
		}
		if (ch > 64 && ch < 91)
		{
			cout << setw(10) << ".. �Է¹���" << ch << "��(��) �빮���Դϴ�." << endl;
		}
		else if (ch > 96 && ch < 123) {
			cout << setw(10) << ".. �Է¹���" << ch << "��(��) �ҹ����Դϴ�." << endl;
		}
		else if (ch > 47 && ch < 58) {
			cout << setw(10) << ".. �Է¹���" << ch << "��(��) �����Դϴ�." << endl;
		}
		else {
			cout << setw(10) << ".. �Է¹���" << ch << "��(��) ��Ÿ�����Դϴ�." << endl;
		}
	}

	// ���� 4.	���� ��¥�� �� ���ϱ�
	//				�ش� ���� 2���� ��� ���� �Է��� �䱸�Ͽ� ���� ���θ� �Ǵ��Ͽ� ��¥ �� ���
	cout << "\n���� 4. ���� ��¥�� �� ���ϱ�\n";
	for (;;) {
		cout << setw(10) << ">> ��¥�� ���� �˰� ���� ���� �Է��Ͻÿ� (����= 0)?";
		cin >> month ;
		if (month == 0) {
			break;
		}
		switch (month)
		{
		case 1:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 2:
			cout << setw(10) << ">>�ش翬���� �Է��ϼ���";
			cin >> year;
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
				cout << setw(10) << ".." << month << "���� �ϼ��� 29�Դϴ�." << endl;
			}
			else
			{
				cout << setw(10) << ".." << month << "���� �ϼ��� 28�Դϴ�." << endl;
			}
			break;
		case 3:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 4:
			cout << setw(10) << ".." << month << "���� �ϼ��� 30�Դϴ�." << endl;
			break;
		case 5:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 6:
			cout << setw(10) << ".." << month << "���� �ϼ��� 30�Դϴ�." << endl;
			break;
		case 7:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 8:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 9:
			cout << setw(10) << ".." << month << "���� �ϼ��� 30�Դϴ�." << endl;
			break;
		case 10:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		case 11:
			cout << setw(10) << ".." << month << "���� �ϼ��� 30�Դϴ�." << endl;
			break;
		case 12:
			cout << setw(10) << ".." << month << "���� �ϼ��� 31�Դϴ�." << endl;
			break;
		default:
			break;
		}
		
	}
	// ���� 5.	��ǻ�Ͱ� ������ ���� ���� �˾� ���߱�
	//				���� ���ڴ� �Ʒ��� ���� ����
	cout << "\n���� 5. ��ǻ�Ͱ� ������ ���� ���� �˾� ���߱�\n";
	tries = 1;
	srand((unsigned)time(NULL));		// #include <ctime> ����
	answer = (rand() % 26) + 97;						// answer�� �ҹ����� ascii �� ���� 
	for (;;)
	{
		cout << setw(10) << tries << ". ���ĺ� �ҹ��ڸ� ���߾� ������?";
			cin >> guess;
			if(answer>guess)
			{ 
				cout << setw(10) << "�Է��� ������ �ƽ�Ű �ڵ尪�� �۽��ϴ�" << endl;
				tries++;
			}
			else if (answer<guess)
			{
				cout << setw(10) << "�Է��� ������ �ƽ�Ű �ڵ尪�� Ů�ϴ�" << endl;
				tries++;
			}
			else
			{
				cout << setw(10) << "�����ϼ̽��ϴ�. "<< tries<<"�� ���� ���ƽ��ϴ�" << endl;
				break;
			}

	}

	cout << "\n>> �۾��� �Ϸ�Ǿ����ϴ� !\n\n";
	system("pause");
}
