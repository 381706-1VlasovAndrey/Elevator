#include "service.h"

service::service() {
	base();
}

void service::button_close()
{
	if (!overload) door = false;
}

void service::check_weight_max()
{
	while (overload) {
		cout << "Overload: " << weight - weight_max << "kg" << endl << "Enter the weight loss";
		double loss;
		cin >> loss;
		weight -= loss;
		if (weight <= weight_max) overload = false;
	}
	button_close();
}

void service::in_floor()
{
	double wadd;
	check_floor_now();
	door = true;
	cout << "Enter the weight loss" << endl;
	cin >> wadd;
	weight -= wadd;
	cout << "Enter the additional weight" << endl;
	cin >> wadd;
	weight += wadd;
	if (weight > weight_max) overload = true;
	cout << "Enter the floor of destination" << endl;
	int floor;
	cin >> floor; 
	check_weight_max();
	motion(floor);
	floor_now = floor;
}
