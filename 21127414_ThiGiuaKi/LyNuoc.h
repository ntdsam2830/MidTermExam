#pragma once
#include <iostream>
#include <string>
using namespace std;

class LyNuoc
{
	string loaitra;
	string huonglieu;
	int thetich;
	float luongsua;
	float luongduong;
	float luongda;
	int giatien;
public:
	//constructor
	LyNuoc()
	{
		loaitra = "empty";
		huonglieu = "empty";
		thetich = 300;
		luongsua = 0;
		luongduong = 0;
		luongda = 0;
		giatien = 0;
	}

	LyNuoc(const LyNuoc& X)
	{
		loaitra = X.loaitra;
		huonglieu = X.huonglieu;
		thetich = X.thetich;
		luongsua = X.luongsua;
		luongduong = X.luongduong;
		luongda = X.luongda;
		giatien = X.giatien;
	}

	//7 tham so
	LyNuoc(string loai, string huong, int V, float sua, float duong, float da, int tien)
	{
		loaitra = loai;
		huonglieu = huong;
		thetich = V;
		luongsua = sua;
		luongduong = duong;
		luongda = da;
		giatien = tien;
	}
	float getLuongduong();
	float getLuongda();
	int getTheich();
	int getGiatien();
	void setLoaitra(string);
	void setHuonglieu(string);
	void setThetich(int);
	string TenNuoc();
	bool checkLyNuoc(LyNuoc);
	friend istream& operator>>(istream& is,  LyNuoc& );
	friend ostream& operator<<(ostream& os,  LyNuoc& );
	const LyNuoc& operator = (const LyNuoc& );
};

