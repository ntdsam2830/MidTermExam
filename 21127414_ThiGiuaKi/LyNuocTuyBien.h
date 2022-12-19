#pragma once
#include "LyNuoc.h"
#include "Topping.h"
#include <vector>

class LyNuocTuyBien
{
	LyNuoc ly;
	char size;
	float luongduong;
	float luongda;
	vector <Topping*> topping;
	int giatien;
public:
	//constructor
	LyNuocTuyBien()
	{
		ly;
		size = 'S';
		luongduong = ly.getLuongduong();
		luongda = ly.getLuongda();
		Topping* Default = new Topping;
		topping.push_back(Default);
		giatien = ly.getGiatien();
	}
	//6 tham so
	LyNuocTuyBien(LyNuoc X, char sz, float duong, float da, Topping* tp, int tien)
	{
		ly = X;
		size = sz;
		luongduong = duong;
		luongda = da;
		topping.push_back(tp);
		tien = giatien;
	}
	//copy
	LyNuocTuyBien(const LyNuocTuyBien& X)
	{
		ly = X.ly;
		size = X.size;
		luongduong = X.luongduong;
		luongda = X.luongda;
		topping = X.topping;
		giatien = X.giatien;
	}
	void Nhap();
	friend istream& operator>>(istream& is, LyNuocTuyBien& );
	friend ostream& operator<<(ostream& os, LyNuocTuyBien& );
	const LyNuocTuyBien& operator = (const LyNuocTuyBien& );
	char getSize();
	int getGiatien();
	LyNuoc getLy();
	void setGiatien();
	void setGiatien(int);
};

