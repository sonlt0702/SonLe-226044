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