//
//        ���� �򰡿� ���α׷�
//
#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int N)
{
	int i ;
	int sum = 0;
	for (i = 1; i < N + 1; i++)
	{
		sum += i;
	}
	return sum;
}
int factorial2(int N)
{
	int i;
	int sum = 1;
	for (i = 1; i < N + 1; i++)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int  i, sum1, sum2, sum3, sum4, sum5, sum6, N;
	
	
loop1:
	sum1 = 0;
	sum2 = 0;
	sum3 = 0;
	cout << ">> 1+2+ ... +N���� N ���� �Է��ϼ��� (���� = 0) ? ";
	cin >> N;
	if (N == 0) goto next1;
	cout << "   ��� ���            if��          for��        while��           �Լ�" << endl;
	i = 1;
aa:
	// ���� 1 : if ���� Ȱ���� �ջ�(1+2+...+N)
	if (i != N+1)
	{
		sum1 += i;
			i++;
		goto aa;
	}

	// ���� 2 : for���� Ȱ���� �ջ�(1+2+...+N)
	for (i = 1; i < N + 1; i++)
	{
		sum2 += i;

	}

	// ���� 3 : while���� Ȱ���� �ջ�(1+2+...+N)
	i = 1;
	while(i<N +1)
	{
		sum3= sum3+ i;
		++i;
	}

	// ���� 4 : �Լ��� Ȱ���� �ջ�(1+2+...+N)
	factorial(N);
	cout << "   ��� ���" << "             " << sum1 << "              " << sum2   <<"              " << sum3  <<"              " << factorial(N) << endl;
	goto loop1;

next1:
	cout << endl << endl;

loop2:
	cout << ">> 1*2* ... *N���� N ���� �Է��ϼ��� (���� = 0) ? ";
	cin >> N;
	if (N == 0) goto next2;
	cout << "   ��� ���            if��          for��        while��           �Լ�" << endl;
	sum4 = 1;
	sum5 = 1;
	sum6 = 1;
	i = 1;
ss:
	// ���� 5 : if ���� Ȱ���� factorial ���(1*2*...*N)
	if (i != N + 1)
	{
		sum4 *= i;
		i++;
		goto ss;
	}

	// ���� 6 : for���� Ȱ���� factorial ���(1*2*...*N)
	for (i = 1; i < N + 1; i++)
	{
		sum5 *= i;

	}

	// ���� 7 :  while���� Ȱ���� factorial ���(1*2*...*N)
	i = 1;
	while (i<N + 1)
	{
		sum6 = sum6 * i;
		i++;
	}

	// ���� 8 :  �Լ��� Ȱ���� factorial ���(1*2*...*N)
	factorial2(N);
	cout << "   ��� ���" << "             " << sum4 << "              " << sum5 << "              " << sum6 << "              " << factorial2(N) << endl;

	goto loop2;

next2:
	cout << endl;
	return 0;
}

