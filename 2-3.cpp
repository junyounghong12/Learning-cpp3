#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "�� ���� �Է��϶�>>"; //���
	cin >> a >> b; //�� �� �Է�

	if (a<b) a=b; //b�� a���� ũ�� a�� b�� ���� ����
	cout << "ū �� = " << a; //���

	return 0;
}