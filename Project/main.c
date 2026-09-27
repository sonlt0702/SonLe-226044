#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main()
{
	// vòng lặp for, lặp với số lần biết trước

	// cú pháp
	int tong = 0;
	for (int i = 1; i <= 10; i++)
	{
		tong = tong + i;
	}
	printf("tong: %d \n", tong);

	// vòng lặp while, lặp với số lần chưa biết trước

	// cú pháp
	int j = 0;
	int k = 0;
	while (k != j)
	{
		printf("nhap gia tri k bang j: ");
		scanf("%d", &k);
	}

	// vòng lặp do...while

	// cú pháp
	int j = 28;
	int k = 28;
	do 
	{
		printf("nhap gia tri k bang j: ");
		scanf("%d", &k);

	} while (k != j);

	// bài tập
	// dùng vòng lặp in ra bảng cửu chương 2-9, bỏ 4

	for (int j = 2; j <= 9; j++) 
	{
		if (j == 4) continue;
		printf("Bang cuu chuong %d \n", j);
		for (int i = 1; i <= 10; i++)
		{
			printf("%d x %d = %d \n",j, i, j * i);
		}
	}

	// bt2 Nhập vào số nguyên n từ bàn phím
	// tính và in ra kết quả giai thừa của n (1*2*3...*n)
	int n = 0;
	int gt = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i; // gt = 1*2*3*...*n
	}
	printf("giai thua cua %d la: %d \n", n, gt);

	// bt3 Nhập vào số nguyên n từ bàn phím
	// kiểm tra xem số đó có phải là số nguyên tố hay không
	// nếu đúng thì in ra n là số nguyên tố
	// nếu sai thì in ra n không phải la số nguyên tố
	// 
	// b1 nhập n
	// b2 khởi tạo isSnt = 1
	// b3 dùng vòng lặp for kiểm tra từ 2 đến n, 
	// nếu có bất kì giá trị nào mà n chia hết cho số đó thì gán biến isSnt = 0, break loop
	// b4 sau khi kết thúc vòng lặp, kiểm tra lại biến isSnt nếu vẫn là 1 thì n là snt
	// nếu isSnt là 0 thì n không phải là snt

	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);

	int isSnt = 1;
	for(int i =2; i < n;i++)
	{
		if (n % i == 0) {
			isSnt = 0;
			break;
		}
	}
	if (isSnt) {
		printf("%d la so nguyen to \n", n);
	}
	else {
		printf("%d khong phai la so nguyen to \n", n);
	}

	// bt4 Nhập vào số nguyên n, đếm số lượng chữ số của n và in ra màn hình
	// vd: 97421 -> n có 5 chữ số
	// gợi ý: dùng vòng lặp while kết hợp chia nguyên cho 10 để đếm

	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int t = n;

	int count = 0;

	if (n == 0) count = 1;

	while (n > 0)
	{
		n = n / 10;
		count++;
	}

	printf("%d co %d chu so \n", t, count);
}