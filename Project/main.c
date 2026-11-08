#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

// linked list là 1 dạng của mảng động, 
// cho phép lưu trữ giá trị ở các ô nhớ không liên tiếp
// và có thể tăng giảm tùy ý

// giả sử 
// đối tượng 1 có giá trị là A tại vùng nhớ 0x1000 và vùng nhớ của đối tượng 2 là 0x1007
// suy ra đối tượng 1 cần 2 biến: value lưu giá trị A, next_node lưu địa chỉ của đối tượng 2
// đối tượng 2 có giá trị là B tại vùng nhớ 0x1007
// suy ra đối tượng 2 cần 2 biến: value lưu giá trị B, next_node lưu địa chỉ của đối tượng 3
// đối tượng 3 có giá trị là C tại vùng nhớ 0x1013
// suy ra đối tượng 3 cần 2 biến: value lưu giá trị C, next_node lưu địa chỉ của đối tượng 4
// đối tượng 4 có giá trị là D tại vùng nhớ 0x1005
// suy ra đối tượng 4 cần 2 biến: value lưu giá trị D, next_node lưu địa chỉ của đối tượng 5
// (nếu không có thì lưu NULL)

typedef struct {
	int value; // giá trị của node
	void* next_node; // địa chỉ của node tiếp theo
} node;

typedef struct {
	node* root_node; // địa chỉ của node đầu tiên
	int size; // số lượng node
} linked_list;

void linked_list_init(linked_list* ll)
{
	ll->root_node = NULL;
	ll->size = 0;
}

void linked_list_add_node(linked_list* ll, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;

	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else
	{
		node* temp = ll->root_node;
		//for (int i = 0; i < ll->size - 1;i++)
		//{
		//	temp = (node*)(temp->next_node);
		//}
		while (temp->next_node != NULL)
		{
			temp = (node*)(temp->next_node);
		}
		temp->next_node = n;
	}
	ll->size++;

}

void linked_list_show_all_node(linked_list* ll)
{
	node* temp = ll->root_node;
	int i = 0;
	while (temp->next_node != NULL)
	{
		printf("Gia tri cua node tai vi tri %d la: %d \n", i, temp->value);
		temp = (node*)(temp->next_node);
		i++;
	}
	printf("Gia tri cua node tai vi tri %d la: %d \n", i, temp->value);
}

int linked_list_get_value(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	for (int i = 0; i < index - 1; i++)
	{
		temp = (node*)(temp->next_node);
	}
	return temp->value;
}

/**
* @brief Hàm xóa 1 node trong linked list
* @param (linked_list*): địa chỉ của linked list
* @param (int): vị trí của node cần xóa
*/
void linked_list_remove_node(linked_list* ll, int index);

/**
* @brief Hàm insert 1 node vào linked list tại ví trí bất kì
* @param (linked_list*): địa chỉ của linked list
* @param (int): vị trí của node cần insert
* @param (int): giá trị của node cần insert
*/
void linked_list_insert_node(linked_list* ll, int index, int val);

void main()
{

	linked_list l; 
	linked_list_init(&l);
	linked_list_add_node(&l, 10);
	linked_list_add_node(&l, 20);
	linked_list_add_node(&l, 30);
	linked_list_add_node(&l, 40);
	linked_list_add_node(&l, 50);

	linked_list_show_all_node(&l);

	int val = linked_list_get_value(&l, 3);
	printf("val node 3: %d \n", val);

	// BTVN
	// 1. viết hàm xóa 1 node trong linked_list tại vị trí mong muốn
	// 2. viết hàm thêm 1 node vào linked_list tại vị trí mong muốn

}

