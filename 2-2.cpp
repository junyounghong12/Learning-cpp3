#include <iostream>
using namespace std;

int main(){
	for (int i=1; i<10; i++){
		for (int j=1; j<10; j++)
			cout << j << "×" << i << '=' << j*i << '\t'; //출력
		cout << endl; //다음 행으로 바꾸기
	} //이중 for문
	return 0;
}