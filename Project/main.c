#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

// struct là một kiểu cấu trúc dữ liệu,
// cho phép nhóm nhiều thành viên dữ liệu vào dùng 1 đối tượng

// typedef dùng để tạo tên khác cho 1 kiểu dữ liệu đã có

// UNION
// union là một kiểu dữ liệu do người dùng tự định nghĩa (tương tự struct)
// cho phép lưu trữ nhiều thành viên có các kiểu dữ liệu khác nhau tại cùng 1 vùng nhớ

typedef struct {
	short a;
	char x;
	char y;
} struct_t;

typedef union {
	unsigned short a;
	char arr[];
} union_t;

typedef union {

	unsigned char value;

	struct {
		char _0 : 1;
		char _1 : 1;
		char _2 : 1;
		char _3 : 1;
		char _4 : 1;
		char _5 : 1;
		char _6 : 1;
		char _7 : 1;
	} BIT;
} byte_t;


void main()
{
	hoc_sinh_t hs1 = { "An", 16, NAM, 8.5, 7.3 , KHA}; 

	//in_thong_tin_hoc_sinh(hs1);
	// viết hàm tính và trả ra điểm trung bình của 1 học sinh (điểm toán + điểm văn)/2
	float dtb = tinh_diem_trung_binh(hs1);
	printf("diem trung binh: %.1f \n", dtb);

	
	// khai báo mảng bao gồm 5 phần tử hoc_sinh_t, khởi tạo giá trị ban đầu cho nó
	// bt1: viết hàm tìm học sinh giỏi toán nhất và in thông tin học sinh đó ra
	// bt2: viết hàm tìm học sinh có điểm trung bình cao nhất và in thông tin của học sinh đó ra

	hoc_sinh_t arr[] = {
		{ "An", 16, NAM, 8, 7.3 },
		{ "Binh", 16, NAM, 5, 4 },
		{ "Khoa", 16, NAM, 6, 5 },
		{ "Lan", 16, NU, 9, 7.5 },
		{ "Ngoc", 16, NU, 9.5, 6.0 }
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	int vi_tri_hs_gioi_toan = tim_hoc_sinh_gioi_toan_nhat(arr, sizeof(arr) / sizeof(arr[0]));
	//in_thong_tin_hoc_sinh(arr[vi_tri_hs_gioi_toan]);

	int vi_tri_hs_diem_tb_cao_nhat = tim_hoc_sinh_diem_tb_cao_nhat(arr, sizeof(arr) / sizeof(arr[0]));
	//in_thong_tin_hoc_sinh(arr[vi_tri_hs_diem_tb_cao_nhat]);

	//bt:
	// viết hàm xếp loại toàn bộ học sinh trong mảng
	// dựa vào điểm trung bình để xếp loại: 
	// >= 8.0		   :	Giỏi
	// >= 6.5 && < 8.0 :	Khá
	// >= 5.0 && < 6.5 :	Trung bình
	// < 5.0		   :	Yếu
	for (int i = 0; i < len; i++)
	{
		in_thong_tin_hoc_sinh(arr[i]);
	}
	printf("\n");

	xep_loai_toan_bo_hs(arr, len);

	for (int i = 0; i < len; i++)
	{
		in_thong_tin_hoc_sinh(arr[i]);
	}

	struct_t s = {1,2,3};
	printf("kich thuoc s: %d byte \n", sizeof(s));

	union_t u;
	u.a = 0x1234;
	printf("kich thuoc s: %d byte \n", sizeof(u));

	unsigned short x = 0x1234;
	char* px = &x;

	char low = u.arr[0];
	char high = u.arr[1];

	printf("low: %x \n", low);
	printf("high: %x \n", high);

	byte_t a;
	a.value = 0;
	a.BIT._1 = 1;
	a.BIT._3 = 1;
	a.BIT._5 = 1;
	a.BIT._7 = 1;

	printf("a.value: %d \n", a.value);
}

