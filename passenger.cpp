#include "passenger.h"

void passenger::check_weight_max()
{
	while (overload) {
		cout << "Overload: " << weight - weight_max << "kg ("<< ceil((weight - weight_max)/80) << " men)" << endl << "Enter the weight loss";
		double loss;
		cin >> loss;
		weight -= loss;
		if (weight <= weight_max) overload = false;
	}
	int pob;
	do {
		cout << "How many parts of the body are between the doors?" << endl;
		cin >> pob;
	} while (pob);
}
