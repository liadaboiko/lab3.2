// Lab_03_2.cpp
// < ����� ���������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// ����� 1: ������������ � ���������� ����
	if ((x + 5 < 0) && ( 0 == c))
		F = ((1.0/a*x) - b);
	if (x + 5 > 0 && c != 0)
		F = ((x - a) / x * 1.0);
	if (!((x + 5 < 0) && ( 0 == c)) && !(x + 5 > 0 && c != 0))
		F = (10.0*x)/(c - 4);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ������ ����
	if ((x + 5 < 0) && (0 == c))
		F = ((1.0 / a * x) - b);
	else
		if (x + 5 > 0 && c != 0)
			F = ((x - a) / x * 1.0);
		else
			F = (10.0 * x) / (c - 4);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
