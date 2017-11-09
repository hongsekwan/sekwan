//
//		나머지 연산자 응용 프로그램(시간 변환 프로그램)  e06TimeCalc 
//
#include <iostream>
#include <iomanip>
using namespace std;


void main(void)
{
	int		input;												// 초 단위 입력 값
	int		second, minute, hour, day, year;	// 초, 분, 시간, 일, 연을 표현하는 변수

												//
												// 문제 :		초 단위 시간을 입력받아 분 -> 시간 -> 일 -> 월 -> 연을 계산하여
												//				XXXXX초는 A년 B월 C일 D시간 E분 F초 입니다와 같이 출력
												//				각 단위 값이 0인 경우 출력을 생략하고 1년은 365일로 고정

	for (;;)
	{
		cout << "\n>> 초단위의 시간을 입력하시요( 2147483647초 이하, 종료 <= 0 ) ? ";
		cin >> input;
		if (input <= 0)
		{
			break;
		}
		cout << ".. " << input << "초는 ";
		year = input / 31536000;
		day = (input % 31536000)/ 86400 ;
		hour = (input% 86400) / 3600 ;
		minute = (input% 3600 )/ 60 ;
		second = input % 60;
		
		if (year!=0)
		{
			cout << year << "년 ";
		}
		if(day!=0)
		{
			cout << day << "일 ";
		}
		if (hour!=0)
		{
			cout << hour << "시간 ";
		}
		if (minute!=0)
		{
			cout << minute << "분 ";
		}
		if (second != 0)
		{
			cout << second << "초 ";
		}
		cout <<  "입니다.";
	}
	cout << "\n>> 작업이 완료되었습니다 !\n\n";
	system("pause");
}