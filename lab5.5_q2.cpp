#include<iostream>
using namespace std;
int main(){
/*

*****
 ****
  ***
   **
    *

*/

	//no. of rows
	for(int i =0 ; i <5 ; i++){
		//no. of coloumns of spaces
		for(int a = 0; a < i; a++){
		cout<<" ";
		}
			//no. of coloumn of stars 
			for(int j = 0; j <(5-i) ; j++){
			cout<<"*";
			}
	cout<<endl;

	}




}
