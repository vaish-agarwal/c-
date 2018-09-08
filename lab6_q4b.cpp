#include<iostream>
using namespace std;
/*(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
*/
void min(int a, int b, int &c){
	if(a<b){
	c = a;
	}
	else if(a ==b){
	c = a;
	}
	else{
	c = b;
	}
}

		int main(){
		int a,b,min1;
		cout<<"enter 2 numbers"<<endl;
		cin>>a>>b;
		min(a, b, min1);
		cout<<"MIN:"<< min1 <<endl;
		}
