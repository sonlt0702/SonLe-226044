#pragma once


char kiem_tra_so_nguyen_to(int n);
int tim_ucln(int a, int b);
int tim_bcnn(int a, int b);
// bt1
int str_len(char* str);

/**
* @brief Hàm dùng để tính tổng các phần tử trong mảng số nguyên
* @param int* địa chỉ bắt đầu của mảng số nguyên
* @param int kích thước của mảng
* @return tổng các phần tử trong mảng
*/
int arr_sum(int* arr, int len);


/**
* @brief hàm in hoa chuỗi string
* @param char* địa chỉ bắt đầu của chuỗi
*/
void str_upper(char* str);

void swap(int* a, int* b);

void arr_sort(int* arr, int len);

void arr_print(int* arr, int len);

void str_format_name(char* str);

char str_upper_char(char* c);

char str_lower_char(char* c);

int str_find_str(char* str1, char* str2);

void boc_tach_email(char* email, char* username, char* domain);

char* str_concat(char* str3, char* str4);

// kiểu dữ liệu phân số
typedef struct {
	int tu_so;
	int mau_so;
} phan_so_t;

// ENUM
typedef enum {
	NAM,
	NU
} gioi_tinh;

typedef enum {
	GIOI = 1,
	KHA,
	TRUNGBINH,
	YEU
} xep_loai;

// kiểu dữ liệu học sinh
typedef struct {
	char* ten;
	int tuoi;
	gioi_tinh gt;
	float diemtoan;
	float diemvan;
	xep_loai loai;
} hoc_sinh_t;

void in_thong_tin_hoc_sinh(hoc_sinh_t hs);

float tinh_diem_trung_binh(hoc_sinh_t hs);

int tim_hoc_sinh_gioi_toan_nhat(hoc_sinh_t* arr, int len);

int tim_hoc_sinh_diem_tb_cao_nhat(hoc_sinh_t* arr, int len);

void xep_loai_toan_bo_hs(hoc_sinh_t* arr, int len);