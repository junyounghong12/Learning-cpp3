#include <iostream>
#include <cstring>
using namespace std;

bool Error() //�߸��� �Է��� �������� �Լ�
{
	if (cin.fail()) { 
		cin.clear();
		cin.ignore(100, '\n');
		cout << "�߸��� �Է��Դϴ�." << endl; 
		return 1;
	}
	else
		return 0;
} 

int main(){
	int menu; //�޴� ��ȣ ����
	int people; //��� �� ����

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl; //���
	while(1){
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> menu; //�޴� ��ȣ �Է�

		//���ǹ� ���
		if (Error()) continue; //�߸��� �Է� �˻�
		else if (menu==1){
			cout << "���κ�?";
			cin >> people; //�κ� �Է�
			if (Error()) continue; //�߸��� �Է� �˻�
			else if (people < 1) {
				cout << "�ٽ� �ֹ��ϼ���!!" << endl;
				continue;
			}
			cout << "«�� " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}
		else if (menu==2){
			cout << "���κ�?";
			cin >> people; //�κ� �Է�
			if (Error()) continue; //�߸��� �Է� �˻�
			else if (people < 1) {
				cout << "�ٽ� �ֹ��ϼ���!!" << endl;
				continue;
			}
			cout << "¥�� " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}
		else if (menu==3){
			cout << "���κ�?";
			cin >> people; //�κ� �Է�
			if (Error()) continue; //�߸��� �Է� �˻�
			else if (people < 1) {
				cout << "�ٽ� �ֹ��ϼ���!!" << endl;
				continue;
			}
			cout << "������ " << people << "�κ� ���Խ��ϴ�" << endl;
			continue;
		}
		else if (menu==4){
			cout << "���� ������ �������ϴ�." << endl;
			return 0;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
	} //while �ݺ�
}