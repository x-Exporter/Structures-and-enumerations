#include <iostream>

using namespace std;

enum month
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Введите номер месяца: ";
	cin >> num;
	while (num != 0)
	{
		switch (num)
		{
		case month::september:
			cout << "Сентябрь" << endl;
			break;
		case month::october:
			cout <<  "Октябрь" << endl;
			break;
		case month::november:
			cout << "Ноябрь" << endl;
			break;
		case month::december:
			cout << "Декабрь" << endl;
			break;
		case month::january:
			cout << "Январь" << endl;
			break;
		case month::february:
			cout << "Февраль" << endl;
			break;
		case month::march:
			cout << "Март" << endl;
			break;
		case month::april:
			cout << "Апрель" << endl;
			break;
		case month::may:
			cout << "Май" << endl;
			break;
		case month::june:
			cout << "Июнь" << endl;
			break;
		case month::july:
			cout << "Июль" << endl;
			break;
		case month::august:
			cout << "Август" << endl;
			break;
		default:
			cout << "Неправильный номер!" << endl;
		}
		cout << "Введите номер месяца: ";
		cin >> num;
	}
	cout << "До свидания!";
}
