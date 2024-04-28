#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[50];
    char address[50];
    int age;

    cout << "이름은?"; //질문 출력
    cin.getline(name, 50); //cin.getline()을 이용
    cout << "주소는?"; //질문 출력
    cin.getline(address, 50); //cin.getline()을 이용
    cout << "나이는?"; //질문 출력
    cin >> age;

    cout << name << ", " << address << ", " << age << "세" << endl; //결과 출력
    return 0;
}