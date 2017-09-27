//
//					영문 문자빈도 조사 프로그램  e05FreqCalc
//               
//
#include	<iostream>
#include	<iomanip>
using namespace std;

char cbuff[] = "ATSBVQCBLDGKEMWFPODGFQLHDUIDACJGMZKDELKRMBSNOSAQEMWLOFHPEDQERASNKTFDUEWSVBNHDWETYXOPAYSZXDZMLFDRIYCW";


void main()
{
	int	i, freq[26];				// freq[]					알파벳의 빈도 값 저장 배열
	int	total = 0;					// total						전체 빈도 합산 값 저장 
	int	max = 0, min = 100;		// max, min				최대 값 및 최소 값 변수 초기화
	int	maxidx, minidx;		// maxidx, minidx	최대 값 및 최소 값을 가지는 알파벳 인덱스

							// 문제 1.	배열 cbuff[]에 저장된 문자열  및 알파벳 빈도를 계산하여 출력
							//				별도 출력양식 참조
	cout << ">> 문제 1. 입력 자료 및 빈도 통계 출력\n";
	cout << endl << endl;
	cout << ".. 입력자료" << endl;
	for ( i = 0; i < min; i++)
	{
		cout << cbuff[i];

	}

	// 문제 2.	알파벳 총 문자 수, 최대 및 최소 빈도 값과 이에 해당하는 알파벳을 출력
	//				별도 출력양식 참조
	cout << "\n>> 문제 2. 총 문자 수, 최대 및 최소 빈도 값 출력\n";


	// 문제 3.	문제 2의 최대 및 최소 빈도 값과 해당 인덱스를 계산하는 부분을 함수화
	//				출력 부분은 함수화에서 제외. 출력은 문제 2와 동일
	cout << "\n>> 문제 3. 문제 2의 함수화 처리\n";

	cout << endl;
	system("pause");
}
