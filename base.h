// класс базового лифта
#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class base
{
protected:
	int floor_min;	// нижний этаж
	int floor_max;	// верхний этаж
//	double width;	// габариты ширина, м
//	double length;	// габариты длины, м
//	double height;	// габариты высота, м
	int floor_now;	// текущий этаж
	bool check;		// true - если рабочий, false - если сломан
	double weight_max;		// максимальный вес
//	double speed;			// скорость, этаж/с

	void open_door();		// открыть двери
	bool check_weight_max();// проверить на перевес
	void close_door();		// закрыть двери
	
public:
	base();
	void check_floor_now(); // вывести на экран текущее состояние 
//	int check_floor_now();	// выдать текущее состояние
	void call();			// вызвать лифт
	void motion(int floor);	// движение лифта(+рандом застрял ли)
	void in_floor();		// действия на этаже
//	~base();				// деструктор 
};