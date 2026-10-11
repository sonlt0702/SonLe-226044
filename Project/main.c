#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"

void main()
{
	//### ** Bài 1.4: Đếm phân loại phần tử * *

	//	-**Yêu cầu : **Duyệt mảng và đếm xem có bao nhiêu số chẵn và bao nhiêu số lẻ.
	//	- **Đầu vào : **Số nguyên n và n phần tử của mảng.
	//	- **Đầu ra : **2 số nguyên tương ứng với số lượng phần tử chẵn và lẻ.

	//	Input : 6 | 3 4 7 3 1 2

	//	Output : Chan : 2, Le : 4

	int arr1[] = { 3, 4, 7, 3, 1, 2 };

	int count_chan = 0;
	int count_le = 0;

	int lenght_arr1 = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < lenght_arr1; i++)
	{
		if (arr1[i] % 2 == 0)
		{
			count_chan++;
		}
		else
		{
			count_le++;
		}
	}

	printf("so phan tu chan: %d \n", count_chan);
	printf("so phan tu le: %d \n", count_le);


	//### ** Bài 1.5: Tìm kiếm vị trí phần tử * *

	//	-**Yêu cầu : **Nhập thêm một số nguyên x.
	// Tìm và in ra vị trí(index) cuối cùng mà x xuất hiện trong mảng.
	// Nếu x không tồn tại, in ra - 1. 
	// Giả sử mảng bắt đầu từ index 0.
	//	- **Đầu vào : **Số nguyên n, n phần tử của mảng và số x.
	//	- **Đầu ra : **Vị trí index cuối cùng của x.

	//	Input : 6 | 1 5 3 5 2 5 | x = 5

	//	Output : 5 (vì số 5 xuất hiện lần cuối ở vị trí index 5)

	int arr2[] = { 1, 5, 3, 5, 2, 5 };
	int x = 5;

	int vi_tri = -1;
	int length_arr2 = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length_arr2; i++)
	{
		if (arr2[i] == x)
		{
			vi_tri = i;
			//break;
		}
	}

	printf("vi tri cua x: %d \n", vi_tri);


}

