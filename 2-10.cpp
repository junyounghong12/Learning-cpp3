#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cout << "문자열 입력>> "; //출력
	cin >> word; //문자열 입력

	for (int i=0; word[i]!='\0'; i++){
		for (int j=0; j<=i; j++){
			cout << word[j]; //1개씩 출력
		}
		cout << endl; //다음 행으로 바꾸기
	} //이중 for문
	return 0;
}