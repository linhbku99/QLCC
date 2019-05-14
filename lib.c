#pragma warning(disable : 4996)
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

struct Database
{
	int id;
	char ten[255];
	int ca_lam;
	float ngay_cong;
	int ngay_nghi;
	int tang_ca;
	float tien_luong;
};
int LoadDatabase()
{
	struct Database nhan_vien;
	//TODO
	return 0;
	// 0: Thanh cong
	// -1: That bai
}
int ChangeDatabase(struct Database _data)
{
	//TODO
	return 0;
	// 0: Thanh cong
	// -1: That bai
}
void MainScreen()
{
	int n;
	system("cls");
	printf("QUAN LI CHAM CONG\n\n");
	printf("Chon chuc nang can hien thuc:\n");
	printf("0. Thoat\n\n");
	printf("1. Thong tin nhan vien.\n");
	printf("2. Ngay cong.\n");
	printf("3. Ngay nghi.\n");
	printf("4. Tang ca.\n");
	printf("5. Bang cong.\n");
	printf("Hap nhap vao so chuc nang: ");
	scanf("%d", &n);
	switch (n)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		ThongTinNhanVien();
		break;
	}
	case 2:
	{
		NgayCong();
		break;
	}
	case 3:
	{
		NgayNghi();
		break;
	}
	case 4:
	{
		TangCa();
		break;
	}
	case 5:
	{
		BangCong();
		break;
	}
	default:
	{
		printf("Nhap so tu 0 den 5, nhan Enter de nhap lai.\n");
		system("pause");
		MainScreen();
		break;
	}
	}
}
void ThongTinNhanVien()
{
	//TODO
}
void NgayCong()
{
	//TODO
}
void NgayNghi()
{
	//TODO
}
void TangCa()
{
	//TODO
}
void BangCong()
{
	//TODO
}