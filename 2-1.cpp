#include <iostream>
using namespace std;

int main() {
	for (int n=1; n<=100; n++){
		cout << n; //출력
		if (n % 10==0) //10의 배수인 경우
			cout << endl; //다음 행으로 바꾸기
		else //10의 배수가 아닌 경우
			cout << '\t'; //탭으로 분리하기
	}
}