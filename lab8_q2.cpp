#include<iostream>
using namespace std;


int sort(int arr[],int n)
{
	int temp;
	for(int i = (n-1); i >0; i--){
		for(int a = 0; a<i ; a++){
			if((arr[a])>(arr[a + 1])){
				int temp = arr[a];
				arr[a]= arr[a+1];
				arr[a+1] = temp;
			}
		}
	}
}
	
void input(int arr[],int n)
{
	for(int a = 1; a<=n ; a++){
		 cout<<a<<":";
		 cin>>arr[a-1];
		 cout<<endl;
	}
}

int sum(int arr[],int n)
{
	int sum=0;
	for(int a = 1; a<=n ; a++){
		
		 sum = sum + arr[a-1];
	}
	return sum;
}

float mean(int arr[],int n)
{
	return (float)sum(arr,n)/n;
}

void print(int arr[],int n)
{
	for(int a = 0; a<n ; a++){
	cout<<arr[a]<<" ";
	}
cout<<endl;
}


int median(int arr[],int n)
{	
	
	if(n%2 == 1){
	return arr[(n-1)/2];
	}
	else{
	return (float)(arr[(n)/2] + arr[(n-2)/2])/2;
	}

}
	

int mode(int arr[],int n)

{
	
	int freq=1,maxfreq=1,maxvalue=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		freq++;
		else
		freq=1;

		if(freq>maxfreq)
		{
			maxfreq=freq;
			maxvalue=arr[i];
		}
}
		
int main()
{

	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n],a;
	
	cout<<"MEAN:"<<mean(arr,n)<<endl;

	sort(arr,n);
	
	

}

