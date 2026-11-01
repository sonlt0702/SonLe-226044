#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

// struct là một kiểu cấu trúc dữ liệu,
// cho phép nhóm nhiều thành viên dữ liệu vào dùng 1 đối tượng

// typedef dùng để tạo tên khác cho 1 kiểu dữ liệu đã có


// kiểu dữ liệu phân số
typedef struct {
	int tu_so;
	int mau_so;
} phan_so_t;

// kiểu dữ liệu học sinh
typedef struct {
	char* ten;
	int tuoi;
	float diemtoan;
	float diemvan;
} hoc_sinh_t;

void in_thong_tin_hoc_sinh(hoc_sinh_t hs)
{
	printf("ten: %s, tuoi: %d, diem toan: %.1f, diem van: %.1f \n"
		,hs.ten, hs.tuoi, hs.diemtoan, hs.diemvan);
}

float tinh_diem_trung_binh(hoc_sinh_t hs)
{
	float dtb = (hs.diemtoan + hs.diemvan) / 2;
	return dtb;
}

void main()
{
	
	hoc_sinh_t hs1 = { "An", 16, 8.5, 7.3 }; 

	in_thong_tin_hoc_sinh(hs1);
	// viết hàm tính và trả ra điểm trung bình của 1 học sinh (điểm toán + điểm văn)/2
	float dtb = tinh_diem_trung_binh(hs1);
	printf("diem trung binh: %.1f \n", dtb);

	
	// khai báo mảng bao gồm 5 phần tử hoc_sinh_t, khởi tạo giá trị ban đầu cho nó
	// bt1: viết hàm tìm học sinh giỏi toán nhất và in thông tin học sinh đó ra
	// bt2: viết hàm tìm học sinh có điểm trung bình cao nhất và in thông tin của học sinh đó ra
}

