#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
int sum = 0;
	for( int a=1; a<=n; a++)
	{
	sum = sum + arr[a-1];
	}
return sum;
}




int main()
{
int a,n;
cout<<"Enter the no. of elements in array."<<endl;
cin>>n;
int arr[n];
	for( a = 1; a<= n; a++)
	{
	cout<<"Enter element no."<< a <<":"<<endl;
	cin>>arr[a-1];
	}
int sum1 = sum(arr,n);
cout<<"Mean:"<<(float)sum1/n;
}





