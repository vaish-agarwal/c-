#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Hollow diamond star pattern "<<endl;
cout<<"enter a even no."<<endl;
cin>>n;
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********



*/
	//print n rows
	
	bool flag=0;
	for(int i = 0; 0 <=i;){

		//print stars
		for(int s = 0; s < ((n+1)-i); s++){
		cout<<"*";
		}
	
		//print space 
		for(int a = 0; a < (2*i); a++){
		cout<<" ";
		}

		//print stars
		for(int b = 0; b < ((n+1)-i); b++){
		cout<<"*";
		}
	cout<<endl;	

	if(i==(n))
	flag=1;

	if(flag==1)
	i--;
	else
	i++;	

	}


	


}
