#include <iostream>
using namespace std;
int main()
{
	int arr[10],n,max,i;
	cout<<"enter the size of an array:";
	cin>>n;
	cout<<"enter the elements of an array:";
	for(i=0;i<n;i++)
		cin>>arr[i];
		max=arr[0];
		for(i=0;i<n;i++)
		{
			if(max<arr[i])
				max=arr[i];
				
		}
	cout<<"largest element:"<<max;

	return 0;
}
