#pragma once
#include "base.h"

class service : public base
{
public:
	service();
	void button_close();	// дождаться нажатия кнопки для закрытия дверей
	bool check_weight_max();// проверить на перевес и на закрытие кнопки
	void in_floor();		// действия на этаже
};
