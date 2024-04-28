#include <iostream>
using namespace std;

int main(){
	int k, n=0;
	int sum=0;
	cout << "끝 수를 입력하세요>>"; //printf 역할
	cin >> n; //scanf 역할
	for(k=1; k<=n; k++) {
		sum += k;
	} //반복문
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl; //printf 역할
	return 0;
}