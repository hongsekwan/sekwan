//
//					���� �ǽ� ���α׷�  e02ArrayReallocNew(�迭 �� ��� ����)
//
#include <iostream>
#include <iomanip>
using namespace std;
#define	N 80 
void  main()
{
	int	i, space, temp, row, digit, array[N];	// ���� ����  space : ������ġ ���� ����
												// temp : �ӽð� ����  row : ��� ������ ��
												// digit : ������ �ڸ���

												// ��   �� : ����� �� ������ ������ ���Ҹ� ����ϵ� ������ ������ ������ ��ġ(�¿��Ī/�߾ӹ�ġ)
												//				���� 3���� ��� Ư���� ���� �������� ó���� �Ұ����ϳ� �ٸ� ������ �Լ�ȭ�� �����ϸ�
												//				�Լ�ȭ�� 2�б� �����񿡼� ���� ����

												// ���� 1.	�迭 array[i]�� ���� �� ������ ÷�� ���� �ְ� �� ����� 6�ڸ� ���� ����϶�(��� 12)
	cout << "\n���� 1 : �迭�� ���� �� �ֱ� �� ���(6�ڸ�, ��� 12)\n";
	for (i = 0; i<N; i++) {
		array[i] = i;
		if (i % 12 == 0) cout << endl << setw(5) << " ";
		cout << setw(6) << array[i];
	}
	cout << endl;
	// ���� 2.	�迭�� Ȧ��/¦�� ���� ���� ��ȯ�� �� �� ����� 7�ڸ� ���� ����϶�(��� 10)
	cout << "\n���� 2 : �迭�� Ȧ��/¦�� ���� ���� ��ȯ(7�ڸ�, ��� 10)\n";
	for (i = 1; i<N+1; i++) {
		array[i] = i;
		if ((i-1) % 10 == 0) cout << endl << setw(5) << " ";
		if (i % 2 != 0)cout << setw(7) << array[i];
		else if (i % 2 == 0)cout << setw(7) << array[i] - 2; 
	}
	cout << endl;
	// ���� 3.	�迭�� ���� ���� �������� ���ġ�� �� �� ����� 8�ڸ� ���� ����϶�(��� 9)
	//				÷�� 0, 1, 2 ... �� ���� ���� N-1, N-2, N-2�� ���ġ(���� ���ġ)
	cout << "\n���� 3 : �迭 �� ���� ���ġ(8�ڸ�, ��� 9)\n";
	temp = N;
	for (i = 0; i<N ; i++) {
		array[i] = temp ;
		if (i % 9 == 0) cout << endl << setw(5) << " ";
		if (temp % 2 != 0)cout << setw(8) << array[i];
		else if (temp % 2 == 0)cout << setw(8) << array[i] - 2;
		temp--;
	}
	cout << endl;
	// ���� 4.	�迭�� Ȧ��/¦�� ���� ���� ��ȯ�� �� �� ����� 10�ڸ� ���� ����϶�(��� 7)
	cout << "\n���� 4 : �迭�� Ȧ��/¦�� ���� ���� ��ȯ(10�ڸ�, ��� 7)\n";
	temp = (N - 1);
	for (i = 0; i<N; i++) {
		array[i] = temp;
		if (i % 7 == 0) cout << endl << setw(5) << " ";
		if (temp % 2 != 0)cout << setw(10) << array[i];
		else if (temp % 2 == 0)cout << setw(10) << array[i] ;
		temp--;
	}
	cout << endl;
	// ���� 5.	�迭�� ���� ���� �������� ���ġ�� �� �� ����� 8�ڸ� ���� ����϶�(��� 10)
	//				÷�� 0, 1, 2 ... �� ���� ���� N-1, N-2, N-2�� ���ġ(���� ���ġ)
	cout << "\n���� 5 : �迭�� ���� ���� �������� ���ġ(8�ڸ�, ��� 10)\n";
	temp = 0;
	for (i = 0; i<N; i++) {
		array[i] = temp;
		if (i % 10 == 0) cout << endl << setw(5) << " ";
		if (temp % 2 != 0)cout << setw(8) << array[i];
		else if (temp % 2 == 0)cout << setw(8) << array[i];
		temp++;
	}
	cout << endl;
	system("pause");
}
