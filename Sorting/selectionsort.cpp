#include <bits/stdc++.h>
using namespace std;
void SelectionSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = i+1; j < n; ++j){
			if (arr[i] > arr[j])
			{
				swap(arr[i],arr[j]);
			}	
		}
    }
}	
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	SelectionSort(arr, n);
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
		cout<<"->"<<arr[i];
 
	return 0;
}
