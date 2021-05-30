#include <iostream>
#include <string>
#include <locale>
#include <Windows.h>

using namespace std;

class marshrut
{
	string one;
	string two;
	float time;
public:
	marshrut() 
	{
		one = "Санкт-Петербург";
		two = "Нижний новгород";
		time = 9;
		
		cout << "\n\nС использованием конструктора по умолчанию: " << endl << "Пункт отправления - " << one << endl << "Пункт назначения: " << two << endl << "Время в пути: " << time << endl;
	}
	marshrut(string s1, string s2, float time)
	{
		one = s1;
		two = s2;
		this->time = time;
	}
	marshrut(const marshrut& tmp)
	{
		one = tmp.one;
		two = tmp.two;
		this->time = tmp.time;
	}
	~marshrut() {}
	string GetOne() { return one; }
	string GetTwo() { return two; }
	float GetTime() { return time; }
	
	void SetOne(string value) { one = value; }
	void SetTwo(string value) { two = value; }
	void SetTime(float value) { time = value; }
};
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string a, b;
	float c;
	
	cout << "Введите пункт откправления: ";
	cin >> a;
	
	cout << "Введите пункт назначения: ";
	cin >> b;
	
	cout << "Введите время в пути: ";
	cin >> c;
	
	marshrut m1(a, b, c);
	cout << "\nС использованием конструктора с параметрами: \nПункт отправления - " << m1.GetOne() << endl << "Пункт назначения - " << m1.GetTwo() << endl << "Время в пути - " << m1.GetTime();
	
	marshrut m2;
	m2.SetOne(a);
	m2.SetTwo(b);
	m2.SetTime(c);
	cout << "\nС использованием сеттеров: \nПункт отправления - " << m2.GetOne() << endl << "Пункт назначения - " << m2.GetTwo() << endl << "Время в пути - " << m2.GetTime();
	
	marshrut m3(m1);
	cout << "\n\nС использованием конструктора копирования: \nПункт отправления - " << m3.GetOne() << endl << "Пункт назначения - " << m3.GetTwo() << endl << "Время в пути - " << m3.GetTime();
}