#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cout << "���ڿ� �Է�>> "; //���
	cin >> word; //���ڿ� �Է�

	for (int i=0; word[i]!='\0'; i++){
		for (int j=0; j<=i; j++){
			cout << word[j]; //1���� ���
		}
		cout << endl; //���� ������ �ٲٱ�
	} //���� for��
	return 0;
}