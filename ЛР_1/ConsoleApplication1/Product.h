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
#include "string.h"
#include <iostream>
using namespace std;

class Person
{
public:
	int age;
	Person(int age) : age(age) {}
};

class product
{
	char name[30];
	char proizv[30];
	int id;
	int upc;
	int zena;
	int srok;
	int kolich;

public://������������ �������
	product(); //  �����������
	product(char*, int);
	void setName(char*);//������
	void setProizv(char*);
	void setID(int);//������
	void setUPC(int);
	void setZena(int);//������
	void setSrok(int);
	void setKolich(int);
	~product();
	void Print();

	char* getName(void);
	char* getProizv(void);
	int getID(void);
	int getUPC(void);
	int getZena(void);
	int getSrok(void);
	int getKolich(void);

	void fullsum(int);

	void SUMM(int);
	void SROK(int);
	void NAME(char*,int);
};