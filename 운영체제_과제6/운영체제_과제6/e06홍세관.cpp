//
//		������ ������ ���� ���α׷�(�ð� ��ȯ ���α׷�)  e06TimeCalc 
//
#include <iostream>
#include <iomanip>
using namespace std;


void main(void)
{
	int		input;												// �� ���� �Է� ��
	int		second, minute, hour, day, year;	// ��, ��, �ð�, ��, ���� ǥ���ϴ� ����

												//
												// ���� :		�� ���� �ð��� �Է¹޾� �� -> �ð� -> �� -> �� -> ���� ����Ͽ�
												//				XXXXX�ʴ� A�� B�� C�� D�ð� E�� F�� �Դϴٿ� ���� ���
												//				�� ���� ���� 0�� ��� ����� �����ϰ� 1���� 365�Ϸ� ����

	for (;;)
	{
		cout << "\n>> �ʴ����� �ð��� �Է��Ͻÿ�( 2147483647�� ����, ���� <= 0 ) ? ";
		cin >> input;
		if (input <= 0)
		{
			break;
		}
		cout << ".. " << input << "�ʴ� ";
		year = input / 31536000;
		day = (input % 31536000)/ 86400 ;
		hour = (input% 86400) / 3600 ;
		minute = (input% 3600 )/ 60 ;
		second = input % 60;
		
		if (year!=0)
		{
			cout << year << "�� ";
		}
		if(day!=0)
		{
			cout << day << "�� ";
		}
		if (hour!=0)
		{
			cout << hour << "�ð� ";
		}
		if (minute!=0)
		{
			cout << minute << "�� ";
		}
		if (second != 0)
		{
			cout << second << "�� ";
		}
		cout <<  "�Դϴ�.";
	}
	cout << "\n>> �۾��� �Ϸ�Ǿ����ϴ� !\n\n";
	system("pause");
}