#include <iostream>	
using namespace std;
int sum(int, int); //�Լ� ���� ����

int main(){
	int n=0;
	cout << "�� ���� �Է��ϼ���>>"; //print ����
	cin >> n; //scanf ����
	cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�." << endl; //print ����
	return 0;
}

int sum(int a, int b){
	int k, res=0;
	for (k=a; k<=b; k++) {
		res += k;
	} //�ݺ���
	return res;
}