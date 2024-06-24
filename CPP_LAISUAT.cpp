#include <iostream>
using namespace std;
int main()
{
	double sotienGui;
	double LaiSuat[20];
	int SoNamGui;

	cout << "Tinh lai suat thay doi theo nam";
	cout << "\n Nhap so tien: ";
	cin >> sotienGui;
	cout << "\n Nhap nam gui tiet kiem: ";
	cin >> SoNamGui;

	for (int i = 0; i < SoNamGui; i++)
	{
		cout << "Nhap lai suat nam " << i + 1 << " (%) : ";
		cin >> LaiSuat[i];
	}

	double TongTien = sotienGui;

	for (int i = 0; i < SoNamGui; i++)
	{
		TongTien *= (1 + LaiSuat[i] / 100);
	}
	cout << "Lai suat sau " << SoNamGui << " nam la : " << TongTien;
	return 0;
}