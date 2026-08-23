#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	unsigned char x = 1234;
	printf("%d \n", x);

	printf("%d \n", sizeof(char));
	printf("%d \n", sizeof(int));
	printf("%d \n", sizeof(long long));
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(double));

	char m = 0x6d;

	printf("%c \n", m);

	float pi = 3.14;
	printf("pi: %.2f \n", pi);

	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);

	printf("n: %d \n", n);

	// bài 1: yêu cầu user nhập vào kí tự bất kì
	// in ra dạng thập phân (hệ 10) 
	// in dạng thập lục phân(hệ 16)

	char x = 0;
	printf("Nhap ki tu bat ki: ");
	scanf("%c", &x);

	printf("he 10: %d \n", x);
	printf("he 16: %x \n", x);

	// bài 2: yêu cầu user nhập vào mssv và điểm (float)
	// in mssv và điểm vừa ra màn hình

	int mssv = 0;
	float diem = 0;

	printf("Nhap mssv: ");
	scanf("%d", &mssv);
	printf("Nhap diem: ");
	scanf("%f", &diem);

	printf("MSSV: %d, Diem: %.1f \n", mssv, diem);

	// bài 3 yêu cầu user nhập vào 2 số nguyên a, b
	// in ra tổng, hiệu, tích, thương cho mỗi dòng

	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);

	printf("Tong: %d \n", a + b);
	printf("Hieu: %d \n", a - b);
	printf("Tich: %d \n", a * b);
	printf("Thuong: %d \n", a / b);
	printf("Du: %d \n", a % b);

	// bài 4: yêu cầu user nhập vào nhiệt độ C (số nguyên)
	// đổi sang độ F và in ra màn hình (số thực)
	// F = C * 9/5 + 32

	int c = 0;
	printf("Nhap nhiet do C: ");
	scanf("%d", &c);
	printf("Nhiet do F: %.1f", c * 9.0 / 5 + 32);

	// bài 5: yêu cầu user nhập vào số giây (số nguyên)
	// in ra số giờ, số phút, số giây trên mỗi dòng
	// 3672
	// 1 giờ
	// 1 phút
	// 12 giây

	int s = 0;
	printf("Nhap so giay: ");
	scanf("%d", &s);

	printf("So gio: %d \n", s / 3600);
	s = s % 3600;
	printf("So phut: %d \n", s / 60);
	s %= 60;
	printf("So giay: %d \n", s);

	// bài 6: yêu cầu user nhập vào bán kính r
	// in ra chu vi, diện tích của hình tròn bán kính r đó trên mỗi dòng
	// chuvi = 2*r*3.14
	// dientich = r*r*3.14

	int r = 0;
	printf("Nhap ban kinh r: ");
	scanf("%d", &r);

	printf("chu vi: %f \n", 2 * r * 3.14);
	printf("dien tich: %f \n", r * r * 3.14);



}