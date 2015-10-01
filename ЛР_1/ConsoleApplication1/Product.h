//Создать класс Product: id, Наименование, UPC,
//Производитель, Цена, Срок хранения, Количество.
//Функции-члены реализуют запись и считывание полей
//(проверка корректности), вывод общей суммы продукта.
//
//Создать массив объектов. Вывести: 
//a) список товаров для заданного наименования; 
//b) список товаров для заданного наименования, цена которых
//не превосходит заданную; 
//c) список товаров, срок хранения которых больше заданного.

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

public://спецификатор доступа
	product(); //  конструктор
	product(char*, int);
	void setName(char*);//медоды
	void setProizv(char*);
	void setID(int);//медоды
	void setUPC(int);
	void setZena(int);//медоды
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