#include <iostream>
#include <cstring> //strcmp ���
using namespace std;

int main() {
	char pw[30];

	while (strcmp("yes", pw)) //while �ݺ���("yes"�� �ԷµǾ�� ����)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>"; //���
		cin.getline(pw, 30, '\n'); //cin.getline()�� �̿�
	}
	cout << "�����մϴ�..." << endl; //���

	return 0;
}