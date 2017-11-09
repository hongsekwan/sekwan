//
//					기초 실습 프로그램  e02ArrayRealloc(배열 값 재배치 등)
//
#include <iostream>
#include <iomanip>
using namespace std;
#define	N 80 
void  main()
{
	int	i, array[N];	// space : 시작위치의 공백 갯수,  temp : 임시값 저장 

									// 공   통 : 출력은 행 단위로 지정된 원소를 출력하되 좌측과 우측의 공백을 일치(좌우대칭/중앙배치)
									//				출력부분은 함수화하는 것이 바람직하나 함수화는 2학기 강의에서 설명예정

									// 문제 1.	배열 array[i]의 값에 그 원소의 첨자 값을 넣고 그 결과를 5자리 수로 출력하라(행당 13)
	cout << "\n문제 1 : 배열의 원소 값 넣기\n";
	for (i = 0; i<N; i++) {
		array[i] = i;
		if (i % 13 == 0) cout << endl << setw(10) << " ";
		cout << setw(5) << array[i];
	}
	cout << endl;
	// 문제 2.	배열의 원소 값을 아래와 같이 재배치한 후 그 결과를 5자리 수로 출력하라(행당 13)
	//				첨자 0, 1, 2 ... 의 원소 값을 N-1, N-2, N-2로 재배치(역순 재배치)
	cout << "\n문제 2 : 배열 값 역순 재배치\n";
	for (i = N-1; i>=0; i--) {
		array[i] = i;
		if (i % 13 == 0) cout << endl << setw(10) << " ";
		cout << setw(5) << array[i];
	}
	cout << endl;
	// 문제 3.	배열의 원소 값을 아래와 같이 재배치한 후 그 결과를 5자리 수로 출력하라(행당 13)
	//				인접한 홀수번째 원소 값과 짝수번째 원소 값을 재배치
	cout << "\n문제 3 : 배열의 홀수/짝수 원소 값 교환 배치\n";
	for (i = N - 2; i >= 0; i--) {
		array[i] = i;
		if (i % 13 == 0) cout << endl << setw(10) << " ";
		if(i%2==0)cout << setw(5) << array[i];
		else if (i % 2 != 0)cout << setw(5) << array[i]+2;
	}
	cout << endl;
	// 문제 4.	문제 3의 재배치 값을 원래대로 환원한 후 그 결과를 5자리 수로 출력하라(행당 13)
	cout << "\n문제 4 : 배열의 홀수/짝수 원소 값을 원래대로 복원(문제 2와 동일하게 출력)\n";

	for (i = N - 2; i >= 0; i--) {
		array[i] = i;
		if (i % 13 == 0) cout << endl << setw(10) << " ";
		if (i % 2 == 0)cout << setw(5) << array[i];
		else if (i % 2 != 0)cout << setw(5) << array[i];
	}
	cout << endl;
	// 문제 5. 문제 2의 재배치 값을 복원한 후 그 결과를 5자리 수로 출력하라(행당 13)
	cout << "\n문제 5 : 배열 값 최초 값으로 복원(문제1과 동일한 결과 출력)\n";
	for (i = 0 ; i < N; i++) {
		array[i] = i;
		if (i % 13 == 0) cout << endl << setw(10) << " ";
		if (i % 2 == 0)cout << setw(5) << array[i];
		else if (i % 2 != 0)cout << setw(5) << array[i];
	}
	cout << endl;
	system("pause");
}
