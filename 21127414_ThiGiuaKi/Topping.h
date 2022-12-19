#pragma once
#include "LyNuoc.h"

class Topping
{
	string loai;
	int gia = 0;
public:
	Topping()
	{
		loai = "empty";
		gia = 0;
	}
	Topping(string temp,int val)
	{
		loai = temp;
		gia = val;
	}
	void Nhap();
	void Xuat();
	int getGiatien();
};

