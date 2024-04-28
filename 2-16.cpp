#include <iostream>
#include <cstring> //strlen() �̿�
#include <cctype> //tolower(), isalpha() �̿�
using namespace std;

int main() {
	int number[26] = { 0 };
	char text[10000];

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl; //���ù� ���
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl; //���ù� ���
	cin.getline(text, 10000, ';'); //cin.getline()�� �̿�

	for (int i = 0; i < strlen(text); i++) //for��, strlen() �̿�
	{
		char c = tolower(text[i]); //���ڸ� �ҹ��ڷ� �ٲ� ��
		if (isalpha(c)) //���ĺ����� �˻��ϴ� ���ǹ�
			number[c - 'a']++;
	}
	cout << "�� ���ĺ� �� " << strlen(text) << endl; //�� ���ĺ� �� ���

	for (int i = 0; i < 26; i++) {
		char s = 'a' + i;
		cout << s << " (" << number[i] << ") : "; //���
		for (int j = 0; j < number[i]; j++) {
			cout << "*"; //* ���
		}
		cout << endl; //�� �ٲٱ�
	} //���� for��
	return 0;
}