/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

(���̵� �� ���� - ����)  A�� 1~10���̷� �� �� ���ڸ� ������ ���Է��� �����ÿ�.
����Լ� :  if�� / goto��
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
//	cout << "A�� �Է��Ͻÿ�" << endl;
//	cin >> A;
//
//	cout << "B�� �Է��Ͻÿ�" << endl;
//	cin >> B;
//
//	int Sum = A + B;
//
//	cout << "�� ���� ����" << Sum << endl;
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
	cout << "A�� �Է��Ͻÿ�" << endl;
	cin >> A;

	if (1 <= A && A <= 10)
	{
			
	}
	else
	{
		cout << "���ڸ� �ٽ� �Է��Ͻÿ� (1 ~ 10)" << endl;
		goto Reinput;
	}

	cout << "B�� �Է��Ͻÿ�" << endl;
	cin >> B;

	int Sum = A + B;

	cout << "A�� B�� ����" << Sum << "�Դϴ�." << endl;
	
	return 0;
}