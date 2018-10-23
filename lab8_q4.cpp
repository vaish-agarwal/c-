#include<iostream>
using namespace std;

//----------------------------------* print function *---------------------------------
void print(int arr[],int n,int m)
{
	cout<<"sorted data:";
	for(int a = 0; a<(n +m) ; a++){
	cout<<arr[a]<<" ";
	}
cout<<endl;
}

//----------------------------* sort function *-----------------------------
int sort(int arr[],int n,int m)
{
	int temp;
	for(int i = ((n +m)-1); i >0; i--){
		for(int a = 0; a<i ; a++){
			if((arr[a])>(arr[a + 1])){
				int temp = arr[a];
				arr[a]= arr[a+1];
				arr[a+1] = temp;
			}
		}
	}

print(arr,n,m);
}



int main(){
	int n,m;
	cout<<"Enter the size of array1:";
	cin>>n;
	int arr1[n],a;
	for(a = 1; a<=n ; a++){
		 cout<<a<<":";
		 cin>>arr1[a-1];
	}

	cout<<"Enter the size of array2:";
	cin>>m;
	int arr2[m],b;
	for(b = 1; b<=m ; b++){
		 cout<<b<<":";
		 cin>>arr2[b-1];
	}
	int arr[n+m];

	for (int i = 0; i<n ; i++){
		arr[i] = arr1[i];
	}

	for(int j =n; j<m+n ; j++){

		 arr[j] = arr2[(j-n)];
	}
	
	cout<<"combined data:";
	for(int i = 0; i<(n+m); i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	sort(arr,n,m);

	cout<<"minimum:"<<arr[0]<<endl;
	cout<<"maximum:"<<arr[(n+m)-1]<<endl;


}
