/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

(난이도 업 버전 - 조건)  A는 1~10사이로 그 외 숫자를 받으면 재입력을 받으시오.
사용함수 :  if문 / goto문
*/

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//
//	cout << "A를 입력하시오" << endl;
//	cin >> A;
//
//	cout << "B를 입력하시오" << endl;
//	cin >> B;
//
//	int Sum = A + B;
//
//	cout << "두 값의 합은" << Sum << endl;
//
//	return 0;
//}

#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	Reinput:
	cout << "A를 입력하시오" << endl;
	cin >> A;

	if (1 <= A && A <= 10)
	{
			
	}
	else
	{
		cout << "숫자를 다시 입력하시오 (1 ~ 10)" << endl;
		goto Reinput;
	}

	cout << "B를 입력하시오" << endl;
	cin >> B;

	int Sum = A + B;

	cout << "A와 B의 합은" << Sum << "입니다." << endl;
	
	return 0;
}