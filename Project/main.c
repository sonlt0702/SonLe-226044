#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"


void main()
{
	// 2. Hoán đổi hai số bằng con trỏ:
	// Viết hàm swap() nhận hai con trỏ đến số nguyên và hoán đổi giá trị của hai biến.
	int a = 5;
	int b = 10;
	printf("truoc: a: %d, b: %d \n", a, b);
	swap(&a, &b);
	printf("sau: a: %d, b: %d \n", a, b);

	// 4. Sắp xếp phần tử trong mảng: Cho mảng gồm n số nguyên. 
	// Viết các hàm sắp xếp các phần tử trong mảng theo thứ tự tang dần.
	int arr[] = { 2,4,3,7,4,6,1,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	arr_print(arr, len);

	arr_sort(arr, len);

	arr_print(arr, len);

	// 6. Chuẩn hóa chuỗi họ tên: Viết hàm xóa khoảng trắng thừa ở đầu, cuối và giữa các từ;
	// viết hoa chữ cái đầu mỗi từ và viết thường các chữ cái còn lại.
	// Chỉ yêu cầu xử lý chuỗi tiếng Anh không dấu.

	char str[] = "  le  thAnh    soN  ";

	str_format_name(str);

	printf("Sau: %s \n", str); // "Le Thanh Son"

	// 9. Kiểm tra chuỗi B có xuất hiện trong chuỗi A hay không bằng con trỏ.

	char str1[] = "hello world";
	char str2[] = "ld";

	int isExists = str_find_str(str1, str2);
	if (isExists)
	{
		printf("chuoi 2 co nam trong chuoi 1 \n");
	}
	else
	{
		printf("chuoi 2 khong nam trong chuoi 1 \n");
	}

	// 10: Bài toán thực tế - Trích xuất tên miền (Domain) từ Email
	//**Yêu cầu:** Cho một chuỗi chứa địa chỉ email,
	// hãy tách lấy phần username (trước ký tự @) và phần domain (sau ký tự @) 
	// lưu vào 2 mảng khác nhau.

	char* email = "admin@binance.com";
	char username[100] = { 0 };
	char domain[100] = { 0 };

	boc_tach_email(email, username, domain);

	printf("Email goc: %s\n", email);
	printf("Username: %s\n", username); // Ket qua: admin
	printf("Domain: %s\n", domain);     // Ket qua: binance.com

	// 8. Viết hàm nối hai chuỗi sử dụng con trỏ.
	char str3[] = "hello";
	char str4[] = " world!";

	char* str5 = str_concat(str3, str4);

	printf("Bai 8: %s \n", str5); // hello world!
}

