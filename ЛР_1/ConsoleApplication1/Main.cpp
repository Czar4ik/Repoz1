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

void dop()// timmy скопировался в новый объект timmy_clone
//когда измениим возраста (age) timmy, у tim возраст не менялся: объекты полностью независимы.
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
	cout << "Введите нужное количество товаров(видов): ";
	cin >> kolich;

	cout << "Введите сумму для сравнения: ";
	cin >> j;

	cout << "Введите срок хранения: ";
	cin >> y;
	cout << endl;

		for (int w = 1; w <= kolich; w++)
		{
			cout << "Введите ID: ";
			cin >> q;

			cout << "Введите имя товара (производителя): ";
			cin >> t;

			cout << "Введите цену товара: ";
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
			cout << "<" << q << ">" << " Сумма товара: " << p << endl << endl;
	}
		cout << "Ввод имени товара для поиска: ";
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
		cout << "_____________________________1-ЗАПИСЬ ИНФОРМАЦИИ.______________________________" << endl;
		cout << "_____________________________2-ОЧИСТИТЬ ОКНО.__________________________________" << endl;
		cout << "_____________________________3-Dop.____________________________________________" << endl;	
		cout << "_____________________________4-ЗАКРЫТЬ ПРОГРАММУ.______________________________" << endl;


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