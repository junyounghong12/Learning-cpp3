#include <iostream>
#include <cstring> //strcmp 사용
using namespace std;

int main(){
	char pw1[50];
	char pw2[50];

	cout << "새 암호를 입력하세요>>"; //출력
	cin >> pw1; //입력
	cout << "새 암호를 다시 한 번 입력하세요>>"; //출력
	cin >> pw2; //입력

	if (strcmp(pw1, pw2)==0) //strcmp 사용
		cout << "같습니다" << endl; //결과 출력
	else
		cout << "같지 않습니다" << endl; //결과 출력
}