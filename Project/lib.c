#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

char kiem_tra_so_nguyen_to(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int tim_ucln(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int tim_bcnn(int a, int b)
{
	int max = a > b ? a : b;
	for (int i = max; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			return i;
		}
	}
}

int str_len(char* str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}

	return count;
}

int arr_sum(int* arr, int len)
{
	int sum = 0;
	// logic
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;

}

void str_upper(char* str)
{
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void arr_sort(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len;j++)
		{
			if (arr[i] > arr[j])
			{
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

void arr_print(int* arr, int len)
{
	printf("arr: { ");
	for (int i = 0; i < len;i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("} \n");
}

char str_upper_char(char* c) 
{
	if (*c >= 'a' && *c <= 'z')
	{
		return *c - 32;
	}
	return *c;
}

char str_lower_char(char* c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		return *c + 32;
	}
	return *c;
}

void str_format_name(char* str)
{
	//char str[] = "  le  thAnh    soN  ";
	int i = 0;
	int j = 0;
	int dautu = 1;

	while (str[i] == ' ')
	{
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (dautu)
			{
				str[j] = str_upper_char(&str[i]);
				j++;
				dautu = 0;
			}
			else {
				str[j] = str_lower_char(&str[i]);
				j++;
			}
		}
		else
		{
			if (str[j - 1] != ' ')
			{
				str[j] = ' ';
				j++;
			}
			dautu = 1;
		}
		i++;
	}
	if (str[j - 1] == ' ')
	{
		str[j - 1] = '\0';
	}

}

int str_find_str(char* str1, char* str2)
{
	//char str1[] = "hello world";
	//char str2[] = "lo";
	int i = 0;
	int j = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[j])
		{
			if (str2[j + 1] == '\0')
			{
				return 1;
			}
			j++;
		}
		else
		{
			if (j > 0)
			{
				i = i - j;
				j = 0;
			}
		}
		i++;
	}
	return 0;
}

void boc_tach_email(char* email, char* username, char* domain)
{
	int isDoneUsername = 0;
	while (*email != '\0')
	{
		if (*email == '@')
		{
			isDoneUsername = 1;
			email++;
			continue;
		}

		if (!isDoneUsername)
		{
			*username = *email;
			username++;
		}
		else
		{
			*domain = *email;
			domain++;
		}
		email++;
	}
}

char* str_concat(char* str3, char* str4)
{
	//char str3[] = "hello";
	//char str4[] = " world!";

	int n = 0;
	char* p = str3;
	char* q = str4;
	while (*p != '\0')
	{
		n++;
		p++;
	}
	while (*q != '\0')
	{
		n++;
		q++;
	}

	//char str5[1000] = { 0 };
	char* str5 = calloc(n+1, 1);

	int i = 0;
	while (*str3 != '\0')
	{
		str5[i] = *str3;
		str3++;
		i++;
	}
	while (*str4 != '\0')
	{
		str5[i] = *str4;
		str4++;
		i++;
	}
	return str5;
}

void in_thong_tin_hoc_sinh(hoc_sinh_t hs)
{
	char* convert_gt[] = { "Nam", "Nu" };
	char* convert_xl[] = { "Chua xep loai", "Gioi", "Kha", "Trung Binh", "Yeu" };

	printf("ten: %s, tuoi: %d, gioi tinh: %s, diem toan: %.1f, diem van: %.1f, xep loai: %s \n",
		hs.ten, 
		hs.tuoi, 
		convert_gt[hs.gt],
		hs.diemtoan,
		hs.diemvan,
		convert_xl[hs.loai]
	);
}

float tinh_diem_trung_binh(hoc_sinh_t hs)
{
	char* convert_gt[] = { "NAM", "NU" };
	float dtb = (hs.diemtoan + hs.diemvan) / 2;
	return dtb;
}

int tim_hoc_sinh_gioi_toan_nhat(hoc_sinh_t* arr, int len)
{
	int vi_tri = 0;
	float dt_max = arr[0].diemtoan;
	for (int i = 1; i < len; i++)
	{
		if (arr[i].diemtoan > dt_max)
		{
			dt_max = arr[i].diemtoan;
			vi_tri = i;
		}
	}
	return vi_tri;
}

int tim_hoc_sinh_diem_tb_cao_nhat(hoc_sinh_t* arr, int len)
{
	int vi_tri = 0;
	float dtb_max = tinh_diem_trung_binh(arr[0]);
	for (int i = 1; i < len; i++)
	{
		if (tinh_diem_trung_binh(arr[i]) > dtb_max)
		{
			dtb_max = tinh_diem_trung_binh(arr[i]);
			vi_tri = i;
		}
	}
	return vi_tri;
}

void xep_loai_toan_bo_hs(hoc_sinh_t* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		float dtb = tinh_diem_trung_binh(arr[i]);
		if (dtb >= 8.0)
		{
			arr[i].loai = GIOI;
		}
		else if (dtb >= 6.5)
		{
			arr[i].loai = KHA;
		}
		else if (dtb >= 5.0)
		{
			arr[i].loai = TRUNGBINH;
		}
		else
		{
			arr[i].loai = YEU;
		}
	}
}