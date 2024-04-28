#include <iostream>	
using namespace std;
int sum(int, int); //함수 원형 선언

int main(){
	int n=0;
	cout << "끝 수를 입력하세요>>"; //print 역할
	cin >> n; //scanf 역할
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << " 입니다." << endl; //print 역할
	return 0;
}

int sum(int a, int b){
	int k, res=0;
	for (k=a; k<=b; k++) {
		res += k;
	} //반복문
	return res;
}