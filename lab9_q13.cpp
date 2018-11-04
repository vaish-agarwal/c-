#include<iostream>
using namespace std;

/*

 Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

*/

int main(){
 	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Array printed by NORMAL INDEX METHOD"<<endl;
	for(int a=0;a<10;a++){
		cout<<arr1[a]<<",";
	}
	cout <<endl;
	int *p=arr1;
	cout<<"Array printed by POINTER METHOD"<<endl;
	for(int b=0;b<10;b++){
		cout<<*(p+b)<<",";
	}
	
}
