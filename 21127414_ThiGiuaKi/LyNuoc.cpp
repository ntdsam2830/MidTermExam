#include "LyNuoc.h"

string LyNuoc::TenNuoc()
{
	string temp;
	temp = this->loaitra;
	if (this->luongsua > 0)
	{
		if (this->loaitra[1] == 'h')
			temp += " sua";
		else temp = "tra sua o long";
	}
	temp += " ";
	temp += this->huonglieu;
	return temp;
}

bool LyNuoc::checkLyNuoc(LyNuoc X)
{
	if (this->TenNuoc() == X.TenNuoc())
		return true;
}

float LyNuoc::getLuongduong()
{
	return this->luongduong;
}

float LyNuoc::getLuongda()
{
	return this->luongda;
}

int LyNuoc::getTheich()
{
	return this->thetich;
}

int LyNuoc::getGiatien()
{
	return this->giatien;
}

void LyNuoc::setLoaitra(string temp)
{
	this->loaitra = temp;
}

void LyNuoc::setHuonglieu(string temp)
{
	this->huonglieu = temp;
}

void LyNuoc::setThetich(int val)
{
	this->thetich += val;
}

istream& operator>>(istream& is, LyNuoc& X)
{
	int x, y;
	string temp1, temp2;
	do {
		cout << "Chon loai tra (1 la hong tra, 2 la tra o long) " ;
		cin >> x;
		if (x == 1)
		{
			temp1 = "hong tra";
			X.setLoaitra(temp1);
		}
		else if (x == 2)
		{
			temp1 = "tra o long";
			X.setLoaitra(temp1);
		}
	} while (x < 1 || x > 2);
	do {
		cout << "Chon loai huong lieu (1 la dao, 2 la nhan, 3 la vai) " ;
		cin >> y;
		if (y == 1)
		{
			temp2 = "dao";
			X.setHuonglieu(temp2);

		}
		else if (y == 2)
		{
			temp2 = "nhan";
			X.setHuonglieu(temp2);
		}
		else if (y == 3)
		{
			temp2 = "vai";
			X.setHuonglieu(temp2);
		}
	} while (y < 1 || y > 3);
	cout << "Nhap luong sua: ";
	is >> X.luongsua;
	cout << "Nhap luong duong: ";
	is >> X.luongduong;
	cout << "Nhap luong da: ";
	is >> X.luongda;
	cout << "Nhap gia tien: ";
	is >> X.giatien;
	return is;
}

ostream& operator<<(ostream& os, LyNuoc& X)
{
	os << "\nLoai tra: " << X.loaitra << endl;
	os << "Loai huong lieu: " << X.huonglieu << endl;
	os << "The tich: " << X.thetich << "ml" << endl;
	os << "Luong sua: " << X.luongsua << "%" << endl;
	os << "Luong duong: " << X.luongduong << "%" << endl;
	os << "Luong da: " << X.luongda << "%" << endl;
	os << "Gia tien: " << X.giatien << "VND" << endl;
	return os;
}

const LyNuoc& LyNuoc::operator = (const LyNuoc& x)
{
	this->loaitra = x.loaitra;
	this->huonglieu = x.huonglieu;
	this->thetich = x.thetich;
	this->luongsua = x.luongsua;
	this->luongduong = x.luongduong;
	this->luongda = x.luongda;
	this->giatien = x.giatien;
	return *this;
}