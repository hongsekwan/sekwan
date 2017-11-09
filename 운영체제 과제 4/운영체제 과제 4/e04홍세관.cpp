//
//		원 및 사각형의 면적 등을 계산하는 프로그램  e04CircleRect
//
#include <iostream>  
#include <iomanip>
#include <cmath>
#include <math.h>
#define	PI  3.141592
using namespace std;


void  main()
{
	int			line1, line2, radius;		// 사각형 및 원의 길이와 반지름 변수
	double		ans;						// 연산 결과 값

		// 공통		길이 또는 반지름의 입력 값(##)은 최대 2자리 정수로 가정
		//				길이 또는 반지름의 단위는 cm로 간주

	// 문제 1.	정사각형과 직사각형의 면적 및 둘레 계산
	//				면적 및 둘레를 계산할 때 함수 사용(함수 오버로딩을 추천)
	cout << "\n>> 문제 1. 사각형의 면적 및 둘레 계산\n";
	for (;;)
	{
		cout <<"     "<< setw(15) << ">> 정사각형의 한변이 길이<##>를 입력하세요 (종료 =0)?";
		cin >> line1;
		if (line1==0)
		{
			break;
		}
			cout<< endl;
		cout << "     " << setw(15) << "..정사각형의 면적은 "<< line1*line1<<"cm2 입니다."<<endl;
		cout << setw(15) << "..정사각형의 둘레는 " << line1*4 << "cm 입니다." << endl << endl;
		
		cout << setw(15) << ">> 직사각형의 한변이 길이<##><##>를 입력하세요 (종료 =0 0)?";
		cin >> line1 >> line2;
		if ((line1 == 0)&&(line2 == 0))
		{
			break;
		} 
			cout<< endl;
		cout << setw(15) << "..정사각형의 면적은 " << line1*line2 << "cm2 입니다." << endl;
		cout << setw(15) << "..정사각형의 둘레는 " << (line1+line2)* 2 << "cm 입니다." << endl;
	}
	// 문제 2.	원의 면적 및 둘레 계산
	cout << "\n>> 문제 2. 원의 면적 및 들레 계산\n";
	for (;;)
	{
		cout << setw(15) << ">> 원의 반지름 값<##>을 입력하세요 (종료 =0)?";
		cin >> radius;
		if (radius == 0)
		{
			break;
		}
		cout << endl;
		cout << setw(15) << "..원의 면적은 " << PI*radius*radius << "cm2 입니다." << endl;
		cout << setw(15) << "..원의 둘레는 " << 2* radius*PI << "cm 입니다." << endl << endl;
	}
	// 문제 3.	사각형과 원의 면적 및 둘레 비교
	//				주어진 직사각형과 동일한 면적의 정사각형의 한변의 길이 계산
	//				주어진 직사각형과 동일한 면적의 원의 반지름 계산
	//				주어진 직사각형과 동일한 둘레의 원의 반지름 계산
	cout << "\n>> 문제 3. 사각형과 원의 면적 및 둘레 비교\n";
	for (;;)
	{
		cout << setw(15) << ">> 직사각형의 한변이 길이<##><##>를 입력하세요 (종료 =0 0)?";
		cin >> line1 >> line2;
		if ((line1 == 0) && (line2 == 0))
		{
			break;
		}
		cout << endl;
		cout << setw(15) << "..직사각형과 동일한 면적의 정사각형의 한변의 길이는 " << sqrt((double)(line1*line2)) << "cm 입니다." << endl;
		cout << setw(15) << "..직사각형과 동일한 면적의 원의 반지름은  " << sqrt((double)(line1*line2) / PI) << "cm 입니다." << endl;
		cout << setw(15) << "..직사각형과 동일한 둘레의 원의 반지름은 " << (double)(line1+line2)/(PI)  << "cm 입니다." << endl;
	
	}
	// 문제 4.	아래 공식과 문제 2의 함수를 활용하여 구의 표면적과 부피를 계산
	//				구의 표면적 = 4*PI*r*r,   구의 부피 = 4/3*PI*r*r*r   (r은 반지름)
	//				구의 표면적 계산시 원의 둘레 계산 함수 사용
	//				구의 부피 계산시 원의 면적 계산 함수 사용
	//
	cout << "\n>> 문제 4. 구의 표면적 및 부피 계산\n";
	for (;;)
	{
		cout << setw(15) << ">> 구의 반지름 값<##>을 입력하세요 (종료 =0)?";
		cin >> radius;
		if (radius == 0)
		{
			break;
		}
		cout << endl;
		cout << setw(15) << "..구의 표면적은 " << 4*PI*radius*radius << "cm2 입니다." << endl;
		cout << setw(15) << "..구의 부피는 " << (double)(4* PI*radius*radius*radius)/3 << "cm 입니다." << endl << endl;
	}
	cout << "\n>> 작업이 완료되었습니다 !\n\n";
	system("pause");
}
