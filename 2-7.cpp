#include <iostream>
#include <cstring> //strcmp 사용
using namespace std;

int main() {
	char pw[30];

	while (strcmp("yes", pw)) //while 반복문("yes"가 입력되어야 종료)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>"; //출력
		cin.getline(pw, 30, '\n'); //cin.getline()을 이용
	}
	cout << "종료합니다..." << endl; //출력

	return 0;
}