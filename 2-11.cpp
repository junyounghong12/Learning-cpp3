#include <iostream>
using namespace std;

int main(){
	int k, n=0;
	int sum=0;
	cout << "�� ���� �Է��ϼ���>>"; //printf ����
	cin >> n; //scanf ����
	for(k=1; k<=n; k++) {
		sum += k;
	} //�ݺ���
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl; //printf ����
	return 0;
}