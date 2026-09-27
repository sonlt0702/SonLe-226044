#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main()
{
	// Bài 19. Nhập vào ba số nguyên a, b, c và một phép toán +, -, *, /. 
	// Thực hiện phép tính tương ứng.
	// Nếu phép toán không hợp lệ hoặc phép chia có mẫu số bằng 0 thì thông báo lỗi.
	
	int a, b, c;
	char opr;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);

	printf("Nhap phep toan +, -, *, /: ");
	scanf(" %c", &opr);

	switch (opr) {
	case '+':
		printf("Tong cac so: %d \n", a + b + c);
		break;
	case '-':
		printf("Hieu cac so: %d \n", a - b - c);
		break;
	case '*':
		printf("Tich cac so: %d \n", a * b * c);
		break;
	case '/':
		if (b == 0 || c == 0) {
			printf("khong the thuc hien phep chia cho 0 \n");
			break;
		}
		printf("Thuong cac so: %f \n", a * 1.0 / b / c);
		break;
	default:
		printf("Phep toan khong hop le \n");
		break;
	}

	//bài 2:
	char str[10] = { 0 };

	printf("nhap ten: ");
	scanf("%s", &str);
	printf("ten da nhap: %s", str);

	//Bài 13. Nhập vào tháng và năm.
	// Cho biết tháng đó có bao nhiêu ngày.
	// Xử lý đúng trường hợp tháng 2 của năm nhuận.

	int thang;
	int nam;
	printf("nhap thang: "); scanf("%d", &thang);
	printf("nhap nam: "); scanf("%d", &nam);

	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("thang %d co 31 ngay \n", thang);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("thang %d co 30 ngay \n", thang);
		break;
	case 2:
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
			printf("thang 2 nam %d co 29 ngay \n", nam);
			break;
		}
		else {
			printf("thang 2 nanm %d co 28 ngay \n", nam);
			break;
		}
	default:
		printf("thang khong hop le \n");
		break;
	}

}