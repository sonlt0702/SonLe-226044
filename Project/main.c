#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"

int tim_vi_tri_phan_tu(int* arr, int length, int value)
{

	int vi_tri = -1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == value)
		{
			vi_tri = i;
			//break;
		}
	}

	return vi_tri;
}

void main()
{
	int x = 0x12345678;

	short* px = &x;

	printf("gia tri cua bien x: %x \n", *(px + 1));

	*px = 0x55;
	*(px + 1) = 0x77;
	printf("gia tri cua bien x lan 2: %x \n", x);

	short x = 0x1234;

	char* px = &x;

	printf("byte thap: %x \n", *px);
	printf("byte cao: %x \n", *(px+1));

	int arr[] = { 1,2,3,4,5,6 };

	int* px;
	px = arr;
	printf("px : %x, \n", px);
	printf("gia tri px : %d, \n", *(px+2));

	for (int i = 0; i < 6; i++)
	{
		printf("arr[%d]: %d \n", i, *(arr+i)); // tương đương arr[i]
	}

}

