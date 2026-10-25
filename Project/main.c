#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"


void main()
{
	// 8. Viết hàm nối hai chuỗi sử dụng con trỏ.
	char str3[] = "hello";
	char str4[] = " world!";

	char* str5 = str_concat(str3, str4);

	printf("bai8: %s \n", str5);

	free(str5);

	// hàm malloc() và calloc() dùng để yêu cầu OS cấp phát 1 vùng nhớ với kích thước chỉ định
	// hàm malloc không tự đặt giá trị ban đầu của biến thành 0. 
	// Phải gán giá trị trước khi sử dụng
	int n = 10;
	int* arr = malloc(n * sizeof(int));

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;

	arr_print(arr, n);

	// mỗi vùng nhớ được cấp phát thành công thì phải được giải phóng sau khi dùng xong.
	// sau khi free vùng nhớ thì không thể truy cập vào vùng nhớ đó được nữa
	free(arr);

	// hàm calloc tự khởi tạo toàn bộ byte trong vùng nhớ thành 0
	int* arr2 = calloc(n, sizeof(int));

	arr2[0] = 1;
	arr2[1] = 2;
	arr2[2] = 3;
	arr2[3] = 4;

	arr_print(arr2, n);

	free(arr2);

	// viết chương trình yêu cầu người dùng nhập số lượng phần tử cho mảng số nguyên
	// sau đó yêu cầu nhập từng phần tử của mảng số nguyên
	// và in mảng đó ra màn hình

	int sl = 0;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d", &sl);

	int* arr3 = calloc(sl, sizeof(int));

	for (int i = 0;i < sl;i++)
	{
		printf("nhap arr[%d]: ", i);
		scanf("%d", &arr3[i]);
	}
	arr_print(arr3, sl);
	free(arr3);


}

