#include "LyNuoc.h"
#include "LyNuocTuyBien.h"
#include "DonHang.h"

int main()
{
	DonHang X;
	for (size_t i = 0; i < 2; i++)
	{
		cout << "Mua ly thu " << i+1 << ": "<<endl;
		X.themLyNuoc();
		cout << endl;
	}
	int val = X.khuyenMai();
	cout << val << endl;
	//Topping Y;
	//Y.Nhap();
	//cout << Y;
	return 0;
}