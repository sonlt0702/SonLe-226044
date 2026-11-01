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


//in phân số ra màn hình console
void in_phan_so(phan_so_t x) {
	printf("phan so: %d/%d \n", x.tu_so, x.mau_so);
}

// Nhân 2 phân số a, b
phan_so_t nhan_hai_phan_so(phan_so_t a, phan_so_t b)
{
	phan_so_t kq;
	kq.tu_so = a.tu_so * b.tu_so;
	kq.mau_so = a.mau_so * b.mau_so;
	return kq;
}

// a/b + c/d = (a*d+c*b)/(b*d)
// cộng 2 phân số a, b
phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
{
	phan_so_t kq;
	kq.tu_so = a.tu_so * b.mau_so + a.mau_so*b.tu_so;
	kq.mau_so = a.mau_so * b.mau_so;
	return kq;
}
// rút gọn phân số
// b1 tìm UCLN của tử số và mẫu số
// b2 lấy tử số và mẫu số chia cho UCLN và gán vào phân số kết quả
void rut_ngon_phan_so(phan_so_t* a)
{
	int ucln = tim_ucln(a->tu_so, a->mau_so);
	a->tu_so = a->tu_so / ucln;
	a->mau_so = a->mau_so / ucln;
}

// hàm tìm giá trị lớn nhất trong mảng số nguyên
// param1: địa chỉ bắt đầu của mảng số nguyên
// param2: kích thước của mảng số nguyên đó
// return: vị trí của số lớn nhất

int arr_max_val(int* arr, int len)
{
	int max = arr[0];
	int vi_tri_max = 0;

	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			vi_tri_max = i;
		}
	}
	return vi_tri_max;

}

// hàm dùng để tìm vị trí của phân số lớn nhất trong mảng phân số
// input: địa chỉ bắt đầu của mảng phân số, kích thước của mảng
// output: vị trí của phân số lớn nhất

int arr_ps_max_val(phan_so_t* arr, int len)
{
	int vi_tri_max = 0;
	float max = arr[0].tu_so * 1.0 / arr[0].mau_so;
	for (int i = 1; i < len; i++)
	{
		float cur = arr[i].tu_so * 1.0 / arr[i].mau_so;
		if (cur > max) {
			max = cur;
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}


void main()
{
	
	phan_so_t a = {1,4};
	phan_so_t b = {3,6};

	phan_so_t c = nhan_hai_phan_so(a, b); // c: 3/24
	in_phan_so(c);
	phan_so_t d = cong_hai_phan_so(a, b); // d: 18/24
	in_phan_so(d); //0x00FFFB98
	rut_ngon_phan_so(&d); // d: 3/4
	in_phan_so(d);

	int arr[] = { 3,7,1,2,9,12,23,2 };

	int vi_tri_max = arr_max_val(arr, sizeof(arr)/sizeof(arr[0])); // 6

	printf("arr max: %d \n", arr[vi_tri_max]);

	phan_so_t arr_ps[] = { 
		{ 1,3 },
		{ 2,5 },
		{ 3,2 },
		{ 5,3 },
		{ 6,11 }
	};
	// viết hàm tìm vị trí của phân số lớn nhất trong mảng phân số
	vi_tri_max = arr_ps_max_val(arr_ps, sizeof(arr_ps) / sizeof(arr_ps[0]));
	in_phan_so(arr_ps[vi_tri_max]);

}

