#include<iostream>
using namespace std;


int main(){
int n,m,i;
int arr[i];
	cout<<"Enter the size of array1:";
	cin>>n;
	int arr1[n],a;
	for(a = 1; a<=n ; a++){
		 cout<<a<<":";
		 cin>>arr1[a-1];
		 cout<<endl;
	}

	cout<<"Enter the size of array2:";
	cin>>m;
	int arr2[m],b;
	for(b = 1; b<=m ; b++){
		 cout<<b<<":";
		 cin>>arr2[b-1];
		 cout<<endl;
	}

for ( i = 0; i<n ; i++){
 arr[i] = arr1[i];
}

for(int j =0; j<m ; j++){
int arr[i] = arr2[j];
i++;
}

for(i = 0; i<(n+m); i++){
cout<<arr[i]<<" ";
}



}
