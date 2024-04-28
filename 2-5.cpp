#include <iostream>
using namespace std;

int main(){
	//100개 미만의 문자 입력
	char str[100];
	cout << "문자들을 입력하라(100개 미만).\n"; //출력
	cin.getline(str, 100, '\n'); //cin.getline()을 이용

	int n= 0;
	for (int i=0; i<100; i++){	
		if (str[i]=='x') n++; //문자가 x면 n이 1 증가
	} //x의 개수 찾는 반복문

	cout << "x의 개수는 " << n; //출력
	return 0;
}