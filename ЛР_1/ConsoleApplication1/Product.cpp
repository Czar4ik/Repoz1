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
#include "Product.h"
#include "iostream"

using namespace std;

product::product()
{
	cout << "\nКонструктор\n";
}

product::product(char* NAME, int UPC)
{
	strcpy(name, NAME);
	upc = UPC;
}

void product::setID(int ID)//задаём значение(инициализируем значение)
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
	cout << "\nДестркуктор\n";
}

void product::Print()
{

	cout << "ID: " << product::id << endl;
	cout << "Имя: " << product::name << endl;
	cout << "UPC: " << product::upc << endl;
	cout << "Производитель: " << product::proizv << endl;
	cout << "Цена: " << product::zena << endl;
	cout << "Срок хранения: " << product::srok << endl;
	cout << "Количество: " << product::kolich << endl;
}

int product::getID(void)//отображаем значение
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
		cout << endl << name << " - этот товар <= " << k << " рублей." << endl;
	}
	else 
	{
		cout << endl << name << " - Этот товар не подходит!" << endl;
	}
};

void product::SROK(int k)
{
	if (srok <= k)
	{
		cout << name << " - срок хранения этого товара не превосходит " << k << " дня(дней)." << endl;
	}
	else
	{
		cout << endl << name << " - товар просрочен!" << endl;
	}
};

void product::NAME(char* k,int i)
{

	if (!strcmp(name, k))
	{
		cout << "Да,товар  " << " существует в списке." << endl;
		cout << "UPC: " << upc << endl;
		cout << "Имя: " << k << endl;
		cout << "Производитель: " << proizv << endl;
		cout << "Цена: " << zena << endl;
	}
	else
	{
		cout << "К сожалению, мы не нашли " << k << " в  " <<i<<" классе"<< endl;
	}

}