#include <iostream>

using namespace std;

enum class month
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
		case static_cast<int>(month::september):
			cout << "Сентябрь" << endl;
			break;
		case static_cast<int>(month::october):
			cout <<  "Октябрь" << endl;
			break;
		case static_cast<int>(month::november):
			cout << "Ноябрь" << endl;
			break;
		case static_cast<int>(month::december):
			cout << "Декабрь" << endl;
			break;
		case static_cast<int>(month::january):
			cout << "Январь" << endl;
			break;
		case static_cast<int>(month::february):
			cout << "Февраль" << endl;
			break;
		case static_cast<int>(month::march):
			cout << "Март" << endl;
			break;
		case static_cast<int>(month::april):
			cout << "Апрель" << endl;
			break;
		case static_cast<int>(month::may):
			cout << "Май" << endl;
			break;
		case static_cast<int>(month::june):
			cout << "Июнь" << endl;
			break;
		case static_cast<int>(month::july):
			cout << "Июль" << endl;
			break;
		case static_cast<int>(month::august):
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
