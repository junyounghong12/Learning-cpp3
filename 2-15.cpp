#include <iostream>
#include <cstdlib> //atoi() ���
using namespace std;

int main() {
	int a, b; //�� ���� ����
	char c; //������ ����
	int result; //���� ��� ����

	while (1) //while �ݺ���
	{
		cout << "? "; //���
        cin >> a >> c >> b; //����, ������, ���� �Է�

		switch (c) //switch�� �̿�
		{
		case '+': //����(+)
			result = a + b;
			break;
		case '-': //����(-)
			result = a - b;
			break;
		case '*': //����(*)
			result = a * b;
			break;
		case '/': //������(/)
			result = a / b;
			break;
		case '%': //������(%)
			result = a % b;
			break;
		}
		cout << a << " " << c << " " << b << " = " << result << endl; //��� ���
	}
	return 0;
}