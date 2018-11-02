#include<iostream>
#include "Data.h"
using namespace std;

int main()
{

cout<<"\nHello"<<endl;
Data N;
N.add(1);
N.add(9);
N.add(4);
N.add(5);
N.add(10);
N.add(0);
N.remove();
N.remove();
cout<<N.getValue(0);
cout<<N.getValue(3);
	return 0;
}
