#include <iostream>
using namespace std;

int main(){
	//100�� �̸��� ���� �Է�
	char str[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n"; //���
	cin.getline(str, 100, '\n'); //cin.getline()�� �̿�

	int n= 0;
	for (int i=0; i<100; i++){	
		if (str[i]=='x') n++; //���ڰ� x�� n�� 1 ����
	} //x�� ���� ã�� �ݺ���

	cout << "x�� ������ " << n; //���
	return 0;
}