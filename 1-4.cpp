#include <iostream>

int main(void){
	for (int i= 0; i< 4; i++){
		for (int j= 0; j<=i; j++) {
			std::cout << "*"; //���
		}
		std::cout << "\n"; //���� ������ �ٲٱ�
	} //���� for��
	return 0;
}