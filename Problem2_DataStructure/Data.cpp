/*
 * Data.cpp
 *
 *  Created on: Nov 2, 2018
 *      Author: npp81
 */
#include "Data.h"


void Data::add(int a)
{
	node*temp = head;
	node *newNode = new node;
	newNode->data = a;
	newNode->next= NULL;
	if(head == NULL)
	{
		head = newNode;

	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

int Data::remove()
{
	int remove = head->data;
	head = head->next;
	return remove;
}

int Data::getValue(int index)
{
	node*temp = head;
	while(index != 0 || temp->next != NULL)
	{
		temp = temp->next;
		index = index -1;
	}
	if(index != 0)
	{
		return -1;
	}
	else
	{
		return temp->data;
	}
}
