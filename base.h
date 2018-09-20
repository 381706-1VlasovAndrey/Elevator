// ����� �������� �����
#pragma once
#include <iostream>
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
	double weight_max;	// ������������ ���
//	double speed;	// ��������, ����/�
	
public:
	base();
	void check_floor_now(); // ������� �� ����� ������� ��������� 
//	int check_floor_now();	// ������ ������� ���������
	void call();			// ������� ����
	void motion(int floor);	// �������� �����(+������ ������� ��)
	void open_door();		// ������� �����
	bool check_weight_max();// ��������� �� �������
	void close_door();		// ������� �����
 	void in_floor();		// �������� �� �����
//	~base();				// ���������� 
};