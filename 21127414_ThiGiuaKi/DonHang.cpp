#include "DonHang.h"

void DonHang::themLyNuoc()
{
	LyNuocTuyBien* temp = new LyNuocTuyBien;
	temp->Nhap();
	DS.push_back(temp);
}

void DonHang::add(LyNuocTuyBien temp)
{
	DS.push_back(&temp);
}

void DonHang::xoaLyNuoc()
{
	int del;
	cout << "Nhap so luong ly nuoc muon xoa: ";
	cin >> del;
	do {
		if (del > DS.size())
			DS.erase(DS.begin(), DS.end());
		else DS.erase(DS.end() - del, DS.end());
	} while (del < 0);
}

int DonHang::tongGiaTien()
{
	int total = 0;
	for (size_t i = 0; i < DS.size(); i++)
	{
		total += DS[i]->getGiatien();
	}
	return total;
}

int DonHang::khuyenMai()
{
	int total = this->tongGiaTien();
	int totalS = 0;
	vector <LyNuocTuyBien*> dsL;
	vector <LyNuocTuyBien*> dsS;
	LyNuocTuyBien* temp = new LyNuocTuyBien;

	for (size_t i = 0; i < DS.size(); i++)
	{
		if (DS[i]->getSize() == 'L')
		{
			temp = DS[i];
			dsL.push_back(temp);
		}
		else if (DS[i]->getSize() == 'S')
		{
			temp = DS[i];
			dsS.push_back(temp);
		};
	}

	for (size_t i = 0; i < dsS.size(); i++)
	{
		totalS += dsS[i]->getGiatien();
	}

	total -= totalS;

	for (size_t i = 0; i < dsL.size(); i++)
	{
		for (size_t j = 0; j < dsS.size(); j++)
		{
			if (dsS[j]->getGiatien() != 0)
			{
				if (dsL[i]->getLy().checkLyNuoc(dsS[j]->getLy()))
					dsS[j]->setGiatien(0);
			}
		}
	}

	totalS = 0;

	for (size_t i = 0; i < dsS.size(); i++)
	{
		totalS += dsS[i]->getGiatien();
	}

	if (temp != NULL)
		delete temp;
	total += totalS;
	return total;
}