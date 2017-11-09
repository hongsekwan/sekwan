//
//					기본 연산 및 판단 등의 프로그램  e03ArithSwitch  
//
#include <iostream>   
#include <iomanip>
#include <ctime>			// time 함수 호출시 필수
using namespace std;
int add(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

int sub(int a, int b)
{
	int sum = 0;
	sum = a - b;
	return sum;
}
int mal(int a, int b)
{
	int sum = 0;
	sum = a * b;
	return sum;
}
int din(int a, int b)
{
	int sum = 0;
	sum = a / b;
	return sum;
}
int rem(int a, int b)
{
	int sum = 0;
	sum = a % b;
	return sum;
}
void  main()
{
	int		i, var1, var2, year, month, tries;
	char		op, ch, answer, guess;
	//				var1/var2  문제 1-2의 피연산자			op			문제 1-2의 연산자 변수
	//				year, month											문제 4의  년 월 일 변수
	//				ch				문제 3의 입력 문자				answer		문제 5의 생성된 문자
	//				tries			문제 5의 반복횟수				guess		문제 5의 추정 문자
	//				필요한 변수 추가 사용

	// 문제 1.	연산작업( + - * / % )을 case 문을 활용하여 구현
	//				입력 예) 100 + 200		51 * 2		201 % 100		종료시 0 0 0
	cout << "\n문제 1. case 문을 활용한 연산식( + - * / % ) 처리\n";
			// 200 + 300  --->  var1=200   op="+"  var2=300
	for (;;) {
		cout << setw(10) << ">>var1 연산자 var2 (종료= 000)?";
		cin >> var1;
		if (var1 == 000)
		{
			break;
		}
		cin >> op >> var2;
		
		switch (op)
		{
		case 43:
			cout << setw(10) << "..연산 결과 :" << var1 << "+" << var2 << "=" << var1 + var2 << endl;
			break;
		case 45:
		;
			cout << setw(10) << "..연산 결과 :" << var1 << "-" << var2 << "=" << var1 - var2 << endl;
			break;
		case 42:
			
			cout << setw(10) << "..연산 결과 :" << var1 << "*" << var2 << "=" << var1 * var2 << endl;
			break;
		case 47:
			
			cout << setw(10) << "..연산 결과 :" << var1 << "/" << var2 << "=" << var1 / var2 << endl;
			break;
		case 37:
			
			cout << setw(10) << "..연산 결과 :" << var1 << "%" << var2 << "=" << var1 % var2 << endl;
			break;
		default:
			cout << "다시입력\n";
			break;
		}
	}
cout << endl;
									// 문제 2.	문제 1의 각 case문내 실행문을 최적의 함수로 대체 
									//				기타 작업은 문제 1과 동일
	cout << "\n문제 2. 함수를 활용한 연산식( + - * / % ) 처리\n";
	for (;;) {
		cout << setw(10) << ">>var1 연산자 var2 (종료= 000)?";
		cin >> var1;
		if (var1 == 000)
		{
			break;
		}
		cin >> op >> var2;

		switch (op)
		{
		case 43:
			cout << setw(10) << "..연산 결과 :" << var1 << "+" << var2 << "=" << add(var1,var2) << endl;
			break;
		case 45:
			;
			cout << setw(10) << "..연산 결과 :" << var1 << "-" << var2 << "=" << sub(var1, var2) << endl;
			break;
		case 42:

			cout << setw(10) << "..연산 결과 :" << var1 << "*" << var2 << "=" << mal(var1, var2) << endl;
			break;
		case 47:

			cout << setw(10) << "..연산 결과 :" << var1 << "/" << var2 << "=" << din(var1, var2) << endl;
			break;
		case 37:

			cout << setw(10) << "..연산 결과 :" << var1 << "%" << var2 << "=" << rem(var1, var2) << endl;
			break;
		default:
			cout << "다시입력\n";
			break;
		}
	}
	cout << endl;

	// 문제 3.	입력한 문자의 대/소문자, 숫자, 기타 문자 여부를 판단하는 논리 구현
	//				문자의 ASCII 값을 인덱스로 하여 적절하게 처리
	cout << "\n문제 3. 입력한 문자의 영문자, 숫자, 기타 문자 여부 판단\n";
	for (;;)
	{
		cout << setw(10) << ">> 판별할 1개의 문자를 입력하시요 (종료= /, 공백제외)?";
		cin >> ch;
		if (ch == 47) {
			break;
		}
		if (ch > 64 && ch < 91)
		{
			cout << setw(10) << ".. 입력문자" << ch << "는(은) 대문자입니다." << endl;
		}
		else if (ch > 96 && ch < 123) {
			cout << setw(10) << ".. 입력문자" << ch << "는(은) 소문자입니다." << endl;
		}
		else if (ch > 47 && ch < 58) {
			cout << setw(10) << ".. 입력문자" << ch << "는(은) 숫자입니다." << endl;
		}
		else {
			cout << setw(10) << ".. 입력문자" << ch << "는(은) 기타문자입니다." << endl;
		}
	}

	// 문제 4.	월별 날짜의 수 구하기
	//				해당 월이 2월인 경우 연도 입력을 요구하여 윤년 여부를 판단하여 날짜 수 계산
	cout << "\n문제 4. 월별 날짜의 수 구하기\n";
	for (;;) {
		cout << setw(10) << ">> 날짜의 수를 알고 싶은 달을 입력하시요 (종료= 0)?";
		cin >> month ;
		if (month == 0) {
			break;
		}
		switch (month)
		{
		case 1:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 2:
			cout << setw(10) << ">>해당연도를 입력하세요";
			cin >> year;
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
				cout << setw(10) << ".." << month << "월의 일수는 29입니다." << endl;
			}
			else
			{
				cout << setw(10) << ".." << month << "월의 일수는 28입니다." << endl;
			}
			break;
		case 3:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 4:
			cout << setw(10) << ".." << month << "월의 일수는 30입니다." << endl;
			break;
		case 5:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 6:
			cout << setw(10) << ".." << month << "월의 일수는 30입니다." << endl;
			break;
		case 7:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 8:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 9:
			cout << setw(10) << ".." << month << "월의 일수는 30입니다." << endl;
			break;
		case 10:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		case 11:
			cout << setw(10) << ".." << month << "월의 일수는 30입니다." << endl;
			break;
		case 12:
			cout << setw(10) << ".." << month << "월의 일수는 31입니다." << endl;
			break;
		default:
			break;
		}
		
	}
	// 문제 5.	컴퓨터가 생성한 임의 문자 알아 맞추기
	//				임의 문자는 아래와 같이 생성
	cout << "\n문제 5. 컴퓨터가 생성한 임의 문자 알아 맞추기\n";
	tries = 1;
	srand((unsigned)time(NULL));		// #include <ctime> 선언
	answer = (rand() % 26) + 97;						// answer에 소문자의 ascii 값 저장 
	for (;;)
	{
		cout << setw(10) << tries << ". 알파벳 소문자를 맞추어 보세요?";
			cin >> guess;
			if(answer>guess)
			{ 
				cout << setw(10) << "입력한 문자의 아스키 코드값이 작습니다" << endl;
				tries++;
			}
			else if (answer<guess)
			{
				cout << setw(10) << "입력한 문자의 아스키 코드값이 큽니다" << endl;
				tries++;
			}
			else
			{
				cout << setw(10) << "수고하셨습니다. "<< tries<<"번 만에 맞쳤습니다" << endl;
				break;
			}

	}

	cout << "\n>> 작업이 완료되었습니다 !\n\n";
	system("pause");
}
