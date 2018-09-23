#include "base.h"

base::base()
{
	cout << "Enter the number of the lowest and the highest floor" << endl;;
	cin >> floor_min >> floor_max;
	floor_now = floor_min;
	weight = 0;
	cout << endl << "Enter the maximal weight" << endl;
	cin >> weight_max;
	check = true;
	overload = false;
}

void base::check_floor_now()
{
	// вывести: лифт находится на Х этаже endl
}

void base::call()
{
	// вывести: на какой этаж поехать?
	// считать в переменную
	// добавить если -42 то вылетает ошибка типа Exception 
	// поехать на этот этаж
	// перезаписать в floor_now
}

void base::motion(int floor)
{
	// изображаем движение с этажа floor_now до этажа floor
}

void base::open_door()
{
	// вывести: открытие дверей
}

bool base::check_weight_max()
{
	// do
	//			запросить вес
	// пока (вес не меньше максимального)
	return true;
}

void base::close_door()
{
	// вывести: закрытие дверей
}

void base::in_floor()
{
	// БЕРЁШЬ И КОПИРУЕШЬ ИЗ SERVICE (только с "подождать")
	// открыть двери
	// if (check_weight_max()); // если так можно вообще ))0)
	// закрыть двери
	// call();
	// открыть двери
	// подождать
	// закрыть двери
}
