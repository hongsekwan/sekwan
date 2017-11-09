//
//					���� ���ں� ���� ���α׷�  e05FreqCalc
//               
//
#include	<iostream>
#include	<iomanip>
#include <cstring>
using namespace std;

char cbuff[] = "ATSBVQCBLDGKEMWFPODGFQLHDUIDACJGMZKDELKRMBSNOSAQEMWLOFHPEDQERASNKTFDUEWSVBNHDWETYXOPAYSZXDZMLFDRIYCW";
struct num
{
	char ap;
	int num1;
};
int	maxfreq(int frq[], int no)		// �ִ� ���� �ε����� ���ϴ� �Լ�
{
	int  i, mx = 0;

	for (i = 0; i<no; i++) if (frq[i]>frq[mx]) mx = i;
	return mx;
}

int	minfreq(int frq[], int no)		// �ּ� ���� �ε����� ���ϴ� �Լ�
{
	int  i, mn = 0;

	for (i = 0; i<no; i++) if (frq[i]<frq[mn]) mn = i;
	return mn;
}
void main()
{
	int	i,j=0, freq[26] = {0,};				// freq[]					���ĺ��� �� �� ���� �迭
	int	total = 0;					// total						��ü �� �ջ� �� ���� 
	int	max = 0, min = 0;		// max, min				�ִ� �� �� �ּ� �� ���� �ʱ�ȭ
	int	maxidx=0, minidx=100;		// maxidx, minidx	�ִ� �� �� �ּ� ���� ������ ���ĺ� �ε���
	
							// ���� 1.	�迭 cbuff[]�� ����� ���ڿ�  �� ���ĺ� �󵵸� ����Ͽ� ���
							//				���� ��¾�� ����
	total= strlen(cbuff);
	cout << ">> ���� 1. �Է� �ڷ� �� �� ��� ���\n";
	cout << endl << endl;
	cout << ".. �Է��ڷ�" << endl;
	for ( i = 0; i < total; i++)
	{
		cout << cbuff[i];
		switch (cbuff[i])
		{
		case'A':
			freq[0]++;
			break;
		case'B':
			freq[1]++;
			break;
		case'C':
			freq[2]++;
			break;
		case'D':
			freq[3]++;
			break;
		case'E':
			freq[4]++;
			break;
		case'F':
			freq[5]++;
			break;
		case'G':
			freq[6]++;
			break;
		case'H':
			freq[7]++;
			break;
		case'I':
			freq[8]++;
			break;
		case'J':
			freq[9]++;
			break;
		case'K':
			freq[10]++;
			break;
		case'L':
			freq[11]++;
			break;
		case'M':
			freq[12]++;
			break;
		case'N':
			freq[13]++;
			break;
		case'O':
			freq[14]++;
			break;
		case'P':
			freq[15]++;
			break;
		case'Q':
			freq[16]++;
			break;
		case'R':
			freq[17]++;
			break;
		case'S':
			freq[18]++;
			break;
		case'T':
			freq[19]++;
			break;
		case'U':
			freq[20]++;
			break;
		case'V':
			freq[21]++;
			break;
		case'W':
			freq[22]++;
			break;
		case'X':
			freq[23]++;
			break;
		case'Y':
			freq[24]++;
			break;
		case'Z':
			freq[25]++;
			break;
		default:
			break;
		}
	}
	cout << endl;
	cout << "..�� ���" << endl;
	for ( i = 65; i < 91; i++)
	{
		cout << setw(3) << (char)i;
	}
	cout << endl;
	cout << "  ----------------------------------------------------------------------------" << endl;
	for (i = 0; i < 26; i++)
	{
		cout << setw(3) << freq[i];
		if (maxidx<freq[i])
		{
			maxidx = freq[i];
		}
		if (minidx>freq[i])
		{
			minidx = freq[i];
		}
		
	}
	for ( j= 0; j < 26; j++)
	{
		
		if (freq[j] == maxidx)
		{
			break;
		}
	}
	int s = 0;
	for (s = 0; s < 26; s++)
	{
		if (freq[s] == minidx)
		{
			break;
		}
	}
	// ���� 2.	���ĺ� �� ���� ��, �ִ� �� �ּ� �� ���� �̿� �ش��ϴ� ���ĺ��� ���
	//				���� ��¾�� ����
	cout << "\n>> ���� 2. �� ���� ��, �ִ� �� �ּ� �� �� ���\n"<<endl;
	cout << ".. �� ���� ��:" << setw(6) << total <<endl;
	cout << ".. �ִ� �� :" << setw(6) << maxidx <<" �ش� ���� :"<<char(j+65) << endl;
	cout << ".. �ּ� �� :" << setw(6) << minidx << " �ش� ���� :" << char(s + 65)<< endl;

	// ���� 3.	���� 2�� �ִ� �� �ּ� �� ���� �ش� �ε����� ����ϴ� �κ��� �Լ�ȭ
	//				��� �κ��� �Լ�ȭ���� ����. ����� ���� 2�� ����
	cout << "\n>> ���� 3. ���� 2�� �Լ�ȭ ó��\n";
	j = maxfreq(freq, 26);
	s = minfreq(freq, 26);
	cout << ".. �� ���� ��:" << setw(6) << total << endl;
	cout << ".. �ִ� �� :" << setw(6) << maxidx << " �ش� ���� :" << char(j + 65) << endl;
	cout << ".. �ּ� �� :" << setw(6) << minidx << " �ش� ���� :" << char(s + 65) << endl;
	cout << endl;
	system("pause");
}
