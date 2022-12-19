#include "Topping.h"

void Topping::Nhap()
{
	cout << "\nNhap ten topping: ";
	rewind(stdin);
	getline(cin, this->loai);
	cout << "Nhap gia tien topping: ";
	cin >> this->gia;
}

void Topping::Xuat()
{
	cout << "Ten topping: " << this->loai << endl;
	cout << "Gia tien: " << this->gia << endl;
}

int Topping::getGiatien()
{
	return this->gia;
}