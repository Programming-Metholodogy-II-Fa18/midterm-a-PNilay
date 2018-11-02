/*
 * Data.h
 *
 *  Created on: Nov 2, 2018
 *      Author: npp81
 */

#ifndef DATA_H_
#define DATA_H_
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
class Data{

private:
	node *head;

public:
	Data()
{
		head = NULL;
		cout<<"\nData"<<endl;
}
	void add(int a);
	int remove();
	int getValue(int index);

};



#endif /* DATA_H_ */
