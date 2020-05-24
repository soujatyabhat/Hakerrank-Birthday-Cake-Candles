#include<iostream>
using namespace std;
int max(int *arr,int n)
{
	int i,max;
	max = arr[0];
	for(i=0;i<n;i++)
		{
			if(max < arr[i])
				{
					max = arr[i];
				}	
		}
		return max;
}
int count(int *arr,int max,int n)
{
	int i;
	int count = 0;
	for(i=0;i<n;i++)
		{
			if(arr[i] == max)
				count++;
		}
		return count;
}
int main()
{
	int n,i,max_value,cont;
	cin>>n;
	int *arr = new int[n];
	for(i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
	system("cls");
	max_value = max(arr,n);
	cont = count(arr,max_value,n);
	cout<<cont;
return 0;
}
