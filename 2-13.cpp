#include <iostream>
#include <cstring>
using namespace std;

bool Error() //잘못된 입력을 가려내는 함수
{
	if (cin.fail()) { 
		cin.clear();
		cin.ignore(100, '\n');
		cout << "잘못된 입력입니다." << endl; 
		return 1;
	}
	else
		return 0;
} 

int main(){
	int menu; //메뉴 번호 변수
	int people; //사람 수 변수

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl; //출력
	while(1){
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> menu; //메뉴 번호 입력

		//조건문 사용
		if (Error()) continue; //잘못된 입력 검사
		else if (menu==1){
			cout << "몇인분?";
			cin >> people; //인분 입력
			if (Error()) continue; //잘못된 입력 검사
			else if (people < 1) {
				cout << "다시 주문하세요!!" << endl;
				continue;
			}
			cout << "짬뽕 " << people << "인분 나왔습니다" << endl;
			continue;
		}
		else if (menu==2){
			cout << "몇인분?";
			cin >> people; //인분 입력
			if (Error()) continue; //잘못된 입력 검사
			else if (people < 1) {
				cout << "다시 주문하세요!!" << endl;
				continue;
			}
			cout << "짜장 " << people << "인분 나왔습니다" << endl;
			continue;
		}
		else if (menu==3){
			cout << "몇인분?";
			cin >> people; //인분 입력
			if (Error()) continue; //잘못된 입력 검사
			else if (people < 1) {
				cout << "다시 주문하세요!!" << endl;
				continue;
			}
			cout << "군만두 " << people << "인분 나왔습니다" << endl;
			continue;
		}
		else if (menu==4){
			cout << "오늘 영업은 끝났습니다." << endl;
			return 0;
		}
		else {
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
	} //while 반복
}