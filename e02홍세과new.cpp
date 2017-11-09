//
//					기초 실습 프로그램  e02ArrayReallocNew(배열 값 출력 조정)
//
#include <iostream>
#include <iomanip>
using namespace std;
#define	N 80 
void  main()
{
	int	i, space, temp, row, digit, array[N];	// 변수 설명  space : 시작위치 공백 갯수
												// temp : 임시값 저장  row : 행당 원소의 수
												// digit : 원소의 자리수

												// 공   통 : 출력은 행 단위로 지정된 원소를 출력하되 좌측과 우측의 공백을 일치(좌우대칭/중앙배치)
												//				문제 3번의 경우 특수한 경우로 예외적인 처리가 불가피하나 다른 문제는 함수화가 가능하며
												//				함수화는 2학기 교과목에서 강의 예정

												// 문제 1.	배열 array[i]의 값에 그 원소의 첨자 값을 넣고 그 결과를 6자리 수로 출력하라(행당 12)
	cout << "\n문제 1 : 배열의 원소 값 넣기 및 출력(6자리, 행당 12)\n";
	for (i = 0; i<N; i++) {
		array[i] = i;
		if (i % 12 == 0) cout << endl << setw(5) << " ";
		cout << setw(6) << array[i];
	}
	cout << endl;
	// 문제 2.	배열의 홀수/짝수 원소 값을 교환한 후 그 결과를 7자리 수로 출력하라(행당 10)
	cout << "\n문제 2 : 배열의 홀수/짝수 원소 값을 교환(7자리, 행당 10)\n";
	for (i = 1; i<N+1; i++) {
		array[i] = i;
		if ((i-1) % 10 == 0) cout << endl << setw(5) << " ";
		if (i % 2 != 0)cout << setw(7) << array[i];
		else if (i % 2 == 0)cout << setw(7) << array[i] - 2; 
	}
	cout << endl;
	// 문제 3.	배열의 원소 값을 역순으로 재배치한 후 그 결과를 8자리 수로 출력하라(행당 9)
	//				첨자 0, 1, 2 ... 의 원소 값을 N-1, N-2, N-2로 재배치(역순 재배치)
	cout << "\n문제 3 : 배열 값 역순 재배치(8자리, 행당 9)\n";
	temp = N;
	for (i = 0; i<N ; i++) {
		array[i] = temp ;
		if (i % 9 == 0) cout << endl << setw(5) << " ";
		if (temp % 2 != 0)cout << setw(8) << array[i];
		else if (temp % 2 == 0)cout << setw(8) << array[i] - 2;
		temp--;
	}
	cout << endl;
	// 문제 4.	배열의 홀수/짝수 원소 값을 교환한 후 그 결과를 10자리 수로 출력하라(행당 7)
	cout << "\n문제 4 : 배열의 홀수/짝수 원소 값을 교환(10자리, 행당 7)\n";
	temp = (N - 1);
	for (i = 0; i<N; i++) {
		array[i] = temp;
		if (i % 7 == 0) cout << endl << setw(5) << " ";
		if (temp % 2 != 0)cout << setw(10) << array[i];
		else if (temp % 2 == 0)cout << setw(10) << array[i] ;
		temp--;
	}
	cout << endl;
	// 문제 5.	배열의 원소 값을 역순으로 재배치한 후 그 결과를 8자리 수로 출력하라(행당 10)
	//				첨자 0, 1, 2 ... 의 원소 값을 N-1, N-2, N-2로 재배치(역순 재배치)
	cout << "\n문제 5 : 배열의 원소 값을 역순으로 재배치(8자리, 행당 10)\n";
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
