#include<iostream>
using namespace std;
int plarge(int arr[], int p){
cout<<"Which order of large no. is required?"<<endl;
cin>>p;
int n;
return arr[n - p];
}

int ksmall(int arr[], int k){
cout<<"Which order of small no. is required?"<<endl;
cin>>k;
return arr[k-1];
}


int main(){
int n;
cout<<"Enter the size of array:";
cin>>n;
	int a,k,p, arr[n];
	for(a = 1; a<=n ; a++){
       	 cout<<a<<":";
	 cin>>arr[a-1];
	 cout<<endl;
	}

	      for(int i = (n-1); i >0; i--){
		  for(a = 0; a<i ; a++){
		     if((arr[a])>(arr[a + 1])){
		     int temp = arr[a];
		     arr[a]= arr[a +1];
		     arr[a + 1] = temp;
		     }
		  }
	      }

cout<< ksmall(arr , k)<<endl;
cout<< plarge(arr, p)<<endl;



}
