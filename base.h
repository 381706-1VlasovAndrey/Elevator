// ����� �������� �����
#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class base
{
protected:
	int floor_min;	// ������ ����
	int floor_max;	// ������� ����
//	double width;	// �������� ������, �
//	double length;	// �������� �����, �
//	double height;	// �������� ������, �
	int floor_now;	// ������� ����
	bool check;		// true - ���� �������, false - ���� ������
	double weight_max;		// ������������ ���
//	double speed;			// ��������, ����/�

	void open_door();		// ������� �����
	bool check_weight_max();// ��������� �� �������
	void close_door();		// ������� �����
	
public:
	base();
	void check_floor_now(); // ������� �� ����� ������� ��������� 
//	int check_floor_now();	// ������ ������� ���������
	void call();			// ������� ����
	void motion(int floor);	// �������� �����(+������ ������� ��)
	void in_floor();		// �������� �� �����
//	~base();				// ���������� 
};