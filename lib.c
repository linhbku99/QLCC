#pragma warning(disable : 4996)
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

int LoadDatabase()
{
	struct Database *nhan_vien = (struct Database *)malloc(sizeof(struct Database *) * 100); // Khởi tạo mảng 100 nhân viên
	//struct Database nhan_vien[100];
	FILE *fileOpen;
	fileOpen = fopen("database.dat", "r");
	if (fileOpen == NULL)
	{
		printf("Khong doc duoc file!\n");
		system("pause");
		return -1;
	}
	char buff[255];
	int count = 0;
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("|%5s | %-50s | %5s | %5s | %5s | %5s | %10s |\n","ID","TEN","CA","NC","NGHI","TC","TL");
	printf("|--------------------------------------------------------------------------------------------------------|\n");
	while (fgets(buff, 255, (FILE *)fileOpen) != NULL)
	{
		if (buff != "")
		{
			//printf("%s", buff);
			char *token;
			int flag = 0;

			/* get the first token */
			token = strtok(buff, ";");

			/* walk through other tokens */
			while (token != NULL)
			{
				//printf(" -->%d --- %s\n", flag, token);
				int num = (int)strtol(token, (char **)NULL, 10);
				//printf("%d\n", num);
				switch (flag)
				{
				case 0:
				{
					//printf("%d\n", (int)strtol(token, (char **)NULL, 10));
					nhan_vien[count].id = num;
					flag++;
					break;
				}
				case 1:
				{
					//printf("%s\n", token);
					nhan_vien[count].ten = token;
					flag++;
					break;
				}
				case 2:
				{
					nhan_vien[count].ca_lam = num;
					flag++;
					break;
				}
				case 3:
				{
					nhan_vien[count].ngay_cong = (float)strtof(token, NULL);
					flag++;
					break;
				}
				case 4:
				{
					nhan_vien[count].ngay_nghi = num;
					flag++;
					break;
				}
				case 5:
				{
					nhan_vien[count].tang_ca = num;
					flag++;
					break;
				}
				case 6:
				{
					nhan_vien[count].tien_luong = (float)strtof(token, NULL);
					flag = 0;
					break;
				}

				default:
					break;
				}
				token = strtok(NULL, ";");
			}
			printf("|%5d | %-50s | %5d | %5.2f | %5d | %5d | %10.2f |\n", nhan_vien[count].id, nhan_vien[count].ten, nhan_vien[count].ca_lam, nhan_vien[count].ngay_cong, nhan_vien[count].ngay_nghi, nhan_vien[count].tang_ca, nhan_vien[count].tien_luong);
			count++;
		}
	}
	printf("----------------------------------------------------------------------------------------------------------\n");
	//TODO
	free(nhan_vien);
	fclose(fileOpen);
	return 0;
	// 0: Thanh cong
	// -1: That bai
}
int ChangeDatabase(struct Database *_data)
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
	printf("0. Thoat\n");
	printf("1. Thong tin nhan vien.\n");
	printf("2. Ngay cong.\n");
	printf("3. Ngay nghi.\n");
	printf("4. Tang ca.\n");
	printf("5. Bang cong.\n\n");
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