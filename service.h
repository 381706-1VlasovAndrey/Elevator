#pragma once
#include "base.h"

class service : public base
{
public:
	service();
	void button_close();	// ��������� ������� ������ ��� �������� ������
	bool check_weight_max();// ��������� �� ������� � �� �������� ������
	void in_floor();		// �������� �� �����
};
