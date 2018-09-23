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
	cout<<"Elevator is on the "<<floor_now<<" floor\n";
}

void base::call()
{
	int a;
	cout<<"which floor should go to?\n";
	cin>>a;
	cout<<"Elevator rides\n";
	cout<<"Elevator arrived\n";
	floor_now=a;
}

void base::motion(int floor)
{
	// изображаем движение с этажа floor_now до этажа floor
}

void base::open_door()
{
	cout<<"Be careful, the doors are opening\n";
	door=true;
}

void base::check_weight_max()
{
    //прописано в каждом наследнике)))
}

void base::close_door()
{
	cout<<"Be careful, the doors are closing\n";
	door=false;
}

void base::in_floor()
{
	open_door();
	cout<<"People, come in!\n";
	cin>>weight;
	if (weight>weight_max) overload=true;
	check_weight_max();
	close_door();
	call();
	open_door();
	cout<<"People, go out!\n";
	weight=0;
	cout<<"People came out\n";
	close_door();
}
