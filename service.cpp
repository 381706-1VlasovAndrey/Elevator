#include "service.h"

service::service() {
	base();
}

void service::button_close()
{
	if (!overload) door = false;
	else cout << "Overload: " << weight - weight_max << "kg" << endl;
}

bool service::check_weight_max() //������� �� �����!!!
{
	// do
	//			��������� ���, �������, ��� ��� �������� (���/80) �������
	// ���� (��� �� ������ �������������)
	// ��������� ������
	return true;
}

void service::in_floor()
{
	int a = 0, fl;
	door = true;
	double wadd;
	cout << "1 - someone walked in" << endl << "2 - someone walked out" << endl << "3 - elevator was called" << endl << "4 - close the door" << endl << "5 - choose the floor" << endl;
	while (a != 4) {
		cin >> a;
		cout << endl;
		switch (a) {
		case 1: 
			cout << "Enter additional weight" << endl;
			cin >> wadd;
			weight += wadd;
			break;
			// ��������� ��������
		case 2:
			cout << "Enter lost weight" << endl;
			cin >> wadd;
			weight -= wadd;
			break;
			// ��������� ��������
		case 3:
			cout << "Elevator was called from..?" << endl;
			cin >> fl;
			callstack.push_back(fl);
			//�����������
			break;
		case 4:
			button_close();
			break;
		case 5:
			cout << "Enter the floor number" << endl;
			cin >> fl;
			callstack.push_back(fl);
			//�����������?
		default:
			cout << "Invalid command! Try again" << endl;
			break;
		}
	}
}
