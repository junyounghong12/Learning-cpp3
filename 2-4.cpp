#include <iostream>
using namespace std;

int main(){
	float max;
	float a, b, c, d, e;

	cout << "5���� �Ǽ��� �Է��϶�>> "; //���
	cin >> a >> b >> c >> d >> e; //5���� �Ǽ� �Է�

	max=a;
	//���ǹ� �̿��� ���� ū �� ã�´�.
	if (b>max) max=b;
	if (c>max) max=c;
	if (d>max) max=d;
	if (e>max) max=e;

	cout << "���� ū �� = " << max; //���
	return 0;
}