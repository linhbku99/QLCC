#pragma warning (disable : 4996)
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
void MainScreen();
void ThongTinNhanVien();
void NgayCong();
void NgayNghi();
void TangCa();
void BangCong();
int LoadDatabase();
int ChangeDatabase(struct Database * _data);