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
	// �������: ���� ��������� �� � ����� endl
}

void base::call()
{
	// �������: �� ����� ���� �������?
	// ������� � ����������
	// �������� ���� -42 �� �������� ������ ���� Exception 
	// ������� �� ���� ����
	// ������������ � floor_now
}

void base::motion(int floor)
{
	// ���������� �������� � ����� floor_now �� ����� floor
}

void base::open_door()
{
	// �������: �������� ������
}

bool base::check_weight_max()
{
	// do
	//			��������� ���
	// ���� (��� �� ������ �������������)
	return true;
}

void base::close_door()
{
	// �������: �������� ������
}

void base::in_floor()
{
	// ��Ш�� � ��������� �� SERVICE (������ � "���������")
	// ������� �����
	// if (check_weight_max()); // ���� ��� ����� ������ ))0)
	// ������� �����
	// call();
	// ������� �����
	// ���������
	// ������� �����
}
