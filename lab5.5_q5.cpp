#include<iostream>
using namespace std;
int main(){
int n;

cout<<"Right triangle single pattern"<<endl;
cout<<"enter a no."<<endl;
cin>>n;
/*


*
**
* *
*  *
***** 

*/
	for(int i = 0; i <n; i++){
	//print stars for i=1,2,n

		if(i ==0 || i == 1 || i ==(n-1)){
			for(int a = 0; a <(i+1); a++){
			cout<<"*";
			}
		
		}
                //print stars for other values of i
		
		else{
                //print stars
		cout<<"*";
				
		//print space
			for(int b = 0; b <(i-1); b++){
			cout<<" ";
			
			}
		//print stars
		cout<<"*";
				
		}



	cout<<endl;



	}
}
