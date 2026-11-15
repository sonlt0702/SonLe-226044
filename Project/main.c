#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

// quy trình làm việc với file, sử dụng thư viện <stdio.h>
// 1. khai báo con trỏ file: FILE* fp;
// 2. mở file: Dùng hàm fopen("file name", "mode")
// mode "r" -> mở để đọc
// mode "w" -> mở để ghi
// mode "a" -> mở để ghi nối tiếp
// 3. thao tác đọc/ghi dữ liệu: 
// dùng các hàm tương ứng (fgetc, fgets, fscanf, fputc, fputs, fprintf)
// 4. đóng file: dùng hàm fclose()


void main()
{
	//FILE* fp;
	//fp = fopen("D:\\Teacher\\CC++\\Document\\data.txt", "w");

	//if (fp == NULL)
	//{
	//	printf("khong mo duoc file \n");
	//}
	//else
	//{
	//	printf("mo file thanh cong \n");

	//	//char c = fgetc(fp);
	//	//printf("%c, %d\n", c, c);
	//	//c = fgetc(fp);

	//	//char str[100];
	//	//fgets(str, 12, fp);

	//	//printf("%s \n", str);

	//	//char str1[100];
	//	//char str2[100];
	//	//int n = fscanf(fp, "%s %s", str1, str2);

	//	//printf("%s %s \n", str1, str2);
	//	//printf("n: %d \n", n);

	//	//n = fscanf(fp, "%s %s", str1, str2);

	//	//printf("%s %s \n", str1, str2);
	//	//printf("n: %d \n", n);

	//	//n = fscanf(fp, "%s %s", str1, str2);

	//	//printf("%s %s \n", str1, str2);
	//	//printf("n: %d \n", n);

	//	//fputc('c', fp);
	//	//fputs("diem: 7\n", fp);

	//	//int diem_so = 8;
	//	//fprintf(fp, "diem: %d", diem_so);


	//	fclose(fp);
	//}

	// VD:
	// mở và tạo mới 1 file students.txt
	// ghi dữ liệu sau vào file:
	// 101 Nguyen_Van_A 8.5
	// 102 Nguyen_Van_B 9.0
	// Đọc dữ liệu đã ghi vào file và in ra màn hình console
	// đóng file

	FILE* fp = fopen("D:\\Teacher\\CC++\\Document\\students.txt", "a");

	if (fp == NULL)
	{
		printf("mo file de ghi that bai \n");
	}
	else
	{
		fprintf(fp, "%d %s %.1f\n", 120, "Nguyen_Van_X", 8.5);
		fprintf(fp, "%d %s %.1f\n", 121, "Nguyen_Van_Y", 9.0);
		printf("ghi file thanh cong \n");
		fclose(fp);
	}

	fp = fopen("D:\\Teacher\\CC++\\Document\\students.txt", "r");

	if (fp == NULL)
	{
		printf("mo file de doc that bai \n");
	}
	else
	{
		int id;
		char name[100];
		float diem;
		printf("Danh sach sinh vien: \n");

		while (fscanf(fp, "%d %s %f", &id, name, &diem) == 3)
		{
			printf("MSSV: %d, ho ten: %s, diem so: %.1f \n", id, name, diem);
		}
		fclose(fp);
	}
}

