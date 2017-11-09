//
//					영문 문자빈도 조사 프로그램  e05FreqCalc
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
int	maxfreq(int frq[], int no)		// 최대 값의 인덱스를 구하는 함수
{
	int  i, mx = 0;

	for (i = 0; i<no; i++) if (frq[i]>frq[mx]) mx = i;
	return mx;
}

int	minfreq(int frq[], int no)		// 최소 값의 인덱스를 구하는 함수
{
	int  i, mn = 0;

	for (i = 0; i<no; i++) if (frq[i]<frq[mn]) mn = i;
	return mn;
}
void main()
{
	int	i,j=0, freq[26] = {0,};				// freq[]					알파벳의 빈도 값 저장 배열
	int	total = 0;					// total						전체 빈도 합산 값 저장 
	int	max = 0, min = 0;		// max, min				최대 값 및 최소 값 변수 초기화
	int	maxidx=0, minidx=100;		// maxidx, minidx	최대 값 및 최소 값을 가지는 알파벳 인덱스
	
							// 문제 1.	배열 cbuff[]에 저장된 문자열  및 알파벳 빈도를 계산하여 출력
							//				별도 출력양식 참조
	total= strlen(cbuff);
	cout << ">> 문제 1. 입력 자료 및 빈도 통계 출력\n";
	cout << endl << endl;
	cout << ".. 입력자료" << endl;
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
	cout << "..빈도 통계" << endl;
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
	// 문제 2.	알파벳 총 문자 수, 최대 및 최소 빈도 값과 이에 해당하는 알파벳을 출력
	//				별도 출력양식 참조
	cout << "\n>> 문제 2. 총 문자 수, 최대 및 최소 빈도 값 출력\n"<<endl;
	cout << ".. 총 문자 수:" << setw(6) << total <<endl;
	cout << ".. 최대 빈도 :" << setw(6) << maxidx <<" 해당 문자 :"<<char(j+65) << endl;
	cout << ".. 최소 빈도 :" << setw(6) << minidx << " 해당 문자 :" << char(s + 65)<< endl;

	// 문제 3.	문제 2의 최대 및 최소 빈도 값과 해당 인덱스를 계산하는 부분을 함수화
	//				출력 부분은 함수화에서 제외. 출력은 문제 2와 동일
	cout << "\n>> 문제 3. 문제 2의 함수화 처리\n";
	j = maxfreq(freq, 26);
	s = minfreq(freq, 26);
	cout << ".. 총 문자 수:" << setw(6) << total << endl;
	cout << ".. 최대 빈도 :" << setw(6) << maxidx << " 해당 문자 :" << char(j + 65) << endl;
	cout << ".. 최소 빈도 :" << setw(6) << minidx << " 해당 문자 :" << char(s + 65) << endl;
	cout << endl;
	system("pause");
}
