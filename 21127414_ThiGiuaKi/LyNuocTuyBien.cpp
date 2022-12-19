#include "LyNuocTuyBien.h"

void LyNuocTuyBien::setGiatien()
{
	int giaTopping = 0;
	for (size_t i = 0; i < this->topping.size(); i++)
	{
		giaTopping += this->topping[i]->getGiatien();
	}
	this->giatien = this->ly.getGiatien() + giaTopping;
	if (this->size == 'M') this->giatien += 10000;
	else if (this->size == 'L')this->giatien += 15000;
}

void LyNuocTuyBien::setGiatien(int val)
{
	int giaTopping = 0;
	for (size_t i = 0; i < this->topping.size(); i++)
	{
		giaTopping += this->topping[i]->getGiatien();
	}
	this->giatien = val + giaTopping;
}

int LyNuocTuyBien::getGiatien()
{
	return this->giatien;
}

char LyNuocTuyBien::getSize()
{
	return this->size;
}

LyNuoc LyNuocTuyBien::getLy()
{
	return this->ly;
}

void LyNuocTuyBien::Nhap()
{
	int x;
	cin >> ly;
	do {
		cout << "Chon size (1 la size S, 2 la size M, 3 la size L) ";
		cin >> x;
		if (x == 1)size = 'S';
		else if (x == 2)
		{
			size = 'M';
			ly.setThetich(100);
		}
		else if (x == 3)
		{
			size = 'L';
			ly.setThetich(150);
		}
	} while (x < 1 || x > 3);
	luongduong = ly.getLuongduong();
	luongda = ly.getLuongda();
	int numb;
	do {
		cout << "Nhap so luong topping: ";
		cin >> numb;
	} while (numb < 0);
	for (size_t i = 0; i < numb; i++)
	{
		Topping* temp1 = new Topping;
		temp1->Nhap();
		topping.push_back(temp1);
	}
	setGiatien();
}

istream& operator>>(istream& is, LyNuocTuyBien& temp)
{
	int x;
	is >> temp.ly;
	do {
		cout << "Chon size (1 la size S, 2 la size M, 3 la size L)\n ";
		cin >> x;
		if (x == 1)temp.size = 'S';
		else if (x == 2)
		{
			temp.size = 'M';
			temp.ly.setThetich(100);
		}
		else if (x == 3)
		{
			temp.size = 'L';
			temp.ly.setThetich(150);
		}
	} while (x < 1 || x > 3);
	temp.luongduong = temp.ly.getLuongduong();
	temp.luongda = temp.ly.getLuongda();
	int numb;
	do {
		cout << "Nhap so luong topping: ";
		cin >> numb;
	} while (numb <= 0);
	for (size_t i = 0; i < numb; i++)
	{
		Topping* temp1 = new Topping;
		temp1->Nhap();
		temp.topping.push_back(temp1);
	}
	temp.setGiatien();
	return is;
}

ostream& operator<<(ostream& os, LyNuocTuyBien& temp)
{
	os << temp.ly << endl;
	os << "Size: " << temp.getSize() << endl;
	os << "The tich ly: " << temp.ly.getTheich() << endl;
	os << "Luong duong trong ly: " << temp.ly.getLuongduong() << endl;
	os << "Luong da trong ly: " << temp.ly.getLuongda() << endl;
	os << "Topping trong ly: " << endl;
	for (size_t i = 1; i < temp.topping.size(); i++)
	{
		temp.topping[i]->Xuat();
	}
	os << "Gia tien cua ly nuoc: " << temp.getGiatien();
	return os;
}

const LyNuocTuyBien& LyNuocTuyBien::operator = (const LyNuocTuyBien& x)
{
	this->ly = x.ly;
	this->size = x.size;
	this->luongduong = x.luongduong;
	this->luongda = x.luongda;
	this->topping = x.topping;
	this->giatien = x.giatien;
	return *this;
}