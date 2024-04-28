#include <iostream>

int main(){
	int a= 0;
	for (int i=1; i<=10; i++)
		a+= i;
	std::cout << "1에서 10까지 더한 결과는 " << a << "입니다"; //출력
	return 0;
}