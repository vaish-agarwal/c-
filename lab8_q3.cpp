#include<iostream>
using namespace std;


//------------------------*klarge function*-----------------

int klarge(int arr[],int n){
int k;
cout<<"Which order of large no. is required?"<<endl;
cin>>k;

for(int i = (n-1); i >0; i--){
		  for(int a = 0; a<i ; a++){
		     if((arr[a])<(arr[a + 1])){
		     int temp = arr[a];
		     arr[a]= arr[a +1];
		     arr[a + 1] = temp;
		     }
		  }
	      }

	int p[n];
	int j=1;
	p[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		p[j++]=arr[i];
	}
	

return p[k-1];
}

//---------------------------*ksmall function*----------------------

int ksmall(int arr[],int n){
int k;
cout<<"Which order of small no. is required?"<<endl;
cin>>k;

for(int i = (n-1); i >0; i--){
		  for(int a = 0; a<i ; a++){
		     if((arr[a])>(arr[a + 1])){
		     int temp = arr[a];
		     arr[a]= arr[a +1];
		     arr[a + 1] = temp;
		     }
		  }
	      }

	int p[n];
	int j=1;
	p[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		p[j++]=arr[i];
	}
	

return p[k-1];
}


int main(){
	int n;
	cout<<"Enter the size of array:";
        cin>>n;
	int a,p, arr[n];
	
	for(a = 1; a<=n ; a++){
       	 cout<<a<<":";
	 cin>>arr[a-1];
	 cout<<endl;
	}
	

	

	cout<<"Kth order small no.:"<< ksmall(arr ,n)<<endl;
	cout<<"Kth order small no.:"<< klarge(arr,n)<<endl;



}
