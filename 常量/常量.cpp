#include<iostream>
using namespace std;

//�������巽��
//1.#define �곣��
//2.const���εı���

//1.#define �곣��
#define day 7
//constexpr auto day = 7;

int main()
{
	//Day = 14; //����Day�ǳ�����һ���޸ľͻᱨ��
	cout << "һ����" << day << "��" << endl;
	//2.const���εı���
	const int month = 12;
	//month = 12; //����month�ǳ�����һ���޸ľͻᱨ��
	cout << "һ����" << month << "��" << endl;
	system("pause");
	return 0;
}