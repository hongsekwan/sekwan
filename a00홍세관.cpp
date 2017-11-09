//
//        역량 평가용 프로그램
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
	cout << ">> 1+2+ ... +N에서 N 값을 입력하세요 (종료 = 0) ? ";
	cin >> N;
	if (N == 0) goto next1;
	cout << "   계산 방식            if문          for문        while문           함수" << endl;
	i = 1;
aa:
	// 문제 1 : if 문을 활용한 합산(1+2+...+N)
	if (i != N+1)
	{
		sum1 += i;
			i++;
		goto aa;
	}

	// 문제 2 : for문을 활용한 합산(1+2+...+N)
	for (i = 1; i < N + 1; i++)
	{
		sum2 += i;

	}

	// 문제 3 : while문을 활용한 합산(1+2+...+N)
	i = 1;
	while(i<N +1)
	{
		sum3= sum3+ i;
		++i;
	}

	// 문제 4 : 함수를 활용한 합산(1+2+...+N)
	factorial(N);
	cout << "   계산 결과" << "             " << sum1 << "              " << sum2   <<"              " << sum3  <<"              " << factorial(N) << endl;
	goto loop1;

next1:
	cout << endl << endl;

loop2:
	cout << ">> 1*2* ... *N에서 N 값을 입력하세요 (종료 = 0) ? ";
	cin >> N;
	if (N == 0) goto next2;
	cout << "   계산 방식            if문          for문        while문           함수" << endl;
	sum4 = 1;
	sum5 = 1;
	sum6 = 1;
	i = 1;
ss:
	// 문제 5 : if 문을 활용한 factorial 계산(1*2*...*N)
	if (i != N + 1)
	{
		sum4 *= i;
		i++;
		goto ss;
	}

	// 문제 6 : for문을 활용한 factorial 계산(1*2*...*N)
	for (i = 1; i < N + 1; i++)
	{
		sum5 *= i;

	}

	// 문제 7 :  while문을 활용한 factorial 계산(1*2*...*N)
	i = 1;
	while (i<N + 1)
	{
		sum6 = sum6 * i;
		i++;
	}

	// 문제 8 :  함수를 활용한 factorial 계산(1*2*...*N)
	factorial2(N);
	cout << "   계산 결과" << "             " << sum4 << "              " << sum5 << "              " << sum6 << "              " << factorial2(N) << endl;

	goto loop2;

next2:
	cout << endl;
	return 0;
}

