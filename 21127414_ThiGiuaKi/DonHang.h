#pragma once
#include "LyNuocTuyBien.h"

class DonHang
{
	vector<LyNuocTuyBien*> DS;
public:
	void add(LyNuocTuyBien);
	void themLyNuoc();
	void xoaLyNuoc();
	int tongGiaTien();
	int khuyenMai();
};

