#include <iostream>
#include <cstring> //strcmp 사용
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
	char coffee[100];
	int num = 0; //잔 수 변수
	int price = 0; //주문 금액 변수
	int sum = 0; //총 매출 변수
	
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl; //메뉴와 그 가격 출력

	while (sum < 20000){
		cout << "주문>> ";
		cin >> coffee >> num; //커피이름과 잔 수를 입력

		if (Error()) continue; //잘못된 입력 검사
		else if (strcmp(coffee, "에스프레소")==0) //에스프레소인 경우
			price = 2000 * num; //주문금액 저장
		else if (strcmp(coffee, "아메리카노")==0) //아메리카노인 경우
			price = 2300 * num; //주문금액 저장
		else if (strcmp(coffee, "카푸치노")==0) //카푸치노인 경우
			price = 2500 * num; //주문금액 저장

		sum += price; //총 매출 변수 sum에 주문금액 반영
		cout << price << "원입니다. 맛있게 드세요" << endl; //결과 출력
	} //하루에 20000원 이상 벌게 되면 카페를 닫는다.

	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl; //결과 출력
	return 0;
}