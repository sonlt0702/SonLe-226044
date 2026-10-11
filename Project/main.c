#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"


void main()
{
	// String trong C chính là 1 mảng kí tự char kết thúc bằng 
	// ký tự đặc biệt '\0'

	// kí tự được lưu trong bộ nhớ máy tính như thế nào?
	// + được lưu theo bảng mã ASCII
	// VD: 'a' trong bảng mã ASCII là 97, 'b' là 98
	// sử dụng 1 byte để lưu kí tự, chứa trong cặp nháy đơn ''
	// cú pháp khai báo:
	//char str[6] = { 'h', 'e', 'l', 'l', 'o', 0 };
	//char str1[] = { 'h', 'e', 'l', 'l', 'o', 0 };
	// ngắn gọn hơn
	//char str2[] = "hello";
	// ngoài ra trong ngôn ngữ C, khi chứa string trong cặp dấu nháy
	// kép "" thì nó sẽ trả về địa chỉ của string đó
	//printf("string: %s \n", "hello");
	// suy ra ta có cách khai báo thứ 2 của string: dùng con trỏ để
	// chứa địa chỉ bắt đầu của string
	//char* str3 = "hello"; // str3 là hằng số
	//printf("string: %s \n", str3);
	// tuy nhiên, cần lưu ý khi khai báo string bằng con trỏ thì string
	// đó là hằng số và không thể thay đổi giá trị
	//str2[4] = 'y';
	//printf("string 1: %s \n", str2);

	//str3[4] = 'y'; // không thể ghi giá trị vào hằng số
	//printf("string 3: %s \n", str3);

	//Bài tập

	// bt1: viết hàm str_len nhận vào 1 string và trả ra độ dài
	// của string đó

	char str1[] = "lap trinh CCpp";

	int len_str1 = str_len(str1);

	printf("str1 length: %d \n", len_str1); // expected 14

	// bt2: viết hàm arr_sum nhận vào 1 mảng số nguyên và kích thước
	// của mảng, hàm trả về tổng các phần tử trong mảng

	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum = arr_sum(arr, len);
	printf("sum arr: %d \n", sum); // expected 15

	// bt3: viết hàm str_upper nhận vào 1 chuỗi string
	// và chuyển toàn bộ chuỗi đó thành chuỗi in hoa
	// gợi ý: kiểm tra kí tự từ a-z nếu đúng thì trừ đi 32
	char str2[] = "lap trinh CCpp";

	str_upper(str2);

	printf("str2 upper: %s \n", str2); // "LAP TRINH CCPP"

}

