#include <iostream>

int main(void){
	for (int i= 0; i< 4; i++){
		for (int j= 0; j<=i; j++) {
			std::cout << "*"; //출력
		}
		std::cout << "\n"; //다음 행으로 바꾸기
	} //이중 for문
	return 0;
}