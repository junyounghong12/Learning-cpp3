#include <iostream>
using namespace std;

int main() {
	for (int n=1; n<=100; n++){
		cout << n; //���
		if (n % 10==0) //10�� ����� ���
			cout << endl; //���� ������ �ٲٱ�
		else //10�� ����� �ƴ� ���
			cout << '\t'; //������ �и��ϱ�
	}
}