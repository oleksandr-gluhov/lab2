// Lab_02.cpp
// < �������, ��� ������ >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 3
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	z1 = ( sin(2*a) + sin(5*a) - sin(3*a) ) / (cos(a) + 1 - 2*(sin(2*a) * sin(2*a) ));
	//z2 = sin(2*a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}