#include <iostream>
#include <cstring> //strlen() ���
using namespace std;

int main() {
	char name[5][100];
	cout << 5 << " ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>"; //���
	for (int i=0; i<5; i++){			
		cin.getline(name[i], 100, ';'); //cin.getline()�� �̿�
	} //�ݺ���

	int index=0; //������� ���� �� �̸��� index�� �����ϴ� ����
	int long1=0; //������� ���� �� �̸��� ���̸� �����ϴ� ����
	int long2=0; //name[j]�� ���̸� �����ϴ� ����

	for (int j=0; j<5; j++){
		cout << j+1 << " : " << name[j] << endl; //�̸� ���
		long2=(int)strlen(name[j]); //long2�� name[j]�� ���̸� ����

		if (long1<long2){
			long1=long2; //long1�� long2 ����
			index=j; //index�� j ����
		} //���ǹ�
	} //�ݺ���
	cout << "���� �� �̸��� " << name[index] << endl; //���� �� �̸� ���
	return 0;
}