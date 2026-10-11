#include "lib.h"

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