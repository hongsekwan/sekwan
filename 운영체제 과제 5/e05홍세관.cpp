//
//					���� ���ں� ���� ���α׷�  e05FreqCalc
//               
//
#include	<iostream>
#include	<iomanip>
using namespace std;

char cbuff[] = "ATSBVQCBLDGKEMWFPODGFQLHDUIDACJGMZKDELKRMBSNOSAQEMWLOFHPEDQERASNKTFDUEWSVBNHDWETYXOPAYSZXDZMLFDRIYCW";


void main()
{
	int	i, freq[26];				// freq[]					���ĺ��� �� �� ���� �迭
	int	total = 0;					// total						��ü �� �ջ� �� ���� 
	int	max = 0, min = 100;		// max, min				�ִ� �� �� �ּ� �� ���� �ʱ�ȭ
	int	maxidx, minidx;		// maxidx, minidx	�ִ� �� �� �ּ� ���� ������ ���ĺ� �ε���

							// ���� 1.	�迭 cbuff[]�� ����� ���ڿ�  �� ���ĺ� �󵵸� ����Ͽ� ���
							//				���� ��¾�� ����
	cout << ">> ���� 1. �Է� �ڷ� �� �� ��� ���\n";
	cout << endl << endl;
	cout << ".. �Է��ڷ�" << endl;
	for ( i = 0; i < min; i++)
	{
		cout << cbuff[i];

	}

	// ���� 2.	���ĺ� �� ���� ��, �ִ� �� �ּ� �� ���� �̿� �ش��ϴ� ���ĺ��� ���
	//				���� ��¾�� ����
	cout << "\n>> ���� 2. �� ���� ��, �ִ� �� �ּ� �� �� ���\n";


	// ���� 3.	���� 2�� �ִ� �� �ּ� �� ���� �ش� �ε����� ����ϴ� �κ��� �Լ�ȭ
	//				��� �κ��� �Լ�ȭ���� ����. ����� ���� 2�� ����
	cout << "\n>> ���� 3. ���� 2�� �Լ�ȭ ó��\n";

	cout << endl;
	system("pause");
}
