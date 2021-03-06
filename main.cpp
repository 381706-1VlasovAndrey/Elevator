#include <iostream>
using namespace std;
#include "base.h"
#include "passenger.h"
#include "service.h"

int main()
{
    cout << "Hello World!\n"; 
	base* Elevator = new passenger;		// создаем лифт пассажирский
	// инициализация (этажи мин -41 и в сумме меньше равно 100)
	try
	{
		while (1)
		{
			Elevator->check_floor_now();		// показываем, на каком этаже лифт
			Elevator->call();					// запрашиваем, куда поехать (-42 для выхода), едем
			Elevator->in_floor();				// a = на этаже
		}
	}
	catch (const std::exception&)
	{
		cout << "Thank you!" << endl;
		return 0;
	}
	return 0;
}
