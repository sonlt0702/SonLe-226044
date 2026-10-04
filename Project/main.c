#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"

// Mảng
// - mảng là tập hợp các biến có cùng kiểu dữ liệu
// - cú pháp: <kiểu dữ liệu> tên_mảng[<số lượng phần tử>] = {<giá trị khởi tạo ban đầu>};
// - chú ý: số phần tử trong mảng phải là 1 con số, không được là biến
// - sử dụng: truy cập vào phần tử thông qua index(bắt đầu từ 0)
// ta sẽ có các biến arr[0], arr[1], ...

void main()
{
	int arr[10] = { 3,2,5,6,5,6,2,1,12,32};

	//int tong = 0;
	//for (int i = 0; i < 5; i++) {
	//	tong += arr[i];
	//}
	//printf("tong: %d \n", tong);

	// in ra giá trị min, max và vị trí tương ứng của nó trong mảng arr
	int min = arr[0];
	int max = arr[0];
	int vi_tri_min = 0;
	int vi_tri_max = 0;

	for (int i = 0;i < 10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			vi_tri_max = i;
		}

		if (arr[i] < min)
		{
			min = arr[i];
			vi_tri_min = i;
		}
	}

	printf("max: %d, vi tri max: %d \n", max, vi_tri_max);
	printf("min: %d, vi tri min: %d \n", min, vi_tri_min);

	int arr1[] = { 1,2,3,4,5,6,7,8,9 };

	int length = sizeof(arr1) / sizeof(arr1[0]);

	for (int j = 0; j < length; j++)
	{
		printf("j[%d]: %d \n", j, arr1[j]);
	}

	char t = 'a';
	sizeof(t);
}

