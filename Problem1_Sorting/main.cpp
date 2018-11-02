#include<iostream>
using namespace std;

void ExamSort(int *a, int size);
void MergeSort(int *arr, int lo, int hi);
void Merge(int *arr, int lo, int mid, int hi);
int main()
{

	int *Array;
	int array[7] = {15,9,60,44,12,1,4};
	Array = array;
	cout<<"\nHello"<<endl;

	/*
	for(int i =0; i<7; i++)
	{
		cout<<" "<<Array[i]<<endl;
	}
	*/
	ExamSort(Array, 7);
	return 0;
}

void ExamSort(int *a, int size)
{

	MergeSort(a, 0, size-1);

}

void MergeSort(int *arr, int lo, int hi)
{


	if(hi<=lo)
		return;
	int mid = lo +(hi-lo)/2;
	MergeSort(arr, lo, mid);
	MergeSort(arr, mid+1, hi);
	Merge(arr, lo, mid, hi);

}

void Merge(int *arr, int lo, int mid, int hi)
{
	if(hi<=lo)
		return;
	int *aux = new int[hi-lo];
	for(int i = lo; i<=hi; i++)
	{
		aux[i] = arr[i];
	}

	int x = lo;
	int y = mid+1;

	for(int k = lo; k<=hi; k++)
	{
		if(x>mid)
		{
			arr[k] = aux[y++];
		}
		else if(y>hi)
		{
			arr[k] = aux[x++];
		}
		else if(aux[y]>aux[x])
		{
			arr[k] = aux[y++];
		}
		else
		{
			arr[k] = aux[x++];
		}
	}

}
