#include <iostream>
using namespace std;

int main(){
	float max;
	float a, b, c, d, e;

	cout << "5개의 실수를 입력하라>> "; //출력
	cin >> a >> b >> c >> d >> e; //5개의 실수 입력

	max=a;
	//조건문 이용해 제일 큰 수 찾는다.
	if (b>max) max=b;
	if (c>max) max=c;
	if (d>max) max=d;
	if (e>max) max=e;

	cout << "제일 큰 수 = " << max; //출력
	return 0;
}