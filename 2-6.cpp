#include <iostream>
#include <cstring> //strcmp ���
using namespace std;

int main(){
	char pw1[50];
	char pw2[50];

	cout << "�� ��ȣ�� �Է��ϼ���>>"; //���
	cin >> pw1; //�Է�
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>"; //���
	cin >> pw2; //�Է�

	if (strcmp(pw1, pw2)==0) //strcmp ���
		cout << "�����ϴ�" << endl; //��� ���
	else
		cout << "���� �ʽ��ϴ�" << endl; //��� ���
}