#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "두 수를 입력하라>>"; //출력
	cin >> a >> b; //두 수 입력

	if (a<b) a=b; //b가 a보다 크면 a에 b의 값을 저장
	cout << "큰 수 = " << a; //출력

	return 0;
}