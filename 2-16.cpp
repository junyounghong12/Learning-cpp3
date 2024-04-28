#include <iostream>
#include <cstring> //strlen() 이용
#include <cctype> //tolower(), isalpha() 이용
using namespace std;

int main() {
	int number[26] = { 0 };
	char text[10000];

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl; //지시문 출력
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl; //지시문 출력
	cin.getline(text, 10000, ';'); //cin.getline()을 이용

	for (int i = 0; i < strlen(text); i++) //for문, strlen() 이용
	{
		char c = tolower(text[i]); //문자를 소문자로 바꿀 때
		if (isalpha(c)) //알파벳인지 검사하는 조건문
			number[c - 'a']++;
	}
	cout << "총 알파벳 수 " << strlen(text) << endl; //총 알파벳 수 출력

	for (int i = 0; i < 26; i++) {
		char s = 'a' + i;
		cout << s << " (" << number[i] << ") : "; //출력
		for (int j = 0; j < number[i]; j++) {
			cout << "*"; //* 출력
		}
		cout << endl; //행 바꾸기
	} //이중 for문
	return 0;
}