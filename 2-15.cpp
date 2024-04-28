#include <iostream>
#include <cstdlib> //atoi() 사용
using namespace std;

int main() {
	int a, b; //두 정수 변수
	char c; //연산자 변수
	int result; //연산 결과 변수

	while (1) //while 반복문
	{
		cout << "? "; //출력
        cin >> a >> c >> b; //정수, 연산자, 정수 입력

		switch (c) //switch문 이용
		{
		case '+': //덧셈(+)
			result = a + b;
			break;
		case '-': //뺌샘(-)
			result = a - b;
			break;
		case '*': //곱셈(*)
			result = a * b;
			break;
		case '/': //나눗셈(/)
			result = a / b;
			break;
		case '%': //나머지(%)
			result = a % b;
			break;
		}
		cout << a << " " << c << " " << b << " = " << result << endl; //결과 출력
	}
	return 0;
}