//������� ����� Product: id, ������������, UPC,
//�������������, ����, ���� ��������, ����������.
//�������-����� ��������� ������ � ���������� �����
//(�������� ������������), ����� ����� ����� ��������.
//
//������� ������ ��������. �������: 
//a) ������ ������� ��� ��������� ������������; 
//b) ������ ������� ��� ��������� ������������, ���� �������
//�� ����������� ��������; 
//c) ������ �������, ���� �������� ������� ������ ���������.

#include "stdafx.h"
#include "Product.h"
#include "iostream"

using namespace std;

void dop()// timmy ������������ � ����� ������ timmy_clone
//����� �������� �������� (age) timmy, � tim ������� �� �������: ������� ��������� ����������.
{
	Person timmy(10);
	Person sally(15);

	Person tim = timmy;

	cout << timmy.age << " " << sally.age << " " << tim.age << endl;

	timmy.age = 23;

	cout << timmy.age << " " << sally.age << " " << tim.age << endl;
}

void inf()
{
	
	setlocale(LC_CTYPE, "rus");
	char t[200], c[200];
	int j, y, q, n, kolich, p = 0;
	product a[5];
	cout << "������� ������ ���������� �������(�����): ";
	cin >> kolich;

	cout << "������� ����� ��� ���������: ";
	cin >> j;

	cout << "������� ���� ��������: ";
	cin >> y;
	cout << endl;

		for (int w = 1; w <= kolich; w++)
		{
			cout << "������� ID: ";
			cin >> q;

			cout << "������� ��� ������ (�������������): ";
			cin >> t;

			cout << "������� ���� ������: ";
			cin >> n;
			cout << endl;

			a[w].setID(q);
			a[w].setName(t);
			a[w].setUPC(q);
			a[w].setProizv(t);
			a[w].setZena(n);
			a[w].setSrok(n);
			a[w].setKolich(n);
			a[w].Print();
			a[w].SUMM(j);
			a[w].SROK(y);
			cout << endl;
			p = (n*n)*kolich;
			cout << "<" << q << ">" << " ����� ������: " << p << endl << endl;
	}
		cout << "���� ����� ������ ��� ������: ";
		cin >> c;
		for (int i = 1; i <= kolich; i++)
		{
			a[i].NAME(c,i);
		}

}

void main()
{
	setlocale(LC_CTYPE, "rus");
	product a;
	int r;
	do
	{
		cout << "_____________________________1-������ ����������.______________________________" << endl;
		cout << "_____________________________2-�������� ����.__________________________________" << endl;
		cout << "_____________________________3-Dop.____________________________________________" << endl;	
		cout << "_____________________________4-������� ���������.______________________________" << endl;


		cin >> r;
		system("cls");
		switch (r)
		{
		case 1:  inf();			break;
		case 2:  system("cls");	break;
		case 3:  dop(); break;
		}
	} while (r != 4);
}