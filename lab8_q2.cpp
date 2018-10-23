#include<iostream>
using namespace std;

//----------------------------* sort function *-----------------------------
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
//----------------------------* input function *--------------------------------
void input(int arr[],int n)
{
	for(int a = 1; a<=n ; a++){
		 cout<<a<<":";
		 cin>>arr[a-1];
		 cout<<endl;
	}
}
//---------------------------* sum function *------------------------------
int sum(int arr[],int n)
{
	int sum=0;
	for(int a = 1; a<=n ; a++){
		
		 sum = sum + arr[a-1];
	}
	return sum;
}
//--------------------------* mean function *--------------------------------------
float mean(int arr[],int n)
{
	return (float)sum(arr,n)/n;
}
//----------------------------------* print function *---------------------------------
void print(int arr[],int n)
{
	for(int a = 0; a<n ; a++){
	cout<<arr[a]<<" ";
	}
cout<<endl;
}

//--------------------------------* median function *---------------------------

int median(int arr[],int n)
{	
	
	if(n%2 == 1){
	return arr[(n-1)/2];
	}
	else{
	return (float)(arr[(n)/2] + arr[(n-2)/2])/2;
	}

}
	
//---------------------------* mode function *-----------------------------------
void mode(int arr[],int n)
{
	
	int freq=1,maxfreq=0,maxvalue=0;

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


	cout<< "Maxfreq:"<<maxfreq<<endl;
	cout<< "Mode:"<<maxvalue<<endl;


}	

//--------------------------* distinct function *-----------------------------

void dist(int arr[],int n)
{
	int p[n];
	int j=1;
	p[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		p[j++]=arr[i];
	}
	print(p,j);
}
		

//--------------------------------------* main function *------------------------------
int main()
{

	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n],a;
	
	input(arr,n);
	
	sort(arr,n);
		
	print(arr,n);
	
	cout<<"MEAN:"<<mean(arr,n)<<endl;

	cout<<"MEDIAN:"<<median(arr, n)<<endl;
	
	mode(arr,n);

	cout<<"Minimum"<<arr[0];
	cout<<"Maximum"<<arr[n-1];

	dist(arr,n);
}

