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

product::product()
{
	cout << "\n�����������\n";
}

product::product(char* NAME, int UPC)
{
	strcpy(name, NAME);
	upc = UPC;
}

void product::setID(int ID)//����� ��������(�������������� ��������)
{
	id = ID;
}

void product::setName(char* NAME)
{
	strcpy(name, NAME);
}

void product::setUPC(int UPC)
{
	upc = UPC;
}

void product::setProizv(char* PROIZV)
{
	strcpy(proizv, PROIZV);
}

void product::setZena(int ZENA)
{
	zena = ZENA;
}

void product::setSrok(int SROK)
{
	srok = SROK;
}

void product::setKolich(int KOLICH)
{
	kolich = KOLICH;
}

product::~product(void)
{
	cout << "\n�����������\n";
}

void product::Print()
{

	cout << "ID: " << product::id << endl;
	cout << "���: " << product::name << endl;
	cout << "UPC: " << product::upc << endl;
	cout << "�������������: " << product::proizv << endl;
	cout << "����: " << product::zena << endl;
	cout << "���� ��������: " << product::srok << endl;
	cout << "����������: " << product::kolich << endl;
}

int product::getID(void)//���������� ��������
{
	return id;
}

char* product::getName(void)
{
	return name;
}

int product::getUPC(void)
{
	return upc;
}

char* product::getProizv(void)
{
	return proizv;
}

int product::getZena(void)
{
	return zena;
}

int product::getSrok(void)
{
	return srok;
}

int product::getKolich(void)
{
	return kolich;
}

void product::SUMM(int k)
{
	if (zena <= k)
	{
		cout << endl << name << " - ���� ����� <= " << k << " ������." << endl;
	}
	else 
	{
		cout << endl << name << " - ���� ����� �� ��������!" << endl;
	}
};

void product::SROK(int k)
{
	if (srok <= k)
	{
		cout << name << " - ���� �������� ����� ������ �� ����������� " << k << " ���(����)." << endl;
	}
	else
	{
		cout << endl << name << " - ����� ���������!" << endl;
	}
};

void product::NAME(char* k,int i)
{

	if (!strcmp(name, k))
	{
		cout << "��,�����  " << " ���������� � ������." << endl;
		cout << "UPC: " << upc << endl;
		cout << "���: " << k << endl;
		cout << "�������������: " << proizv << endl;
		cout << "����: " << zena << endl;
	}
	else
	{
		cout << "� ���������, �� �� ����� " << k << " �  " <<i<<" ������"<< endl;
	}

}