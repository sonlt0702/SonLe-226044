#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	// btvn
	// BT1:
	// Tìm ước chung lớn nhất (GCD)
	// Nhập hai số nguyên dương A và B, sử dụng vòng lặp để tìm ƯCLN của hai số.
	// Không sử dụng hàm có sẵn.
	int a = 0;
	int b = 0;
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);

	int min = a > b ? b : a;

	for (int i = min; i > 0; i--)
	{
		if ((a % i == 0 && b % i == 0) || i == 1) {
			printf("UCLN: %d \n", i);
			break;
		}
	}

	// BT2: Trò chơi đoán số
	// Chương trình sinh ra một số bí mật trong khoảng 1–100. Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng. Sau mỗi lần nhập:
    // Nếu số nhập nhỏ hơn số bí mật → thông báo "Lon hon"
	// Nếu số nhập lớn hơn → thông báo "Nho hon"
	// Nếu đúng → thông báo số lần đoán.
	// 

	srand(time(NULL));

	int sbm = rand() % 100 + 1;
	int count = 0;
	int n = 0;

	do {
		count++;
		printf("nhap so ban doan: ");
		scanf("%d", &n);
		if (n > sbm)
		{
			printf("ban da nhap so lon hon so bi mat \n");
		}
		else if (n < sbm)
		{
			printf("ban da nhap so nho hon so bi mat \n");
		}
		else
		{
			printf("chuc mung ban da nhap dung sau %d lan \n", count);
		}
	} while (n != sbm);

}