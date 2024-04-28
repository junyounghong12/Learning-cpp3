#include <iostream>
#include <cstring> //strlen() 사용
using namespace std;

int main() {
	char name[5][100];
	cout << 5 << " 명의 이름을 ';'으로 구분하여 입력하세요\n>>"; //출력
	for (int i=0; i<5; i++){			
		cin.getline(name[i], 100, ';'); //cin.getline()을 이용
	} //반복문

	int index=0; //현재까지 가장 긴 이름의 index를 저장하는 변수
	int long1=0; //현재까지 가장 긴 이름의 길이를 저장하는 변수
	int long2=0; //name[j]의 길이를 저장하는 변수

	for (int j=0; j<5; j++){
		cout << j+1 << " : " << name[j] << endl; //이름 출력
		long2=(int)strlen(name[j]); //long2에 name[j]의 길이를 저장

		if (long1<long2){
			long1=long2; //long1에 long2 저장
			index=j; //index에 j 저장
		} //조건문
	} //반복문
	cout << "가장 긴 이름은 " << name[index] << endl; //가장 긴 이름 출력
	return 0;
}