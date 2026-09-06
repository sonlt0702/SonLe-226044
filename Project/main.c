#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main()
{

	unsigned char x = 0b00110000;

	x |= (1 << 3);
	printf("x: %d \n", x);

	x &= ~(1 << 3);
	printf("x: %d \n", x);

	int y = ((x >> 2) & 1) == 1;
	printf("y: %d \n", y);

	int diem = 4;

	if (diem > 8)
	{
		printf("loai gioi \n");
	}
	else if (diem > 5 )
	{
		printf("loai trung binh \n");
	}
	else if (diem > 6.5 )
	{
		printf("loai kha \n");
	}
	
	else
	{
		printf("loai yeu \n");
	}


	int day = 1;

	switch (day)
	{
	case 1: 
	case 2:
		printf("Thu Hai \n");
		break;
	case 3:
		printf("Thu Ba \n");
		break;
	case 4:
		printf("Thu Tu \n");
		break;
	case 5:
		printf("Thu Nam \n");
		break;
	case 6:
		printf("Thu Sau \n");
		break;
	case 7:
		printf("Thu Bay \n");
		break;
	default:
		printf("day khong hop le \n");
		break;
	}

	// Bài 1
	// viết chương trình giải pt bậc 2: ax^2 + bx + c = 0 với a,b,c nhập từ bàn phím
	// tính delta = b^2 - 4ac
	// nếu delta > 0 thì pt có 2 nghiem x1 = (-b+sqrt(delta))/2a, x2 = (-b-sqrt(delta))/2a
	// nếu delta = 0 thì pt có 1 nghiem kep x1 = x2 = -b / 2a
	// nếu delta < 0 thì pt vô nghiệm

	int a = 0;
	int b = 0;
	int c = 0;
	printf("Chuong trinh giai pt bac 2 ax^2+bx+c = 0 \n");
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	printf("nhap c: ");
	scanf("%d", &c);

	int delta = b * b - 4 * a * c;
	if (delta > 0) 
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		printf("pt co 2 nghiem phan biet x1 = %.2f, x2 = %.2f \n", x1, x2);
	}
	else if (delta == 0)
	{
		float x = - b / (2.0 * a);
		printf("pt co 1 nghiem kep x1 = x2 = %.2f \n", x);
	}
	else
	{
		printf("pt vo nghiem \n");
	}


	// bài 2
	// Nhập vào từ bàn phím số bất kỳ
	// kiểm tra và in ra số đó là số dương hay số 0 hay là số âm
	int x = 0;
	printf("nhap so nguyen x bat ki: ");
	scanf("%d", &x);
	if (x > 0)
	{
		printf("so duong \n");
	}
	else if (x == 0)
	{
		printf("so 0 \n");
	}
	else
	{
		printf("so am \n");
	}


	// bài 3 kiểm tra năm nhuận
	// Nhập vào từ bàn phím số năm
	// Nếu đó là năm nhuận thì in ra "day la nam nhuan"
	// Nếu đó không phải năm nhuận thì in ra "day khong phai la nam nhuan"
	// 1 năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100

	int year = 0;
	printf("nhap vao so nam bat ki: ");
	scanf("%d", &year);

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("day la nam nhuan \n");
	}
	else
	{
		printf("day khong phai la nam nhuan \n");
	}

	// bài 4
	// Nhập vào từ bàn phím 3 số a, b, c
	// in ra số lớn nhất trong 3 số

	int q = 0;
	int w = 0;
	int e = 0;
	printf("nhap a: "); scanf("%d", &q);
	printf("nhap b: "); scanf("%d", &w);
	printf("nhap c: "); scanf("%d", &e);

	int max = q;
	if (w > q) 
	{
		max = w;
	}
	if (e > max)
	{
		max = e;
	}

	printf("so lon nhat la: %d \n", max);


	// Bài 5
	// nhập vào số điện sử dụng bất kì
	// tính tiền điện theo bậc
	// 
	// Bậc 1 (0 - 50 kWh): 1.984 đồng/kWh
	// Bậc 2 (51 - 100 kWh): 2.050 đồng/kWh
	// Bậc 3 (101 - 200 kWh): 2.380 đồng/kWh
	// Bậc 4 (201 - 300 kWh): 2.998 đồng/kWh
	// Bậc 5 (301 - 400 kWh): 3.350 đồng/kWh
	// Bậc 6 (từ 401 kWh trở lên): 3.460 đồng/kWh

	int tb1 = 1984;
	int tb2 = 2050;
	int tb3 = 2380;
	int tb4 = 2998;
	int tb5 = 3350;
	int tb6 = 3460;


	int sodien = 0;
	int sotien = 0;
	
	printf("nhap so dien: ");
	scanf("%d", &sodien);

	// logic tính toán tiền điện
	if (sodien > 400)
	{
		sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + 100 * tb4 + 100 * tb5 + (sodien - 400) * tb6;
	}
	else if (sodien > 300)
	{
		sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + 100 * tb4 + (sodien - 300) * tb5;
	}
	else if (sodien > 200)
	{
		sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + (sodien - 200) * tb4;
	} 
	else if (sodien > 100)
	{
		sotien = 50 * tb1 + 50 * tb2 +  (sodien - 100) * tb3;
	}
	else if (sodien > 50)
	{
		sotien = 50 * tb1 + (sodien - 50) * tb2;
	}
	else
	{
		sotien = sodien * tb1;
	}

	printf("so tien dien phai tra: %d \n", sotien);
	

}