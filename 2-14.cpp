#include <iostream>
#include <cstring> //strcmp ���
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
	char coffee[100];
	int num = 0; //�� �� ����
	int price = 0; //�ֹ� �ݾ� ����
	int sum = 0; //�� ���� ����
	
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl; //�޴��� �� ���� ���

	while (sum < 20000){
		cout << "�ֹ�>> ";
		cin >> coffee >> num; //Ŀ���̸��� �� ���� �Է�

		if (Error()) continue; //�߸��� �Է� �˻�
		else if (strcmp(coffee, "����������")==0) //������������ ���
			price = 2000 * num; //�ֹ��ݾ� ����
		else if (strcmp(coffee, "�Ƹ޸�ī��")==0) //�Ƹ޸�ī���� ���
			price = 2300 * num; //�ֹ��ݾ� ����
		else if (strcmp(coffee, "īǪġ��")==0) //īǪġ���� ���
			price = 2500 * num; //�ֹ��ݾ� ����

		sum += price; //�� ���� ���� sum�� �ֹ��ݾ� �ݿ�
		cout << price << "���Դϴ�. ���ְ� �弼��" << endl; //��� ���
	} //�Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�.

	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl; //��� ���
	return 0;
}