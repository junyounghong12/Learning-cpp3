#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[50];
    char address[50];
    int age;

    cout << "�̸���?"; //���� ���
    cin.getline(name, 50); //cin.getline()�� �̿�
    cout << "�ּҴ�?"; //���� ���
    cin.getline(address, 50); //cin.getline()�� �̿�
    cout << "���̴�?"; //���� ���
    cin >> age;

    cout << name << ", " << address << ", " << age << "��" << endl; //��� ���
    return 0;
}